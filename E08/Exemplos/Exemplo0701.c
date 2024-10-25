/*
    Exemplo0701 - v0.0. - 10 / 11 / 2024
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
writeInts - Gravar em arquivo texto certa quantidade de valores.
@param fileName - nome do arquivo
@param x - quantidade de valores
*/
void writeInts ( chars fileName, int x )
{
// definir dados
FILE* arquivo = fopen ( fileName, "wt" );
int y = 0;
// repetir para a quantidade de dados
for ( y = 1; y <= x; y = y + 1 )
{
// gravar valor
fprintf ( arquivo, "%d\n", y );
} // end for
// fechar arquivo (INDISPENSAVEL para gravacao)
fclose ( arquivo );
} // end writeInts ( )
/**
Method_01 - Mostrar certa quantidade de valores.
*/
void method_01 ( )
{
// identificar
IO_id ( "Method_01 - v0.0" );
// executar o metodo auxiliar
writeInts ( "DADOS1.TXT", 10 );
// encerrar
IO_pause ( "Apertar ENTER para continuar" );
} // end method_01 ( )

/**
readInts - Ler de arquivo texto certa quantidade de valores.
@param fileName - nome do arquivo
@param x - quantidade de valores
*/
void readInts ( chars fileName )
{
// definir dados
FILE* arquivo = fopen ( fileName, "rt" );
int x = 0;
// tentar ler o primeiro
fscanf ( arquivo, "%d", &x );
// repetir enquanto houver dados
while ( ! feof ( arquivo ) )
{
// mostrar valor
printf ( "%d\n", x );
// tentar ler o proximo
fscanf ( arquivo, "%d", &x );
} // end while
// fechar arquivo (RECOMENDAVEL para leitura)
fclose ( arquivo );
} // end readInts ( )
/**
Method_02.
*/
void method_02 ( )
{
// identificar
IO_id ( "Method_02 - v0.0" );
// executar o metodo auxiliar
readInts ( "DADOS1.TXT" );
// encerrar
IO_pause ( "Apertar ENTER para continuar" );
} // end method_02 ( )

int main ( )
{
    // definir dado
    int x = 0;
    // repetir até desejar parar
    do
    {
        // identificar
        IO_id ( "EXEMPLO0701 - Programa - v0.0" );
        // ler do teclado
        IO_println ( "Opcoes" );
        IO_println ( "0 - Parar" );
        IO_println ( "1 - Gravar em arquivo texto certa quantidade de valores" );
        IO_println ( "2 - Ler de arquivo texto certa quantidade de valores" );
        IO_println ( "" );
        x = IO_readint ( "Entrar com uma opcao: " );
        // testar valor
        switch ( x )
        {
            case 0: method_00 ( ); break;
            case 1: method_01 ( ); break;
            case 2: method_02 ( ); break;
            default:
            IO_pause ( IO_concat ( "Valor diferente das opcoes [0,1,2] (",
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
n/d
---------------------------------------------- notas / observacoes / comentarios
Le um arquivo os valores de 1 ate 10.
---------------------------------------------- previsao de testes
n/d
---------------------------------------------- historico
Versao Data Modificacao
0.1 10/11 esboco
---------------------------------------------- testes
Versao Teste
0.1 01. ( OK ) identificacao de programa
*/
