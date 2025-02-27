/*
	Exemplo0110 - v0.0. - 29/08/2024
	Autor: Daniel Alves Goncalves

	Para compilar e executar:
	gcc -o Exemplo0110 Exemplo0110.c -lm
	./Exemplo0110

*/

#include <stdio.h>        //Para entradas e saídas
#include <stdlib.h>       //Para as outras funções de uso geral
#include <stdbool.h>      //Para valores logicos
#include <string.h>       //Para cadeia de caracteres
#include <math.h>         //Para funcoes matematicas
// dependencias
#include "io.h" //para definicoes proprias (na mesma pasta)

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

/**
	Method_09.
*/
void method_09 (void)
{
	//definir dados singulares
	int x = 0; //definir variavel com valor inicial para guardar inteiro
	double y = 3.5; //definir variavel com valor inicial para guardar real
	char z = 'A'; //definir variavel com valor inicial para guardar caractere (simbolo)
	bool w = false; //definir variavel com valor inicial para guardar falso ou verdadeiro
	// definir dados com mais de um valor
	char s [80] = ""; //definir espaco de armazenamento para ate 80 caracteres (simbolos)
	// identificar
	printf("\n%s\n","Method_09 - Programa = v0.0");
	// mostrar valores iniciais
	printf ( "01. %s%d\n" , "x = ", x );
	printf ( "02. %s%lf\n" , "y = ", y );
	printf ( "03. %s%c\n" , "z = ", z );
	// converter entre tipos de dados (type casting)
	x = (int) z; // codigo inteiro equivalente ao caractere
	printf ( "04. %s%d -> %c\n" , "x = ", x, z );
	x = (int) y; // parte inteira de real
	printf ( "05. %s%d -> %lf\n", "x = ", x, y );
	x = 97;
	z = (char) x; // símbolo equivalente ao codigo inteiro
	printf ( "06. %s%c -> %d\n" , "z = ", z, x );
	x = (int) '0'; // codigo inteiro equivalente ao caractere
	z = (char) x; // caractere equivalente ao codigo inteiro
	printf ( "07. %s%c -> %d\n" , "z = ", z, x );
	x = w; // codigo inteiro equivalente ao logico
	printf ( "08. %s%d -> %d\n" , "x = ", x, w );
	w = true;
	x = w; // codigo inteiro equivalente ao logico
	printf ( "09. %s%d -> %d\n" , "x = ", x, w );
	x = (w==false); // equivalente 'a comparacao de igualdade (true igual a false)
	printf ( "10. %s%d -> %d\n" , "x = ", x, w );
	x = ! (w==false); // equivalente ao contrario da comparacao de valores (true igual a false)
	printf ( "11. %s%d -> %d\n" , "x = ", x, w );
	x = (w!=false); // equivalente 'a comparacao de diferenca (true diferente de false)
	printf ( "12. %s%d -> %d\n" , "x = ", x, w );
	w = (x == 0); // equivalente 'a comparacao de igualdade entre (x) e zero
	printf ( "13. %s%d == %d = %d\n" , "w = ", x, 0, w );
	w = (x != 0); // equivalente 'a comparacao de diferenca entre (x) e zero
	printf ( "14. %s%d != %d = %d\n" , "w = ", x, 0, w );
	w = (x < y); // equivalente 'a comparacao entre (x) e (y)
	printf ( "15. %s%d < %lf = %d\n" , "w = ", x, y, w );
	w = (x <= y); // equivalente 'a comparacao entre (x) e (y)
	printf ( "16. %s%d <= %lf = %d\n" , "w = ", x, y, w );
	w = (y > x); // equivalente 'a comparacao entre (x) e (y)
	printf ( "17. %s%lf > %d = %d\n" , "w = ", y, x, w );
	w = (y >= x); // equivalente 'a comparacao entre (x) e (y)
	printf ( "18. %s%lf >= %d = %d\n" , "w = ", y, x, w );
	x = 4;
	w = (x % 2 == 0); // equivalente a testar se é par ou resto inteiro (%) da divisao por 2 igual a zero
	
	printf ( "19. %s (%d%%2) ? %d\n" , "e' par ", x, w );
	x = 4;
	w = (x % 2 != 0); // equivalente a testar se é ímpar ou resto inteiro (%) da divisao por 2 diferente de zero
	
	printf ( "20. %s (%d%%2) ? %d\n" , "e' impar ", x, w );
	z = '5';
	w = ('0'<=z && z<='9'); // equivalente a testar se e' algarismo/digito pertence a [‘0’:’9’] (é igual ou esta’ entre ‘0’ e ‘9’)

	printf ( "21. %s (%c) ? %d\n" , "e' digito", z, w );
	z = 'x';
	w = ('a'<=z && z<='z'); // equivalente a testar se e' letra minuscula, pertence a [‘a’:’z’] (é igual ou esta’ entre ‘a’ e ‘z’)
	
	printf ( "22. %s (%c) ? %d\n" , "e' minuscula ", z, w );
	z = 'X';
	w = ( ! ('a'<=z && z<='z' ) ); // equivalente a testar se NAO (!) e' letra minuscula
	printf ( "23. %s (%c) ? %d\n" , "nao e' minuscula ", z, w );
	z = 'x';
	w = ('A'<=z && z<='Z'); // equivalente a testar se e' letra maiuscula
	printf ( "24. %s (%c) ? %d\n" , "e' maiuscula ", z, w );
	z = 'X';
	w = ( (z < 'A') || ('Z' < z) ); // equivalente a testar se NAO e' letra maiuscula, esta’ fora do intervalo [’a’:’z’], ou e’ menor que ‘a’ ou e’ maior que ‘z’
	
	printf ( "25. %s (%c) ? %d\n" , "nao e' maiuscula ", z, w );
	z = '0';
	w = ('0'==z || '1'==z); // equivalente a testar se e' igual a '0' ou a '1'
	printf ( "26. %s (%c) ? %d\n" , "e' 0 ou 1 ", z, w );
	strcpy ( s, "zero" ); // copiar para (s) <- "zero" (NAO usar '=' com caracteres);
	printf ( "27. palavra = %s\n", s );
	w = (strcmp ( "zero", s ) == 0); // comparar se caracteres iguais (NAO usar '==' com caracteres);
	// Nota: O resultado da comparação sempre devera' ser avaliado em relacao a zero, e sera' igual caso coincida.
	
	printf ( "28. palavra == %s ? %d\n", s, w );
	strcpy ( s, "um e dois" ); // copiar para (s) <- "outras palavras" (NAO usar '=' com caracteres);
	printf ( "29. palavras = %s\n", s );
	w = (strcmp ( "zero", s ) != 0); // comparar se caracteres diferentes (NAO usar '!=' com caracteres);
	// Nota: O resultado da comparação sempre devera ser avaliado em relacao a zero, e sera' diferente caso NAO coincidir.

	printf ( "30. palavra == %s ? %d\n", s, w );
	
	// encerrar
	printf ( "\n\nApertar ENTER para continuar." );
	getchar( ); // aguardar por ENTER
} //end method_09()

