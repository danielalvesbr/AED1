/*
    Exemplo0602 - v0.0. - 29 / 09 / 2024
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
Method_01a - Mostrar certa quantidade de valores recursivamente.
@param x - quantidade de valores a serem mostrados
*/
void method_01a ( int x )
{
// repetir enquanto valor maior que zero
if ( x > 0 )
{
// mostrar valor
IO_printf ( "%s%d\n", "Valor = ", x );
// passar ao proximo
method_01a ( x - 1 ); // motor da recursividade
} // end if
} // end method_01a( )
/**
Method_01 - Mostrar certa quantidade de valores.
*/
void method_01 ( )
{
// identificar
IO_id ( "Method_01 - v0.0" );
// executar o metodo auxiliar
method_01a ( 5 ); // motor da recursividade
// encerrar
IO_pause ( "Apertar ENTER para continuar" );
} // end method_01 ( )

/**
Method_02a - Mostrar certa quantidade de valores recursivamente.
@param x - quantidade de valores a serem mostrados
*/
void method_02a ( int x )
{
// repetir enquanto valor maior que zero
if ( x > 0 )
{
// passar ao proximo
method_02a ( x - 1 ); // motor da recursividade
// mostrar valor
IO_printf ( "%s%d\n", "Valor = ", x );
} // end if
} // end method_02a( )
/**
Method_02.
*/
void method_02 ( )
{
// identificar
IO_id ( "Method_02 - v0.0" );
// executar o metodo auxiliar
method_02a ( 5 ); // motor da recursividade
// encerrar
IO_pause ( "Apertar ENTER para continuar" );
} // end method_02 ( )

/**
Method_03a - Mostrar certa quantidade de valores recursivamente.
@param x - quantidade de valores a serem mostrados
*/
void method_03a ( int x )
{
// repetir enquanto valor maior que zero
if ( x > 1 )
{
// passar ao proximo
method_03a ( x - 1 ); // motor da recursividade
// mostrar valor
IO_printf ( "%s%d\n", "Valor = ", x );
}
else
{ // base da recursividade
// mostrar o ultimo
IO_printf ( "%s\n", "Valor = 1" );
} // end if
} // end method_03a( )
/**
Method_03.
*/
void method_03 ( )
{
// identificar
IO_id ( "Method_03 - v0.0" );
// executar o metodo auxiliar
method_03a ( 5 ); // motor da recursividade
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
        IO_id ( "EXEMPLO0602 - Programa - v0.0" );
        // ler do teclado
        IO_println ( "Opcoes" );
        IO_println ( "0 - Parar" );
        IO_println ( "1 - Mostrar certa quantidade de valores recursivamente" );
        IO_println ( "2 - Mostrar certa quantidade de valores recursivamente" );
        IO_println ( "3 - Mostrar certa quantidade de valores recursivamente" );
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
Mostrar certa quantidade de valores recursivamente.
Diferente do anterior, a exibição do primeiro valor ocorrerá antes de avançar
para o próximo valor (motor).
Observar também que o último valor será tratado de forma particular (base).
---------------------------------------------- previsao de testes
n/d
---------------------------------------------- historico
Versao Data Modificacao
0.1 29/09 esboco
---------------------------------------------- testes
Versao Teste
0.1 01. ( OK ) identificacao de programa
*/
