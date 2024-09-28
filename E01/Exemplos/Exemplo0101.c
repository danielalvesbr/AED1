/*
	Exemplo0101 - v0.1. - 29/08/2024
	Autor: Daniel Alves Goncalves

	Para compilar e executar:
	gcc -o Exemplo0101 Exemplo0101.c
	./Exemplo0101

*/

#include <stdio.h>        //Para entradas e saídas
#include <stdlib.h>       //Para as outras funções de uso geral

/**
	Method_01.
*/
void method_01 (void)
{
	//definir dado
	int x = 0; //Definir dado com valor inicial
	
	//identificar
	printf("%s\n", "Method_01 - Programa = v0.1");

	//mostrar valor incial
	printf("\n%s%d\n","x = ",x); //OBS: formato para int -> %d(ou %i)
	printf("%s%p\n","x = ",x); //OBS: o formato para endereco -> %p 

	//ler do teclado
	printf("Entrar com um valor inteiro: ");
	scanf("%d",&x); //OBS: necessario indicar o endereco -> &
	getchar();      //OBS: limpar entrada de dados

	//mostrar valor lido
	printf("%s%i\n","x = ",x);
	
	//encerrar
	printf("\nApertar ENTER para continuar.\n");
	getchar();
}   //end method_01()

/*
	Funcao principal.
	@return codigo de encerramento
	@param agrc - quantidade de parametros na linha de comandos
	@param agrv - arranjo com o grupo de parametros na linha de comando
*/
int main (int argc, char* argv[])
{
	//definir dado
	int opcao = 0;

	//identificar
	printf("%s\n","Exemplo0101 - Programa = v0.1");
	printf("%s\n","Autor: Daniel Alves Goncalves");
	printf("\n");    //mudar de linha

	//acoes

	//repetir
	do
	{
		//para mostrar opcoes
		printf("\n%s\n","Opcoes:");
		printf("\n%s","0 - Terminar");
		printf("\n%s","1 - Method_01");
		printf("\n");
	
		//ler a opcao do teclado
		printf("\n%s","Opcao = ");
		scanf("%d",&opcao);
		getchar();      //para limpar a entrada de dados
	
		//para mostrar a opcao lida
		printf("\n%s%d","Opcao = ",opcao);
		printf("\n");
	
		//escolher a acao dependente da opcao
		switch(opcao)
		{
			case 0:  //nao fazer nada
				break;
			case 1: //executar method_01
				method_01();
				break;
			default: //comportamento padrao
				printf("\nERRO: opcao invalida.\n");
				break;
		} //end switch
	}
		while(opcao != 0);
	//encerrar
	printf("\n\nAperte ENTER para terminar.");
	getchar(); //aguardar por enter
	return(0); //voltar ao SO (sem erros)
} //end main()

/*
	DOCUMENTACAO COMPLEMENTAR
	Notas/observacoes/comentarios:
	Nao entendi o objetivo da l27, se for para exibir o endereco de memoria de 'x', nao seria necessario colocar um ponteiro? Alem disso, nao tem motivo (alem do academico para aprendizado) para exibir o endereco de 'x' certo? Nesse caso optei por retirar algumas coisas que apos testes considerei desnecessarias pois nao faziam diferenca no resultado (descrito em mudancas feitas apos testar).

	Previsao de testes:
	a)  5               RESULTADO OK
	b) -5               RESULTADO OK
	c)  123456789       RESULTADO OK
 
	Historico:
	Versao 0.1 | Data 29/08

	Testes OK
	Mudancas feitas de antemao(antes de testar pela primeira vez): 
	n/d
 
	Mudancas feitas apos testar:
	l27 - retirada do & a esquerda de %s
	l27 - retirada do & a esquerda de x);
 
*/