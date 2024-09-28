/*
    Exemplo0500 - v0.0. - 27 / 09 / 2024
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

int main ( )
{
    // definir dado
    int x = 0;
    // repetir até desejar parar
    do
    {
        // identificar
        IO_id ( "EXEMPLO0500 - Programa - v0.0" );
        // ler do teclado
        IO_println ( "Opcoes" );
        IO_println ( "0 - Parar" );
        IO_println ( "1 - Mostrar certa quantidade de valores" );
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
n/d!
---------------------------------------------- notas / observacoes / comentarios
Mostrar certa quantidade de valores.
---------------------------------------------- previsao de testes
a.) 5 -> { 1, 2, 3, 4, 5 }
---------------------------------------------- historico
Versao Data Modificacao
0.1 27/09 esboco
---------------------------------------------- testes
Versao Teste
0.1 01. ( OK ) identificacao de programa
*/