/**
	Method_10.
*/
void method_10 (void)
{
	// definir dados
	int x = 5 ; // definir variavel com valor inicial
	double y = 3.5; // definir variavel com valor inicial
	char z = 'A'; // definir variavel com valor inicial
	bool w = TRUE; // definir variavel com valor inicial
	chars a = IO_new_chars(STR_SIZE); // definir variavel com tamanho inicial
	chars b = IO_new_chars(STR_SIZE); // definir variavel com tamanho inicial
	chars c = IO_new_chars(STR_SIZE); // definir variavel com tamanho inicial
	// identificar
	IO_id ( "Method 10 - Programa = v0.0" );
	// concatenar (juntar) cadeias de caracteres
	strcpy ( a, "abc" ); // atribuir a variavel (a) o valor constante ("abc")
	strcpy ( b, "def" ); // OBS.: a atribuicao de cadeia de caracteres NAO usa (=)
	IO_printf ( "\na = %s b = %s\n", a, b );
	c = IO_concat ( a, b ); // alternativa melhor para a funcao nativa strcat (a,b)
	IO_printf ( "\nc = [%s]+[%s] = [%s]\n", a, b, c );
	strcpy ( a, "c = " );
	strcpy ( c, STR_EMPTY ); // limpar a cadeia de caracteres
	IO_printf ( "%s\n", IO_concat ( a, IO_toString_c ( z ) ) );
	IO_println ( IO_concat ( "x = ", IO_toString_d ( x ) ) );
	IO_println ( IO_concat ( "w = ", IO_toString_b ( w ) ) );
	strcpy ( b, STR_EMPTY );
	IO_print ( "y = " );
	IO_print ( IO_concat ( b, IO_toString_f ( y ) ) );
	IO_print ( "\n" );
	z = IO_readchar ( "char = " );
	IO_println ( IO_concat ( a, IO_toString_c ( z ) ) );
	y = IO_readdouble ( "double = " );
	IO_println ( IO_concat ( a, IO_toString_f ( y ) ) );
	x = IO_readint ( "int = " );
	IO_println ( IO_concat ( a, IO_toString_d ( x ) ) );
	w = IO_readbool ( "bool = " );
	IO_println ( IO_concat ( a, IO_toString_b ( w ) ) );
	b = IO_readstring ( "chars = " );
	IO_println ( IO_concat ( a, b ) );
	b = IO_readln ( "line = " );
	IO_println ( IO_concat ( a, b ) );
	// encerrar
	IO_pause ( "Apertar ENTER para terminar." );
	// chamar method para pausar
} // end method_10()

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
	printf("%s\n","Exemplo0109 - Programa = v0.0");
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
		printf("\n%s","9 - Method_09");
		printf("\n%s","10 - Method_10");
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
			case 9: //executar method_09
				method_09();
				break;
			case 10: //executar method_10
				method_10();
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
	Dificuldade em anexar a biblioteca externa "io.h".

	Previsao de testes:
	
 
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