/*
    Exemplo0504 - v0.0. - 28 / 09 / 2024
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
Method_01a - Mostrar certa quantidade de valores.
@param x - quantidade de valores a serem mostrados
*/
void method_01a ( int x )
{
    // definir dado local
    int y = 1; // controle
    // repetir enquanto controle menor que a quantidade desejada
    while ( y <= x )
    {
        // mostrar valor
        IO_printf ( "%s%d\n", "Valor = ", y );
        // passar ao proximo
        y = y + 1;
    } // end if
} // end method_01a( )
/**
Method_01 - Mostrar certa quantidade de valores.
OBS.: Preparacao e disparo de outro metodo.
*/
void method_01 ( )
{
    // identificar
    IO_id ( " Method_01 - v0.0" );
    // executar o metodo auxiliar
    method_01a ( 5 );
    // encerrar
    IO_pause ( "Apertar ENTER para continuar" );
} // end method_01 ( )

/**
Method_02a - Mostrar certa quantidade de valores pares.
@param x - quantidade de valores a serem mostrados
*/
void method_02a ( int x )
{
// definir dado local
int y = 1; // controle
int z = 2;
// repetir enquanto controle menor que a quantidade desejada
while ( y <= x )
{
// mostrar valor
IO_printf ( "%d: %d\n", y, z );
// passar ao proximo par
z = z + 2;
// passar ao proximo valor controlado
y = y + 1;
} // end while
} // end method_02a( )
/**
Method_02.
*/
void method_02 ( )
{
// identificar
IO_id ( "Method_02 - v0.0" );
// executar o metodo auxiliar
method_02a ( 5 );
// encerrar
IO_pause ( "Apertar ENTER para continuar" );
} // end method_02 ( )

/**
Method_03a - Mostrar certa quantidade de valores pares.
@param x - quantidade de valores a serem mostrados
*/
void method_03a ( int x )
{
// definir dado local
int y = 1; // controle
int z = 0;
// repetir enquanto controle menor que a quantidade desejada
while ( y <= x )
{
// vincular o valor a ser mostrado ao controle
z = 2 * y;
// mostrar valor
IO_printf ( "%d: %d\n", y, z );
// passar ao proximo valor controlado
y = y + 1;
} // end while
} // end method_03a( )
/**
Method_03.
*/
void method_03 ( )
{
// identificar
IO_id ( " Method_03 - v0.0" );
// executar o metodo auxiliar
method_03a ( 5 );
// encerrar
IO_pause ( "Apertar ENTER para continuar" );
} // end method_03 ( )

/**
Method_04a - Mostrar certa quantidade de valores pares.
@param x - quantidade de valores a serem mostrados
*/
void method_04a ( int x )
{
// definir dado local
int y = x; // controle
int z = 0;
// repetir enquanto controle menor que a quantidade desejada
while ( y > 0 )
{
// vincular o valor a ser mostrado ao controle
z = 2 * y;
// mostrar valor
IO_printf ( "%d: %d\n", y, z );
// passar ao proximo valor controlado
y = y - 1;
} // end while
} // end method_04a( )
/**
Method_04.
*/
void method_04 ( )
{
// identificar
IO_id ( "Method_04 - v0.0" );
// executar o metodo auxiliar
method_04a ( 5 );
// encerrar
IO_pause ( "Apertar ENTER para continuar" );
} // end method_04 ( )

/**
Method_05a - Mostrar certa quantidade de valores pares.
@param x - quantidade de valores a serem mostrados
*/
void method_05a ( int x )
{
// definir dado local
int y = 0; // controle
// repetir enquanto controle menor que a quantidade desejada
for ( y = x; y > 0; y = y-1 )
{
// mostrar valor
IO_printf ( "%d: %d\n", y, (2*y) );
} // end for
} // end method_05a( )
/**
Method_05.
*/
void method_05 ( )
{
// identificar
IO_id ( "Method_05 - v0.0" );
// executar o metodo auxiliar
method_05a ( 5 );
// encerrar
IO_pause ( "Apertar ENTER para continuar" );
} // end method_05 ( )

int main ( )
{
    // definir dado
    int x = 0;
    // repetir até desejar parar
    do
    {
        // identificar
        IO_id ( "EXEMPLO0504 - Programa - v0.0" );
        // ler do teclado
        IO_println ( "Opcoes" );
        IO_println ( "0 - Parar" );
        IO_println ( "1 - Mostrar certa quantidade de valores" );
        IO_println ( "2 - Mostrar certa quantidade de valores de 2 em 2" );
        IO_println ( "3 - Mostrar certa quantidade de valores pares" );
        IO_println ( "4 - Mostrar certa quantidade de valores pares (decrescente)" );
        IO_println ( "5 - Mostrar certa quantidade de valores pares (decrescente)" );
        IO_println ( "" );
        x = IO_readint ( "Entrar com uma opcao: " );
        // testar valor
        switch ( x )
        {
            case 0: method_00 ( ); break;
            case 1: method_01 ( ); break;
            case 2: method_02 ( ); break;
            case 3: method_03 ( ); break;
            case 4: method_04 ( ); break;
            case 5: method_05 ( ); break;
            default:
            IO_pause ( IO_concat ( "Valor diferente das opcoes [0,1,2,3,4,5] (",
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
n/d!
---------------------------------------------- notas / observacoes / comentarios
Mostrar certa quantidade de valores de 2 em 2 (pares) do maior para o menor.
---------------------------------------------- previsao de testes
a.) 5 
---------------------------------------------- historico
Versao Data Modificacao
0.1 28/09 esboco
---------------------------------------------- testes
Versao Teste
0.1 01. ( OK ) identificacao de programa
*/