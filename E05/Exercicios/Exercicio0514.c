/*
    Exercicio0514 - v0.0. - 28 / 09 / 2024
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
    int cont = 0;
    int termo = 1;  // termo diferente de zero para desconsiderar o zero na resposta
    int resposta[100];
    
    // identificar
    printf( "Method_01 - v0.0" );
    // ler do teclado o valor inicial
    printf( "\n%s","Entrar com a quantidade de termos: " );
    scanf( "%d", &n ); getchar( );
   
    // mostrar os valores preenchidos
    printf( "%s%d","Quantidade de termos: ",n );

    while(cont < n) // verificar se ainda nao chegou na quantidade definida
    {                            // criar a repeticao para gravar no arranjo
        if (termo % 4 == 0) // se divisivel por 4 ou 3
        {  
            resposta[cont] = termo;
            termo = termo + 1;
            cont = cont + 1;
        }
        else // se nao
        {
            termo = termo + 1;
        }
    }
    while (getchar() != '\n') //Limpar o buffer do getchar
        continue;

    printf( "\nValores { " );
    for (int i = 0; i < cont; i++) // repeticao para exibir os valores do arranjo
    {
        printf( "%s%d","1/",resposta[i] );
        if(i < (cont-1))
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
        printf( "EXERCICIO0514 - Programa - v0.0" );
        printf("\nAutor: Daniel Alves Goncalves");
        // ler do teclado
        printf ( "\n%s\n","Opcoes" );
        printf ( "\n%s","0 - Parar");
        printf ( "\n%s","1 - 0514" );
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
Pede uma quantidade, e cria um intervalo de 1/ por multiplos de um valor definido.---------------------------------------------- previsao de testes
n = 5 => { 1/4, 1/8, 1/12, 1/16, 1/20 }
---------------------------------------------- historico
Versao Data Modificacao
0.1 28/09 esboco
---------------------------------------------- testes
Versao Teste
0.1 01. ( OK ) identificacao de programa
*/