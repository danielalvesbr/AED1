/*
	Exemplo0105 - v0.0. - 29/08/2024
	Autor: Daniel Alves Goncalves

	Para compilar e executar:
	gcc -o Exemplo0105 Exemplo0105.c
	./Exemplo0105

*/

#include <stdio.h>        //Para entradas e saídas
#include <stdlib.h>       //Para as outras funções de uso geral
#include <stdbool.h>      //Para valores logicos
#include <string.h>       //Para cadeia de caracteres

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

/**
	Method_03.
*/
void method_03 (void)
{
	//definir dado
	char x = 'A'; //definir variavel com um valor inicial
				  //OBS: essencial usar apostrofos
	//identificar
	printf("\n%s\n","Method_03 - Programa = v0.3");

	//mostrar valor inicial
	printf("\n%s%c\n","x = ",x); //OBS: formato para char -> %c

	//ler do teclado
	printf("Entrar com um caractere: ");
	scanf("%c",&x);
	getchar();

	//mostrar valor lido
	printf("%s%c\n","x = ",x);

	//encerrar
	printf("\n\nApertar ENTER para continuar.\n");
	getchar(); //aguardar por enter
} //end method_03()

/**
	Method_04.
*/
void method_04 (void)
{
	//definir dado
	bool x = false; //definir variavel com um valor inicial
				    //OBS: essencial usar letras minusculas
	int y = 0;      //definir variavel auxiliar
	//identificar
	printf("\n%s\n","Method_04 - Programa = v0.0");

	//mostrar valor inicial
	printf("\n%s%d\n","x = ",x); //OBS: formato para equivalente inteiro -> %d

	//ler do teclado
	printf("Entrar com um valor logico: ");
	scanf("%d",&y); //OBS: usar equivalente inteiro -> 0 = false
	getchar();      //OBS: limpar entrada de dados

	//garantir valor logico no intervalo [0:1]
	x = (y!=0);

	//mostrar valor lido
	printf("%s%d\n","x = ",x);

	//encerrar
	printf("\n\nApertar ENTER para continuar.\n");
	getchar(); //aguardar por enter
} //end method_04()

/**
	Method_05.
*/
void method_05 (void)
{
	//definir dado
	char x [80] = "abc"; //definir variavel com tamanho e valor inicial
//	char *px = &x[0];    //definir alternativa para acesso via endereco

	//identificar
	printf("\n%s\n","Method_05 - Programa = v0.0");

	//mostrar valor inicial
	printf("\n%s%s\n","x = ",x); //OBS: formato para caracteres -> %s

	//ler do teclado
	printf("Entrar com uma cadeia de caracteres: ");
	scanf("%s",x);  //OBS: nao devera ser usado o endereco dessa vez!
					//OBS: o tamanho nao devera ultrapassar 80 simbolos
	getchar();      //OBS: limpar entrada de dados

	//mostrar valor lido
	printf("%s%s\n","x = ",x);
/*
	// ler do teclado (forma alternativa para acesso via endereco)
	printf ("Entrar com outra cadeia de caracteres: ");
	scanf ("%s",px);
	getchar(); //OBS: Limpar a entrada de dados
 
	// mostrar valor lido (forma alternativa para acesso via endereco)
	printf ("%s%s\n","x = ",px);
*/
	//encerrar
	printf("\n\nApertar ENTER para continuar.\n");
	getchar(); //aguardar por enter
} //end method_05()


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
	printf("%s\n","Exemplo0105 - Programa = v0.0");
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
		printf("\n%s","3 - Method_03");
		printf("\n%s","4 - Method_04");
		printf("\n%s","5 - Method_05");
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
			case 3: //executar method_03
				method_03();
				break;
			case 4: //executar method_04
				method_04();
				break;
			case 5: //executar method_05
				method_05();
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
	Acentos, numeros, underline, maiuscula e minuscula são aceitos, mas espacos nao. 

	Previsao de testes:
	a) def      OK
	b) d e f    Falhou
	c) d_e_f    OK
 
	Historico:
	Versao 0.0 | Data 29/08 

	Testes OK
	Mudancas feitas de antemao(antes de testar pela primeira vez): 
	n/d
 
	Mudancas feitas apos testar:
	n/d

	Erros cometidos:
	n/d
 
*/