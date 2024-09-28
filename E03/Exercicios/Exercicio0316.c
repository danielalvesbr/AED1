/*
    Exercicio0316 - v0.0. - 18 / 09 / 2024
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

void method_02 ( void )
{
    // definir dado
    int x = 0;
    char y = '0';
    char palavra[100];
    // identificar
    printf( "Method_02 - v0.0" );
    // ler do teclado o valor inicial
    printf( "\n%s","Entrar com uma palavra: " );
    scanf( "%s", palavra ); getchar( );
    // OBS: A cadeia de caracteres dispensa a indicacao de endereco (&) na leitura.
    printf("%s, %s\n","Palavra = ", palavra );
    // repetir (x) vezes
    printf("\n%s\n","Letras minusculas encontradas: ");
    for (x = 0; palavra[x] != '\0'; x++)
    {
        y = palavra[x];
        if ('a' <= y && y <= 'z')
        {  
            printf ("%c\n", y);
        }
    }
    // encerrar
    printf( "\nApertar ENTER para continuar.\n" );
    getchar ( );
} 

void method_03 ( void )
{
    // definir dado
    int x = 0;
    char y = '0';
    char palavra[100];
    // identificar
    printf( "Method_03 - v0.0" );
    // ler do teclado o valor inicial
    printf( "\n%s","Entrar com uma palavra: " );
    scanf( "%s", palavra ); getchar( );
    // OBS: A cadeia de caracteres dispensa a indicacao de endereco (&) na leitura.
    printf("%s, %s\n","Palavra = ", palavra );
    // repetir (x) vezes
    printf("\n%s\n","Letras minusculas encontradas: ");
    for (x = strlen(palavra) - 1; x >= 0 ; x--)
    {
        y = palavra[x];
        if ('a' <= y && y <= 'z')
        {  
            printf ("%c\n", y);
        }
    }
    // encerrar
    printf( "\nApertar ENTER para continuar.\n" );
    getchar ( );
} 

void method_04 ( void )
{
    // definir dado
    int x = 0;
    int z = 0;
    char y = '0';
    char palavra[100];
    // identificar
    printf( "Method_04 - v0.0" );
    // ler do teclado o valor inicial
    printf( "\n%s","Entrar com uma palavra: " );
    scanf( "%s", palavra ); getchar( );
    // OBS: A cadeia de caracteres dispensa a indicacao de endereco (&) na leitura.
    printf("%s, %s\n","Palavra = ", palavra );
    // repetir (x) vezes
    for (x = 0; palavra[x] != '\0' ; x++)
    {
        y = palavra[x];
        if (('a' <= y && y <= 'z')||('A' <= y && y <= 'Z'))
        {  
            z = z + 1;
            printf ("%c\n", y);
        }
    }
    printf ("%s%d\n","Letras totais: ", z);
    // encerrar
    printf( "\nApertar ENTER para continuar.\n" );
    getchar ( );
} 

void method_05 ( void )
{
    // definir dado
    int x = 0;
    int z = 0;
    char y = '0';
    char palavra[100];
    // identificar
    printf( "Method_05 - v0.0" );
    // ler do teclado o valor inicial
    printf( "\n%s","Entrar com uma palavra: " );
    scanf( "%s", palavra ); getchar( );
    // OBS: A cadeia de caracteres dispensa a indicacao de endereco (&) na leitura.
    printf("%s, %s\n","Palavra = ", palavra );
    // repetir (x) vezes
    for (x = strlen(palavra) - 1; x >= 0 ; x--)
    {
        y = palavra[x];
        if ('1' <= y && y <= '9')
        {
            z = z + 1;
            printf ("%c\n", y);
        }
    }
    printf ("%s%d\n","Digitos totais: ", z);
    // encerrar
    printf( "\nApertar ENTER para continuar.\n" );
    getchar ( );
} 

void method_06 ( void )
{
    // definir dado
    int x = 0;
    int z = 0;
    char y = '0';
    char palavra[100];
    // identificar
    printf( "Method_06 - v0.0" );
    // ler do teclado o valor inicial
    printf( "\n%s","Entrar com uma palavra: " );
    scanf( "%s", palavra ); getchar( );
    // OBS: A cadeia de caracteres dispensa a indicacao de endereco (&) na leitura.
    printf("%s, %s\n","Palavra = ", palavra );
    // repetir (x) vezes
    for (x = 0; palavra[x] != 0; x++)
    {
        y = palavra[x];
        if (!(('a' <= y && y <= 'z')||('A' <= y && y <= 'Z')||('1' <= y && y <= '9')))
        {
            z = z + 1;
            printf ("%c\n", y);
        }
    }
    printf ("%s%d\n","Caracteres especiais totais: ", z);
    // encerrar
    printf( "\nApertar ENTER para continuar.\n" );
    getchar ( );
} 

void method_11 ( void )
{
    // definir dado
    int x = 0;
    int z = 0;
    char y = '0';
    char palavra[100];
    // identificar
    printf( "Method_11 - v0.0" );
    // ler do teclado o valor inicial
    printf( "\n%s","Entrar com uma palavra: " );
    scanf( "%s", palavra ); getchar( );
    // OBS: A cadeia de caracteres dispensa a indicacao de endereco (&) na leitura.
    printf("%s, %s\n","Palavra = ", palavra );
    // repetir (x) vezes
    for (x = strlen(palavra) - 1; x >= 0 ; x--)
    {
        y = palavra[x];
        z = z + 1;
        printf ("%c\n", y);
    }
    printf ("%s%d\n","Caracteres totais: ", z);
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
        printf( "EXEMPLO0316 - Programa - v0.0" );
        printf("\nAutor: Daniel Alves Goncalves");
        // ler do teclado
        printf ( "\n%s\n","Opcoes" );
        printf ( "\n%s","0 - Parar");
        printf ( "\n%s","1 - 0311" );
        printf ( "\n%s","2 - 0312" );
        printf ( "\n%s","3 - 0313" );
        printf ( "\n%s","3 - 0313" );
        printf ( "\n%s","4 - 0314" );
        printf ( "\n%s","5 - 0315" );
        printf ( "\n%s","6 - 0316" );
        printf ( "\n%s","11 - EXTRA" );
        printf ( "\n" );
        
        printf ("\n%s","Entrar com uma opcao: " );
        scanf ("%d",&x);

        printf ("\n%s%d\n","Opcao: ",x);

        // testar valor
        switch ( x )
        {
            case 0: method_00 ( ); break;
            case 1: method_01 ( ); break;
            case 2: method_02 ( ); break;
            case 3: method_03 ( ); break;
            case 4: method_04 ( ); break;
            case 5: method_05 ( ); break;
            case 6: method_06 ( ); break;
            case 11: method_11 ( ); break;
            default:
                printf ("\nValor diferente das opcoes [0,1,2,3,4,5,6] (%d)\n\n",x ); break;
        } // end switch
    }
    while ( x != 0 );
    // encerrar
    printf ( "\n\nApertar ENTER para terminar\n" ); getchar ( );
    return ( 0 );
} // end main ( )

/*
---------------------------------------------- documentacao complementar
Confundi a questao 0315, depois de refazer varias vezes por mal compreensao da questao, achei que digito se tratava 
de tudo que digitavamos, entao fiz uma funcao que fizesse issoe deixei como extra (method_11)
---------------------------------------------- notas / observacoes / comentarios
Conta e mostra tudo que nao for numero ou letra da palavra digitada
---------------------------------------------- previsao de testes
palavra = "PaLaVr@#0"
---------------------------------------------- historico
Versao Data Modificacao
0.1 18/09 esboco
---------------------------------------------- testes
Versao Teste
0.1 01. ( OK ) identificacao de programa
*/