/*
	Exemplo0201 - v0.0. - 03 / 09 / 2024
	Autor: Daniel Alves Goncalves
	
	Para compilar:
	gcc -o exemplo0201 exemplo0201.c
	exemplo0201
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
	if ( x == 0 )
	{
		IO_printf ( "%s (%d)\n", "Valor igual a zero", x );
	}
	if ( x != 0 )
	{
		IO_printf ( "%s (%d)\n", "Valor diferente de zero ", x );
	} // end if
	// encerrar
	IO_pause ( "\nApertar ENTER para continuar.\n" );
} // end method_01 ( )
/*
Funcao principal.
@return codigo de encerramento
*/
int main ( void )
{
	// definir dado
	int opcao = 0;
	// identificar
	printf ( "%s\n", "Exemplo0201 - Programa = v0.0" );
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
Programa rodou de primeira, na hora de digitar retirei o ponto de .// da l62 e coloquei ; na l42
---------------------------------------------- notas / observacoes / comentarios
Em caso 1 exibe o nome do autor e pede um valor inteiro, mostrando se o mesmo e diferente ou igual a zero
---------------------------------------------- previsao de testes
---------------------------------------------- historico
Versao Data Modificacao
0.1 03/09 esboco
---------------------------------------------- testes
Versao Teste
0.0 00. ( Exemplo0201 ) identificacao de programa
*/