/*
    Exercicio0419 - v0.0. - 27 / 09 / 2024
    Autor: Daniel Alves Goncalves
    PROGRAMA DE ARRANJO FUNCIONAL PARA EXIBIR OS VALORES INSERIDOS NO FINAL
*/
// dependencias
#include "stdio.h"
#include "stdlib.h" 
#include "string.h"
#include "io.h" 
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

void separaLtrMinMenM(char sequencia[], char resultado[])
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
    separaLtrMinMenM(sequencia, resultado); 

    printf("\n\n%s","Letras MINUSCULAS e MENORES do que 'm': { ");
    // enquanto (i) for menor que o tamanho total de resultado (sizeof) e nao for igual ao '\0'
    // exibe os valores de resultado
    for(int i = 0; (double)i < sizeof(resultado) && resultado[i] != '\0'; i++) //OBS: sizeof e prevencao
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

void ltrMinEMaiMenM(char sequencia[100], int* y, int* z)
{
    int x = 0;
    for( int i = 0; sequencia[i] != '\0'; i++ )
    {
        x = sequencia[i];
        printf( "\n\nLetra (%c)", x );
        if('a' <= x && x <= 'm')
        {
            printf( "\nLetra MINUSCULA e MENOR do que (m/M)" );
            *y = *y + 1;

        }
        else if('A' <= x && x <= 'M')
        {
            printf( "\nLetra MAIUSCULA e MENOR do que (m/M)" );
            *z = *z + 1;
        }
        else if(('m' < x && x <= 'z') || ('M' <= x && x <= 'Z'))
        {
            printf( "\nLetra MAIOR do que (m/M)" );
        }
        else
        {
            printf( "\nNAO e letra" );
        }
    }
}
void method_05 (void)
{
    int y = 0;
    int z = 0;
    char sequencia[100];
    printf("Method_05 - Ex0415");
    
    printf( "\nDigite uma sequencia de caracteres: " );
    scanf( "%s", sequencia );   getchar( );

    ltrMinEMaiMenM(sequencia, &y, &z);

    printf("\n\n%s%d","Letras MINUSCULAS e MENORES do que 'm': ", y);
    printf("\n%s%d","Letras MAIUSCULAS e MENORES do que 'm': ", z);

    printf("\n%s%d","Letras MENORES do que 'm': ", (y+z)); 

    printf( "\n\nApertar ENTER para continuar.\n\n" );
    getchar( );
}

void method_06 (void)
{
    int y = 0;
    int z = 0;
    char sequencia[100];
    printf("Method_06 - Ex0416");
    
    printf( "\nDigite uma sequencia de caracteres: " );
    scanf( "%s", sequencia );   getchar( );

    ltrMinEMaiMenM(sequencia, &y, &z);

    printf("\n\n%s%d","Letras MINUSCULAS e MENORES do que 'm': ", y);
    printf("\n%s%d","Letras MAIUSCULAS e MENORES do que 'm': ", z);

    printf( "\n\nApertar ENTER para continuar.\n\n" );
    getchar( );
}

int digitosImpares(char sequencia[100])
{
    int x = 0;
    int resultado = 0;
    for( int i = 0; sequencia[i] != '\0'; i++ )
    {
        x = sequencia[i];
        printf( "\n\nTermo (%c)", x );
        if('0' <= x && x <= '9')
        {
            if((x%2)==1)
            {
                printf( "\nTermo IMPAR" );
                resultado = resultado + 1;

            }
            else
            {
                printf( "\nTermo NAO IMPAR" );
            }
        }
        else
        {
            printf( "\nTermo nao e numero!" );
        }
    }
    return(resultado);
}
void method_07 (void)
{
    int resposta = 0;
    char sequencia[100];
    printf("Method_07 - Ex0417");
    
    printf( "\nDigite uma sequencia de caracteres: " );
    scanf( "%s", sequencia );   getchar( );

    resposta = digitosImpares(sequencia);
    printf("\n\n%s%d","Digitos IMPARES: ", resposta);

    printf( "\nApertar ENTER para continuar.\n\n" );
    getchar( );
}

