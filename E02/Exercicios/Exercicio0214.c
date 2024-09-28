/*
	Exemplo0208 - v0.0. - 10 / 09 / 2024
	Autor: Daniel Alves Goncalves
	
	Para compilar:
	gcc -o exemplo0211 exemplo0211.c
	exemplo0211
*/

// dependencias
#include "io.h" // bibliotecas e outras definicoes

/**
Method_01.
*/
void method_01 ( void )
{
	int x = 0;
	// identificar
	IO_id ( "Method_01 - Programa - v0.0" );
	// ler do teclado
	x = IO_readint ( "Entrar com um valor inteiro: " );
	// testar valor
	if ( x % 2 == 0 )
	{
		IO_printf ( "%s (%d)\n", "Valor e par", x );
	}
	if ( x % 2 == 1 )
	{
		IO_printf ( "%s (%d)\n", "Valor e impar", x );
	} // end if
	// encerrar
	IO_pause ( "\nApertar ENTER para continuar.\n" );
} // end method_01 ( )

/*
 Method_02.
*/
void method_02 ( void )
{
	int x = 0;
	// identificar
	IO_id ( "Method_02 - Programa - v0.0" );
	// ler do teclado
	x = IO_readint ( "Entrar com um valor inteiro: " );
	// testar valor par/impar
	if ( x % 2 == 0 )
	{
		IO_printf ( "%s (%d)\n", "Valor e par", x );
	
		if ( x < -15 )
		{
			IO_printf ( "%s (%d)\n", "Valor e menor que -15", x );
		}
		else
		{
			IO_printf ( "%s (%d)\n", "Valor nao e menor que -15", x );
		}
	}
	if ( x % 2 == 1 )
	{
		IO_printf ( "%s (%d)\n", "Valor e impar", x );
	
		if ( x > 15 )
		{
			IO_printf ( "%s (%d)\n", "Valor e maior que 15", x );
		}
		else
		{
			IO_printf ( "%s (%d)\n", "Valor nao e maior que 15", x );
		}
	} // end if
	// encerrar
	IO_pause ( "\nApertar ENTER para continuar.\n" );
} // end method_02 ( )

/*
 Method_03.
*/
void method_03 ( void )
{
int x = 0;
	// identificar
	IO_id ( "Method_03 - Programa - v0.0" );
	// ler do teclado
	x = IO_readint ( "Entrar com um valor inteiro: " );
	// testar valor par/impar
	if ( 25 < x && x > 45 )
	{
		IO_printf ( "%s (%d)\n", "Valor esta entre o intervalo (25:45)", x );
	}
	else 
	{
		IO_printf ( "%s (%d)\n", "Valor NAO esta entre o intervalo (25:45)", x );
	} // end if/else
	// encerrar
	IO_pause ( "\nApertar ENTER para continuar.\n" );
}

/*
 Method_04.
*/
void method_04 ( void )
{
int x = 0;
	// identificar
	IO_id ( "Method_04 - Programa - v0.0" );
	// ler do teclado
	x = IO_readint ( "Entrar com um valor inteiro: " );
	// testar valor par/impar
	if ( 20 <= x && x >= 60 )
	{
		IO_printf ( "%s (%d)\n", "Valor esta entre o intervalo [20:60]", x );
	}
	else 
	{
		IO_printf ( "%s (%d)\n", "Valor NAO esta entre o intervalo [20:60]", x );
	} // end if/else
	// encerrar
	IO_pause ( "\nApertar ENTER para continuar.\n" );
} // end method_04 ( )

/*
 Method_05.
*/
void method_05 ( void )
{
int x = 0;
	// identificar
	IO_id ( "Method_05 - Programa - v0.0" );
	// ler do teclado
	x = IO_readint ( "Entrar com um valor inteiro: " );
	// testar valor par/impar
    if (( 10 <= x && x >= 25 )&&( 15 < x && x > 50 ))
	{
		IO_printf ( "%s (%d)\n", "Valor esta entre o intervalo [10:25] e (15:50)", x );
	}
    else
    {
        if ( 10 <= x && x >= 25 )
        {
            IO_printf ( "%s (%d)\n", "Valor esta APENAS entre o intervalo [10:25]", x );
        }
        else
        {
            IO_printf ( "%s (%d)\n", "Valor NAO ESTA entre o intervalo [10:25]", x );

        }
        if ( 15 < x && x > 50 )
        {
            IO_printf ( "%s (%d)\n", "Valor esta APENAS entre o intervalo (15:50)", x );
        }
        else
        {
            IO_printf ( "%s (%d)\n", "Valor NAO ESTA entre o intervalo (15:50)", x );

        }
	} // end if/else
	// encerrar
	IO_pause ( "\nApertar ENTER para continuar.\n" );
} // end method_05 ( )

