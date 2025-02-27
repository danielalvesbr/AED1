/*
    Exemplo0300 - v0.0. - 09 / 09 / 2024
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
    Method_01 - Repeticao com teste no inicio.
*/
void method_01 ( void )
{
    // definir dado
    int x = 0;
    // identificar
    IO_id ( "Method_01 - v0.0" );
    // ler do teclado o valor inicial
    x = IO_readint ( "Entrar com uma quantidade: " );
    // repetir (x) vezes
    while ( x > 0 )
    {
        // mostrar valor atual
        IO_println ( IO_toString_d ( x ) );
        // passar ao proximo valor
        x = x - 1;
    } // end while
    // encerrar
    IO_pause ( "Apertar ENTER para continuar" );
} // end method_01 ( )

/*
Funcao principal.
@return codigo de encerramento
*/
int main ( )
{
    // definir dado
    int x = 0;
    // repetir até desejar parar
    do
    {
        // identificar
        IO_id ( "EXEMPLO0300 - Programa - v0.0" );
        // ler do teclado
        IO_println ( "Opcoes" );
        IO_println ( "0 - Parar" );
        IO_println ( "1 - Repeticao com teste no inicio" );
        IO_println ( "" );
        x = IO_readint ( "Entrar com uma opcao: " );
        // testar valor
        switch ( x )
        {
            case 0: method_00 ( ); break;
            case 1: method_01 ( ); break;
            default:
            IO_pause ( IO_concat ( "Valor diferente das opcoes [0,1] (",
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
Faz uma coluna com um retrocesso dos numeros a partir do numero inserido ate chegar no 1 (decrescente)
---------------------------------------------- previsao de testes
a.) 0   N/D
b.) 1   OK
c.) 2   OK
d.) 3   OK
e.) 4   OK
f.) -1  N/D
---------------------------------------------- historico
Versao Data Modificacao
0.1 09/09 esboco
---------------------------------------------- testes
Versao Teste
0.1 01. ( OK ) identificacao de programa
*/