/*
	Exercicio0112 - v0.0. - 01/09/2024
	Autor: Daniel Alves Goncalves

	Compilar:
	gcc -o Exercicio0112 Exercicio0112.c
	./Exercicio0112
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
	printf("%s\n","Exercicio0112 - v0.0. - 01/09/2024");
	printf("%s\n","Autor: Daniel Alves Goncalves\n");

	printf("%s\n","Vamos calcular a area e perimetro de um terco de um lado de um quadrado!");
	printf("\n%s\n","Pressione ENTER para continuar");
	getchar();
	
	int lado = 0;
	double area, perimetro, terco;
	printf("\n%s","Digite um valor inteiro para o lado do quadrado: ");
	scanf("%d",&lado);

	terco = lado / 3;
	area = terco * terco;
	perimetro = terco + terco;

	while (getchar() != '\n') //Limpar o buffer do getchar
        continue;
	
	printf("\n%s%lf","Terco do lado do quadrado = ",terco);
	printf("\n%s%lf","Area de 1/3 do lado do quadrado = ",area);
	printf("\n%s%lf","Perimetro de 1/3 do lado do quadrado = ",perimetro);
	printf("\n\nAperte ENTER para terminar.\n");
	getchar();
}
	
	