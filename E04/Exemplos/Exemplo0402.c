/*
    Exemplo0402 - v0.0. - 22 / 09 / 2024
    Autor: Daniel Alves Goncalves
*/
// dependencias
#include "io.h" // para definicoes proprias
/**
Method_00 - nao faz nada.
*/
void method_00 ( void )
{
    // nao faz nada
} // end method_00 ( )

/**
Method_01 - Repeticao para ler certa quantidade de valores.
*/
void method_01 ( )
{
// definir dado
int quantidade = 0;
int valor = 0;
int controle = 0;
// identificar
IO_id ( "Method 01 - v0.0" );
// ler do teclado
quantidade = IO_readint ( "Entrar com uma quantidade: " );
// repetir para a quantidade de vezes informada
controle = 1;
while ( controle <= quantidade )
{
// ler valor do teclado
valor = IO_readint ( IO_concat (
IO_concat ( "", IO_toString_d ( controle ) ),
": " ) );
// mostrar valor lido
printf ( "\n%s%d", "valor = ", valor );
// passar ao proximo valor
controle = controle + 1;
} // end while
// encerrar
IO_pause ( "Apertar ENTER para continuar" );
} // end method_01 ( )

/**
Funcao para determinar se valor inteiro e' positivo.
@return true, se positivo; false, caso contrario
@param x - valor a ser testado
*/
bool positive ( int x )
{
// definir dado local
bool result = false;
// testar a condicao
if ( x > 0 )
{
result = true;
} // end if
return ( result );
} // end positive ( )
/**
Method_02 - Ler valores e contar positivos.
*/
void method_02 ( )
{
// definir dado
int quantidade = 0;
int valor = 0;
int controle = 0;
int contador = 0;
// identificar
IO_id ( "Method02 - v0.0" );
// ler do teclado
quantidade = IO_readint ( "Entrar com uma quantidade: " );
// repetir para a quantidade de vezes informada
controle = 1;
while ( controle <= quantidade )
{
// ler valor do teclado
valor = IO_readint ( IO_concat (
IO_concat ( "", IO_toString_d ( controle ) ),
": " ) );
// testar e contar se valor for positivo
if ( positive ( valor ) )
{
contador = contador + 1;
} // end if
// passar ao proximo valor
controle = controle + 1;
} // end while
// mostrar a quantidade de valores positivos
IO_printf ( "%s%d\n", "Positivos = ", contador );
// encerrar
IO_pause ( "Apertar ENTER para continuar" );
} // end method_02 ( )

/**
Funcao para determinar se valor inteiro pertence a intervalo aberto.
@return true, se pertencer; false, caso contrario
@param x - valor a ser testado
@param inferior - limite inferior do intervalo
@param superior - limite superior do intervalo
*/
bool belongsTo ( int x, int inferior, int superior )
{
// definir dado local
bool result = false;
// testar a condicao
if ( inferior < x && x < superior )
{
result = true;
} // end if
return ( result );
} // end belongsTo ( )
/**
Method_03 - Ler valores e contar positivos menores que 100.
*/
void method_03 ( )
{
// definir dado
int quantidade = 0;
int valor = 0;
int controle = 0;
int contador = 0;
// identificar
IO_id ( "Method_03 - v0.0" );
// ler do teclado
quantidade = IO_readint ( "Entrar com uma quantidade: " );
// repetir para a quantidade de vezes informada
controle = 1;
while ( controle <= quantidade )
{
// ler valor do teclado
valor = IO_readint ( IO_concat (
IO_concat ( "", IO_toString_d ( controle ) ),
": " ) );
// testar e contar se valor for positivo
if ( belongsTo ( valor, 0, 100 ) )
{
contador = contador + 1;
} // end if
// passar ao proximo valor
controle = controle + 1;
} // end while
// mostrar a quantidade de valores positivos
IO_printf ( "%s%d\n", "Positivos menores que 100 = ", contador );
// encerrar
IO_pause ( "Apertar ENTER para continuar" );
} // end method_03 ( )

int main ( )
{
    // definir dado
    int x = 0;
    // repetir até desejar parar
    do
    {
        // identificar
        IO_id ( "EXEMPLO0402 - Programa - v0.0" );
        // ler do teclado
        IO_println ( "Opcoes" );
        IO_println ( "0 - Parar" );
        IO_println ( "1 - Repeticao para ler certa quantidade de valores" );
        IO_println ( "2 - Ler valores e contar positivos" );
        IO_println ( "3 - Ler valores e contar positivos menores que 100" );
        IO_println ( "" );
        x = IO_readint ( "Entrar com uma opcao: " );
        // testar valor
        switch ( x )
        {
            case 0: method_00 ( ); break;
            case 1: method_01 ( ); break;
            case 2: method_02 ( ); break;
            case 3: method_03 ( ); break;
            default:
            IO_pause ( IO_concat ( "Valor diferente das opcoes [0,1,2,3] (",
            IO_concat ( IO_toString_d ( x ), ")" ) ) );
        } // end switch
    }
    while ( x != 0 );
    // encerrar
    IO_pause ( "Apertar ENTER para terminar" );
    return ( 0 );
} // end main ( )

/*
---------------------------------------------- documentacao complementar
Nao apresentou erros!
---------------------------------------------- notas / observacoes / comentarios
Pede uma cadeia e retorna apenas os valores positivos menores que 100!
---------------------------------------------- previsao de testes
a.) 101,-4,532,3,94,-325
---------------------------------------------- historico
Versao Data Modificacao
0.1 22/09 esboco
---------------------------------------------- testes
Versao Teste
0.1 01. ( OK ) identificacao de programa
*/