/*
 Method_06.
*/
void method_06 ( void )
{
int x = 0;
int y = 0;
	// identificar
	IO_id ( "Method_06 - Programa - v0.0" );
	// ler do teclado
	x = IO_readint ( "Entrar com um valor inteiro: " );
    y = IO_readint ( "Entrar com outro valor inteiro: ");
	// testar valor par/impar
	if (( x % 2 == 0 )&&( x < 0 ))
	{
		IO_printf ( "%s (%d)\n", "Valor e impar e negativo", x );
	}
    else
    {
        if ( x % 2 == 1 )
        {
            IO_printf ( "%s (%d)\n", "Valor nao e impar", x );
        } // end 
        if ( x >= 0 )
        {
            IO_printf ( "%s (%d)\n", "Valor nao e negativo", x );
        }
    }
	
    if ( y % 2 == 0 )
	{
		IO_printf ( "%s (%d)\n", "Valor e par e positivo", y );
	}
    else
    {
        if ( y % 2 == 1 )
        {
            IO_printf ( "%s (%d)\n", "Valor nao e par", y );
        } // end if
        if ( y <= 0 )
		{
			IO_printf ( "%s (%d)\n", "Valor nao e positivo", y );
		}
    }
	IO_pause ( "\nApertar ENTER para continuar.\n" );
} // end method_06 ( )

/*
 Method_07.
*/
void method_07 ( void )
{
int x = 0;
int y = 0;
	// identificar
	IO_id ( "Method_07 - Programa - v0.0" );
	// ler do teclado
	x = IO_readint ( "Entrar com um valor inteiro: " );
    y = IO_readint ( "Entrar com outro valor inteiro: ");
	// testar valor par/impar
	if ( x % 2 == 0 )
	{
		IO_printf ( "%s (%d)\n", "Valor e impar", x );
	}
	if ( x % 2 == 1 )
	{
		IO_printf ( "%s (%d)\n", "Valor nao e impar", x );
	} // end if
    if ( y % 2 == 0 )
	{
		IO_printf ( "%s (%d)\n", "Valor e par", y );
	}
	if ( y % 2 == 1 )
	{
		IO_printf ( "%s (%d)\n", "Valor nao e par", y );
	} // end if
	IO_pause ( "\nApertar ENTER para continuar.\n" );
} // end method_07 ( )

/*
 Method_08.
*/
void method_08 ( void )
{
int x = 0;
int y = 0;
	// identificar
	IO_id ( "Method_08 - Programa - v0.0" );
	// ler do teclado
	x = IO_readint ( "Entrar com um valor inteiro: " );
    y = IO_readint ( "Entrar com outro valor inteiro: ");
	// testar valor par/impar
    y = y/2;
	if ( x == y )
	{
		IO_printf ( "%s (%d)=(%d/2)\n", "Primeiro valor e IGUAL a metade do segundo valor", x, y );
	}
	if ( x > y )
	{
		IO_printf ( "%s (%d)<(%d/2)\n", "Primeiro valor e MAIOR a metade do segundo valor", x, y );
	} // end if
    if ( x < y )
	{
		IO_printf ( "%s (%d)>(%d/2)\n", "Primeiro valor e MENOR a metade do segundo valor", x, y );
	}
	IO_pause ( "\nApertar ENTER para continuar.\n" );
} // end method_08 ( )

/*
Funcao principal.
@return codigo de encerramento
*/
int main ( void )
{
	// definir dado
	int opcao = 0;
	// identificar
	printf ( "%s\n", "Exemplo0208 - Programa = v0.0" );
	printf ( "%s\n", "Autor: Daniel Alves Goncalves" );
	printf ( "\n" ); // mudar de linha
	// acoes
	// repetir
	do
	{
	// para mostrar opcoes
	printf ( "\n%s\n", "Opcoes:" );
	printf ( "\n%s" , "0 - Terminar" );
	printf ( "\n%s" , "1 - Method_01" );
	printf ( "\n%s" , "2 - Method_02" );
	printf ( "\n%s" , "3 - Method_03" );
	printf ( "\n%s" , "4 - Method_04" );
	printf ( "\n%s" , "5 - Method_05" );
	printf ( "\n%s" , "6 - Method_06" );
	printf ( "\n%s" , "7 - Method_07" );
	printf ( "\n%s" , "8 - Method_08" );
	printf ( "\n" );
	// ler a opcao do teclado
	printf ( "\n%s", "Opcao = " );
	scanf ( "%d", &opcao );
	getchar( ); // para limpar a entrada de dados
	// para mostrar a opcao lida
	printf ( "\n%s%d\n", "Opcao = ", opcao );
	// escolher acao dependente da opcao
	switch ( opcao )
	{
		case 0: /* nao fazer nada */ break;
		case 1: method_01 ( ); break;
		case 2: method_02 ( ); break;
		case 3: method_03 ( ); break;
		case 4: method_04 ( ); break;
		case 5: method_05 ( ); break;
		case 6: method_06 ( ); break;
		case 7: method_07 ( ); break;
		case 8: method_08 ( ); break;
		default: // comportamento padrao
		printf ( "\nERRO: Opcao invalida.\n" );
		break;
	} // end switch
	}
	while ( opcao != 0 );
	// encerrar
	printf ( "\n\nApertar ENTER para terminar." );
	getchar( ); // aguardar por ENTER
	return ( 0 ); // voltar ao SO (sem erros)
} // end main ( )
/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
---------------------------------------------- historico
Versao Data Modificacao
0.1 10/09 esboco
---------------------------------------------- testes
Versao Teste
0.0 00. ( Exercicio0201 ) identificacao de programa
*/