/*
    Exercicio0513 - v0.0. - 28 / 09 / 2024
    Autor: Daniel Alves Goncalves
*/
// dependencias
#include "stdio.h"
#include "stdlib.h" // apenas para estudo de fixacao, nao vou utilizar
#include "math.h"
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
    int n = 0;
    int a = 0;
    int cont = 0;
    int termo = 0;  // termo diferente de zero para desconsiderar o zero na resposta
    int resposta[100];
    
    // identificar
    printf( "Method_01 - v0.0" );
    // ler do teclado o valor inicial
    printf( "\n%s","Entrar com a quantidade de termos: " );
    scanf( "%d", &n ); getchar( );
   
    // mostrar os valores preenchidos
    printf( "%s%d","Quantidade de termos: ",n );

    cont = n;
    while(cont != 0) // verificar se ainda nao chegou na quantidade definida
    {                            
        termo = pow(3,cont);
        resposta[a] = termo;
        a = a + 1;
        cont = cont - 1;
    }
    while (getchar() != '\n') //Limpar o buffer do getchar
        continue;

    printf( "\nValores { " );
    for (int i = 0; i < n; i++) // repeticao para exibir os valores do arranjo
    {
        printf( "%d", resposta[i] );
        if(i < (n-1))
        {
            printf("%s",", ");
        }
    }
    printf( " }" );
    // encerrar
    
    printf( "\nApertar ENTER para continuar.\n\n" );
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
        printf( "EXERCICIO0513 - Programa - v0.0" );
        printf("\nAutor: Daniel Alves Goncalves");
        // ler do teclado
        printf ( "\n%s\n","Opcoes" );
        printf ( "\n%s","0 - Parar");
        printf ( "\n%s","1 - 0513" );
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
n/d
---------------------------------------------- notas / observacoes / comentarios
Pede uma quantidade, e cria um intervalo para gerar potências de 3 em ordem decrescente.
---------------------------------------------- previsao de testes
n = 5 => { 243, 81, 27, 9, 3 }
---------------------------------------------- historico
Versao Data Modificacao
0.1 28/09 esboco
---------------------------------------------- testes
Versao Teste
0.1 01. ( OK ) identificacao de programa
*/