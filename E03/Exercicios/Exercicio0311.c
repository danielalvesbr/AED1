/*
    Exercicio0312 - v0.0. - 18 / 09 / 2024
    Autor: Daniel Alves Goncalves
*/
// dependencias
#include "stdio.h"
#include "io.h" // para definicoes proprias
/**
Method_00 - nao faz nada.
*/
void method_00 ( void )
{
    // nao faz nada
} 

/**
    Method_01 - Repeticao com teste no inicio.
*/
void method_01 ( void )
{
    // definir dado
    int x = 0;
    char y = '0';
    char palavra[100];
    // identificar
    printf( "Method_01 - v0.0" );
    // ler do teclado o valor inicial
    printf( "\n%s","Entrar com uma palavra: " );
    scanf( "%s", palavra ); getchar( );
    // OBS: A cadeia de caracteres dispensa a indicacao de endereco (&) na leitura.
    printf("%s, %s\n","Palavra = ", palavra );
    // repetir (x) vezes
    printf("\n%s\n","Letras maiusculas encontradas: ");
    for (x = 0; palavra[x] != '\0'; x++)
    {
        y = palavra[x];
        if ('A' <= y && y <= 'Z')
        {  
            printf ("%c\n", y);
        }
    }
    // encerrar
    printf( "\nApertar ENTER para continuar.\n" );
    getchar ( );
} 

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
        printf( "EXEMPLO0311 - Programa - v0.0" );
        printf("\nAutor: Daniel Alves Goncalves");
        // ler do teclado
        printf ( "\n%s\n","Opcoes" );
        printf ( "\n%s","0 - Parar");
        printf ( "\n%s","1 - Repeticao com teste no inicio" );
        printf ( "\n" );
        
        printf ("\n%s","Entrar com uma opcao: " );
        scanf ("%d",&x);

        printf ("\n%s%d\n","Opcao: ",x);

        // testar valor
        switch ( x )
        {
            case 0: method_00 ( ); break;
            case 1: method_01 ( ); break;
            default:
                printf ("\nValor diferente das opcoes [0,1] (%d)\n\n",x ); break;
        } // end switch
    }
    while ( x != 0 );
    // encerrar
    printf ( "\n\nApertar ENTER para terminar\n" ); getchar ( );
    return ( 0 );
} // end main ( )

/*
---------------------------------------------- documentacao complementar
Optei por substituir tudo da biblioteca <io.h> apenas para estudar mais o básico,
e entender como cada funcao dessa biblioteca pode ser substituida
---------------------------------------------- notas / observacoes / comentarios
Mostra os caracteres maiusculos da palavra digitada em uma coluna
---------------------------------------------- previsao de testes
palavra = "PaLaVrA"
---------------------------------------------- historico
Versao Data Modificacao
0.1 18/09 esboco
---------------------------------------------- testes
Versao Teste
0.1 01. ( OK ) identificacao de programa
*/