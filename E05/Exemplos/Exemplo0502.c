/*
    Exemplo0502 - v0.0. - 27 / 09 / 2024
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

int main ( )
{
    // definir dado
    int x = 0;
    // repetir até desejar parar
    do
    {
        // identificar
        IO_id ( "EXEMPLO0502 - Programa - v0.0" );
        // ler do teclado
        IO_println ( "Opcoes" );
        IO_println ( "0 - Parar" );
        IO_println ( "1 - Mostrar certa quantidade de valores" );
        IO_println ( "2 - Mostrar certa quantidade de valores de 2 em 2" );
        IO_println ( "3 - Mostrar certa quantidade de valores" );
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
n/d!
---------------------------------------------- notas / observacoes / comentarios
Mostrar certa quantidade de valores de 2 em 2.
---------------------------------------------- previsao de testes
a.) 5 -> { 2, 4, 6, 8, 10 }
---------------------------------------------- historico
Versao Data Modificacao
0.1 27/09 esboco
---------------------------------------------- testes
Versao Teste
0.1 01. ( OK ) identificacao de programa
*/