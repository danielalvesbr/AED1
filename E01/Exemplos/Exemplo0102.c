/*
	Exemplo0102 - v0.2. - 29/08/2024
	Autor: Daniel Alves Goncalves

	Para compilar e executar:
	gcc -o Exemplo0102 Exemplo0102.c
	./Exemplo0102

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
	printf("%s\n","Method_01 - Programa = v0.1");

	//mostrar valor incial
	printf("\n%s%d\n","x = ",x); //OBS: formato para int -> %d(ou %i)
	printf("%s%p\n","x = ",&x); //OBS: o formato para endereco -> %p 

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

/**
	Method_02.
*/
void method_02 (void)
{
	//denifir dado
	double x = 0.0; //definir variavel com valor inicial
					//OBS: definir a parte fracionaria e util
	//identificar
	printf("\n%s\n","Method_02 - Programa = v0.2");

	//mostrar valor inicial
	printf("\n%s%lf\n","x = ",x); //OBS: formato para double -> %lf

	//ler do teclado
	printf("Entrar com um valor real: ");
	scanf("%lf",&x); //ATENCAO NO & AO USAR O SCANF
					 //OBS: necessario indicar o endereco -> &
	getchar();       //OBS: limpar a entrada de dados

	//mostrar valor lido
	printf("%s%lf\n","x = ",x);

	//encerrar
	printf("\n\nApertar ENTER para continuar.\n");
	getchar(); //aguardar por enter
} //end method_02()

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
	printf("%s\n","Exemplo0102 - Programa = v0.2");
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
		printf("\n%s","2 - Method_02");
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
			case 2: //executar method_02
				method_02();
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
	No teste "c) 1.23456789" os ultimos numeros '8' e '9' nao apareceram e o numero '7' foi arredondado em vista do tamanho do numero extrapolar o limite de double nas casas decimais.

	Previsao de testes:
	a)  0.5             RESULTADO OK
	b) -0.55            RESULTADO OK
	c)  1.23456789      RESULTADO OK (OBS nos comentarios)
 
	Historico:
	Versao 0.1 | Data 29/08 esboco
	Versao 0.2 | Data 29/08 mudanca de versao para incrementacao

	Teste: 0.0 - OK
		   0.1 - OK
 
	Mudancas feitas de antemao(antes de testar pela primeira vez): 
	n/d
 
	Mudancas feitas apos testar:
	n/D
 
*/