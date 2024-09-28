/*
    Exercicio0412 - v0.0. - 24 / 09 / 2024
    Autor: Daniel Alves Goncalves
    PROGRAMA DE ARRANJO FUNCIONAL PARA EXIBIR OS VALORES INSERIDOS NO FINAL
*/
// dependencias
#include "stdio.h"
#include "stdlib.h" // apenas para estudo de fixacao, nao vou utilizar
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
    double n = 0;
    double x = 0;
    double y = 0;
    double z = 0;
    int Vd = 0;
    int Vf = 0;
    double aux = 0;
    char palavra[80];
    // identificar
    printf( "Method_01 - Ex0411" );
    // ler do teclado o valor inicial
    printf( "\n%s","Entrar com a quantidade de termos: " );
    scanf( "%lf", &n ); getchar( );
    
    printf( "\n%s","Entrar com o limite inferior (a): " );
    scanf( "%lf", &x ); getchar( );

    while( x>y )
    {
        printf( "\n%s","Entrar com o limite superior (b): " );
        scanf( "%lf", &y ); getchar( );
    }
    // mostrar os valores preenchidos
    printf( "Quantidade de termos (n): %lf \nLimite (x:y): [%lf:%lf]\n", n, x, y );

   
    for( int i = 0; i < n; i++ ) // verificar se ainda nao chegou na quantidade definida
    {                            // criar a repeticao para gravar no arranjo
        printf( "\nDigite o valor do %d termo: ", i+1 );
        scanf( "%lf", &z );
        // armazena o valor digitado no arranjo
        palavra[i] = z; 
        if (x <= z && z <= y) // se dentro do intervalo definido
        {  
            printf( "Valor esta DENTRO do intervalo\n" );
            Vd = Vd + 1;
        }
        else // se nao
        {
            printf( "Valor esta FORA do intervalo\n" );
            Vf = Vf + 1;
        }
    }
    while (getchar() != '\n') //Limpar o buffer do getchar
        continue;

    printf( "\nValores DENTRO do intervalo: %d", Vd );
    printf( "\nValores FORA do intervalo: %d", Vf );
    printf( "\nValores { " );
    for (int i = 0; palavra[i] != '\0'; i++) // repeticao para exibir os valores do arranjo
    {
        aux = palavra[i];
        printf( "%lf, ", aux );
    }
    printf( "}" );
    // encerrar
    
    printf( "\nApertar ENTER para continuar.\n\n" );
    getchar ( );
}

void method_02 ( void )
{
    // definir dado
    int y = 0;
    char x = '0';
    char sequencia[100];
    // identificar
    printf( "Method_02 - Ex0412" );
    // ler uma sequencia de caracteres
    printf( "\nDigite uma sequencia de caracteres: " );
    scanf( "%s", sequencia );   getchar( );
    // mostrar a sequencia de caracteres 
    for( int i = 0; sequencia[i] != '\0'; i++ )
    {
        x = sequencia[i];
        printf( "\n\nLetra (%c)", x );
        if( 'a' <= x && x <= 'm' )
        {
            printf( "\nLetra MINUSCULA e MENOR do que (m)" );
            y = y + 1;

        }
        else if( 'm' < x && x <= 'z' )
        {
            printf( "\nLetra MINUSCULA e MAIOR do que (m)" );
        }
        else
        {
            printf( "\nLetra NAO e minuscula" );
        }
    }
    // mostrar o numero de letras minusculas menores do que (m)
    printf( "\n\n%s%d","Letras MINUSCULAS e MENORES do que 'm': ", y );

    printf( "\nApertar ENTER para continuar.\n\n" );
    getchar( );
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
        printf( "EXERCICIO412 - Programa - v0.0" );
        printf("\nAutor: Daniel Alves Goncalves");
        // ler do teclado
        printf ( "\n%s\n","Opcoes" );
        printf ( "\n%s","0 - Parar");
        printf ( "\n%s","1 - 0411" );
        printf ( "\n%s","2 - 0412" );
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
            default:
                printf ("\nValor diferente das opcoes [0,1,2] (%d)\n\n",x ); break;
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
ler uma sequência de caracteres do teclado; depois conta e mostra a quantidade de letras 
minúsculas menores que 'm'.
---------------------------------------------- previsao de testes
AaKkLmM0*Nx
---------------------------------------------- historico
Versao Data Modificacao
0.1 24/09 esboco
---------------------------------------------- testes
Versao Teste
0.1 01. ( OK ) identificacao de programa
*/