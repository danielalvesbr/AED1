/*
    Exercicio0411 - v0.0. - 23 / 09 / 2024
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
    printf( "Method_01 - v0.0" );
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
        printf( "EXERCICIO0411 - Programa - v0.0" );
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
Queria aprender arranjo desenvolvendo na luta, consegui depois de uma hora, peco para que me diga
sugestoes de melhoria, por favor! Quando vou rodar esta aparecendo 2 valores a mais quando vai 
exibir a l76 no terminal, mas isso acontece apenas de vez em quando, por agora parou mas nao sei
se esta correto!
---------------------------------------------- notas / observacoes / comentarios
Pede uma quantidade, e para definir um intervalo. A partir daí pede uma sequencia do tamanho 
definido pela quantidade e exibe os valores dentro e fora do intervalo.
Por fim mostra o limite definido, a quantidade, os numeros digitados e a contagem do que esta 
DENTRO e FORA do limite.
---------------------------------------------- previsao de testes
n = 10 e [13.6:22.6] com {5.1, 10.5, 12.4, 14.2, 15.3, 18.3, 20.4, 21.7, 23.1, 24.2}
---------------------------------------------- historico
Versao Data Modificacao
0.1 23/09 esboco
---------------------------------------------- testes
Versao Teste
0.1 01. ( OK ) identificacao de programa
*/