void separaNaoAlfanum(char sequencia[], char resultado[])
{
    int z = 0;
    char x = '\0';
    for( int i = 0; sequencia[i] != '\0'; i++ )
    {
        x = sequencia[i];
        printf( "\n\nCaractere (%c)", x );
        if(('a' <= x && x <= 'z') || ('A' <= x && x <= 'A') || ('0' <= x && x <= '9'))
        {
            printf( "\nCaractere alfanumerico" );
        }
        else 
        {
            printf( "\nCaractere NAO e alfanumerico" );
            resultado[z] = x;
            z = z + 1;
        }
    }
    resultado[z] = '\0';

}
void method_08 (void)
{
    char sequencia[100];
    char resultado[100];
    printf("Method_08 - Ex0418");
    
    printf( "\nDigite uma sequencia de caracteres: " );
    scanf( "%s", sequencia );   getchar( );

    separaNaoAlfanum(sequencia, resultado); 

    printf("\n\n%s","Caracteres NAO ALFANUMERICOS: { ");
    // enquanto (i) for menor que o tamanho total de resultado (sizeof) e nao for igual ao '\0'
    // exibe os valores de resultado
    for(int i = 0; (double)i < sizeof(resultado) && resultado[i] != '\0'; i++) //OBS: sizeof e prevencao
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

void separaAlfanum(char sequencia[], char resultado[])
{
    int z = 0;
    char x = '\0';
    for( int i = 0; sequencia[i] != '\0'; i++ )
    {
        x = sequencia[i];
        printf( "\n\nCaractere (%c)", x );
        if(('a' <= x && x <= 'z') || ('A' <= x && x <= 'A') || ('0' <= x && x <= '9'))
        {
            printf( "\nCaractere alfanumerico" );
            resultado[z] = x;
            z = z + 1;
        }
        else 
        {
            printf( "\nCaractere NAO e alfanumerico" );
        }
    }
    resultado[z] = '\0';

}
void method_09 (void)
{
    char sequencia[100];
    char resultado[100];
    printf("Method_09 - Ex0419");
    
    printf( "\nDigite uma sequencia de caracteres: " );
    scanf( "%s", sequencia );   getchar( );

    separaAlfanum(sequencia, resultado); 

    printf("\n\n%s","Caracteres NAO ALFANUMERICOS: { ");
    // enquanto (i) for menor que o tamanho total de resultado (sizeof) e nao for igual ao '\0'
    // exibe os valores de resultado
    for(int i = 0; (double)i < sizeof(resultado) && resultado[i] != '\0'; i++) //OBS: sizeof e prevencao
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
        printf( "EXERCICIO419 - Programa - v0.0" );
        printf("\nAutor: Daniel Alves Goncalves");
        // ler do teclado
        printf ( "\n%s\n","Opcoes" );
        printf ( "\n%s","0 - Parar");
        printf ( "\n%s","1 - 0411" );
        printf ( "\n%s","2 - 0412" );
        printf ( "\n%s","3 - 0413" );
        printf ( "\n%s","4 - 0414" );
        printf ( "\n%s","5 - 0415" );
        printf ( "\n%s","6 - 0416" );
        printf ( "\n%s","7 - 0417" );
        printf ( "\n%s","8 - 0418" );
        printf ( "\n%s","9 - 0419" );
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
            case 7: method_07 ( ); break;
            case 8: method_08 ( ); break;
            case 9: method_09 ( ); break;
            default:
                printf ("\nValor diferente das opcoes [0,1,2,3,4,5,6,7,8,9] (%d)\n\n",x ); break;
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
ler uma sequência de caracteres do teclado; depois chama uma funcao para contar e mostrar a 
quantidade de alfanumericos e exibilos em uma nova cadeia.
---------------------------------------------- previsao de testes
(A1b2+C3d4)*E5f6
---------------------------------------------- historico
Versao Data Modificacao
0.1 27/09 esboco
---------------------------------------------- testes
Versao Teste
0.1 01. ( OK ) identificacao de programa
*/