/*
    Exercicio0414 - v0.0. - 27 / 09 / 2024
    Autor: Daniel Alves Goncalves
    PROGRAMA DE ARRANJO FUNCIONAL PARA EXIBIR OS VALORES INSERIDOS NO FINAL
*/
// dependencias
#include "stdio.h"
#include "stdlib.h" // apenas para estudo de fixacao, nao vou utilizar
#include "string.h"
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

int ltrMinMenM(char sequencia[100])
{
    int x = 0;
    int y = 0;
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
    return(y);
}
void method_03 (void)
{
    int resposta = 0;
    char sequencia[100];
    printf("Method_03 - Ex0413");
    
    printf( "\nDigite uma sequencia de caracteres: " );
    scanf( "%s", sequencia );   getchar( );

    resposta = ltrMinMenM(sequencia);
    printf("\n\n%s%d","Letras MINUSCULAS e MENORES do que 'm': ", resposta);

    printf( "\nApertar ENTER para continuar.\n\n" );
    getchar( );
}

void separaLtrMinMenM(char sequencia[], char resultado[], int max_size)
{
    int z = 0;
    char x = '\0';
    for( int i = 0; sequencia[i] != '\0'; i++ )
    {
        x = sequencia[i];
        printf( "\n\nLetra (%c)", x );
        if( 'a' <= x && x <= 'm' )
        {
            printf( "\nLetra MINUSCULA e MENOR do que (m)" );
            resultado[z] = x;
            z = z + 1;
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
    resultado[z] = '\0';

}
void method_04 (void)
{
    char sequencia[100];
    char resultado[100];
    printf("Method_04 - Ex0414");
    
    printf( "\nDigite uma sequencia de caracteres: " );
    scanf( "%s", sequencia );   getchar( );

    //(string sequencia, string resultado, tamanho resultado[100]);
    separaLtrMinMenM(sequencia, resultado, sizeof(resultado)); 

    printf("\n\n%s","Letras MINUSCULAS e MENORES do que 'm': { ");
    // enquanto (i) for menor que o tamanho total de resultado (sizeof) e nao for igual ao '\0'
    // exibe os valores de resultado
    for(int i = 0;/*i < sizeof(resultado) &&*/ resultado[i] != '\0'; i++) //OBS: sizeof e prevencao
    {
        if(i != 0)  // garante que o primeiro caractere nao tenha virgula antes
        {
            // poe a virgula antes do proximo caractere
            printf("%s",", ");  // poe a virgula entre os caracteres exibidos
        }
        printf("%c", resultado[i]); // printa o caractere
    }
    printf("%s"," }");

    // encerrar
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
        printf( "EXERCICIO414 - Programa - v0.0" );
        printf("\nAutor: Daniel Alves Goncalves");
        // ler do teclado
        printf ( "\n%s\n","Opcoes" );
        printf ( "\n%s","0 - Parar");
        printf ( "\n%s","1 - 0411" );
        printf ( "\n%s","2 - 0412" );
        printf ( "\n%s","3 - 0413" );
        printf ( "\n%s","4 - 0414" );
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
            default:
                printf ("\nValor diferente das opcoes [0,1,2,3,4] (%d)\n\n",x ); break;
        } // end switch
    }
    while ( x != 0 );
    // encerrar
    printf ( "\n\nApertar ENTER para terminar\n" ); getchar ( );
    return ( 0 );
} // end main ( )

/*
---------------------------------------------- documentacao complementar
Professor, nesta parte do method_04, utilizei o sizeof para delimitar o tamanho da memoria 
a ser utilizado. Vi sobre o sizeof na monitoria que fiz com o antonio no dia 26/09 das 15h 
ate as 17h20. Entao fui tentar aplicar implementando nesse exercicio... Utilizei a IA como 
suporte, mas nao copiei codigo nem nada, apenas pedi para ir conferindo e dando sugestoes 
de melhorias. Ele me indicou colocar o sizeof na linha 206, eu testei das duas formas, com 
e sem ele e funcionou, como nao entendi direito o porque utilizar, prefiri deixar como 
comentario e perguntar o que voce acha a respeito.
---------------------------------------------- notas / observacoes / comentarios
ler uma sequência de caracteres do teclado; depois chama uma funcao para contar a 
quantidade de letras minúsculas menores que 'm' e armazenar mostrando em uma outra funcao.
---------------------------------------------- previsao de testes
AaKkLmM0*Nx
---------------------------------------------- historico
Versao Data Modificacao
0.1 27/09 esboco
---------------------------------------------- testes
Versao Teste
0.1 01. ( OK ) identificacao de programa
*/