/*
	Exemplo0108 - v0.0. - 29/08/2024
	Autor: Daniel Alves Goncalves

	Para compilar e executar:
	gcc -o Exemplo0108 Exemplo0108.c -lm
	./Exemplo0108

*/

#include <stdio.h>        //Para entradas e saídas
#include <stdlib.h>       //Para as outras funções de uso geral
#include <stdbool.h>      //Para valores logicos
#include <string.h>       //Para cadeia de caracteres
#include <math.h>         //Para funcoes matematicas

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

/**
	Method_06
*/
void method_06(void)
{
	//definir dados
	int x = 0; //definir variavel com valor inicial
	int y = 0; //definir variavel com valor inicial
	int z = 0; //definir variavel com valor inicial

	int *py = &y; //definir acesso a y via endereco

	//identificar
	printf("\n%s\n","Method_06 - Programa = v0.0");

	//mostrar valores iniciais
	printf("%s%d\n","x = ",x); 
	printf("%s%i\n","y = ",y); 
	//OBS: formato para int -> %d(ou %i)

	//ler do teclado
	printf("Entrar com um valor inteiro: ");
	scanf("%d",&x);  //OBS: necessario indicar endereco -> &
	getchar();      //OBS: limpar entrada de dados
	printf("Entrar com outro valor inteiro: ");
	scanf("%i",py); //OBS: nao e necessario indicar endereco -> &
	getchar();      //OBS: limpar entrada de dados

	//operar valores
	z = x * y; //guardar em z o produto de x por y

	//mostrar valor resultante
	printf("%s(%d)*(%i)=(%d)\n","z = ",x,y,z);

	//encerrar
	printf("\n\nApertar ENTER para continuar.\n");
	getchar(); //aguardar por enter
} //end method_06()

/**
Method_07.
*/
void method_07 ( void )
{
	//definir dados
	char x[80] = "abc"; //definir variavel com tamanho e valor inicial
	char y[80] = "def"; //definir variavel com tamanho e valor inicial
	char z[80]; //definir variavel com tamanho inicial
	strcpy(z,""); //e copiar para (z) a representacao de vazio

	//identificar
	printf("\n%s\n", "Method_07 - Programa = v0.0");

	//mostrar valores iniciais e comprimentos das cadeias
	printf("%s%s(%ld)\n","x = ",x,strlen(x));
	printf("%s%s(%ld)\n","y = ",y,strlen(y));
	//OBS: formato para int -> %d(ou %i)

	//ler do teclado
	printf("Entrar com caracteres: ");
	scanf("%s",x);
	//OBS: nao indicar o endereco -> &
	getchar(); //OBS: limpar a entrada de dados

	printf("Entrar com outros caracteres: ");
	scanf("%s",y);
	//OBS: nao indicar o endereco -> &
	getchar(); //OBS: limpar a entrada de dados

	//operar valores
	strcpy(z,x); // copiar (x) para (z)
	strcat(z,y); // juntar (y) a (z)
	//OBS: forma mais eficiente

	//mostrar valor resultante
	printf ("%s[%s] * [%s] = [%s]\n", "z = ",x,y,z);

	//encerrar
	printf("\n\nApertar ENTER para continuar.\n");
	getchar(); //aguardar por enter
} //end method_07()

void method_08 ( void )
{
	//definir dados
	double x = 0.0; //definir variavel com valor inicial
	double y = 0.0; //definir variavel com valor inicial
	double z = 0.0; //definir variavel com valor inicial
	//identificar
	printf("\n%s\n","Method_08 - Programa = v0.0");
	//mostrar valores iniciais
	printf("%s%lf\n","x = ",x);
	printf("%s%lf\n","y = ",y);
	//OBS: o formato para int -> %d (ou %i)
	
	//ler do teclado
	printf("Entrar com um valor real: ");
	scanf("%lf",&x);
	//OBS: necessario indicar o endereco -> &
	getchar(); // OBS.: Limpar a entrada de dados
	
	printf("Entrar com outro valor real: ");
	scanf("%lf",&y);
	//OBS: necessario indicar o endereco -> &
	getchar ( ); //OBS: limpar a entrada de dados

	// operar valores
	z = pow(x,y); // elevar a base (x) a potencia (y)
	// mostrar valor resultante
	printf("%s(%lf) elevado a (%lf) = (%lf)\n","z = ",x,y,z);
	
	// operar valores
	x = pow(z,1.0/y); // elevar a base (x) a potencia inversa de (y) (raiz)
	// mostrar valor resultante
	printf("%s(%lf) elevado a (1/%lf) = (%lf)\n","z = ",z,y,x);
	
	// operar valores
	z = sqrt(x); // raiz quadrada do argumento
	// mostrar valor resultante
	printf ( "%sRaiz de (%lf) = (%lf)\n", "z = ",x,z);
} //end method_08()

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
	printf("%s\n","Exemplo0108 - Programa = v0.0");
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
		printf("\n%s","6 - Method_06");
		printf("\n%s","7 - Method_07");
		printf("\n%s","8 - Method_08");
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
			case 6: //executar method_06
				method_06();
				break;
			case 7: //executar method_07
				method_07();
				break;
			case 8: //executar method_08
				method_08();
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
	Arredondamento do ultimo digito quando o valor é maior que permitido.
	Ao fazer (-0.125 elevado a 1/-3.0) deu um erro.
	

	Previsao de testes:
	a) 2.0 e 3.0    OK
	b) 3.0 e 2.0    OK
	c) -3.0 e 2.0   OK
	d) -2.0 e -3.0  Falhou
 
	Historico:
	Versao 0.0 | Data 29/08 

	Testes OK
	Mudancas feitas de antemao(antes de testar pela primeira vez): 
	l287 - troca de "raiz" por "Raiz de"
 
	Mudancas feitas apos testar:
	n/d

	Erros cometidos:
	n/d
 
*/