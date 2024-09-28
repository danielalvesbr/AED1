/*
	Exercicio0114 - v0.0. - 01/09/2024
	Autor: Daniel Alves Goncalves

	Compilar:
	gcc -o Exercicio0114 Exercicio0114.c
	./Exercicio0114
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
	int lado1, lado2;
	double area1, area2, perimetro1, perimetro2;
	printf("%s\n","Exercicio0114 - v0.0. - 01/09/2024");
	printf("%s\n","Autor: Daniel Alves Goncalves\n");

	printf("%s\n","Vamos calcular a area e perimetro de um sexto dos lados de um retangulo!");

	printf("\n%s","Digite um valor inteiro para: ");
	printf("\n%s","Lado X: ");
	scanf("%d",&lado1);
	getchar();
	
	printf("%s","Lado Y: ");
	scanf("%d",&lado2);
	getchar();
	
	area1 = lado1 * lado2;
	perimetro1 = lado1 + lado2;
	area2 = (lado1 / 6) * (lado2 / 6);
	perimetro2 = perimetro1 / 6;

	printf("\n%s%lf","Area do retangulo = ",area1);
	printf("\n%s%lf","Perimetro do retangulo = ",perimetro1);
	printf("\n%s%lf","Area do retangulo com 1/6 dos lados = ",area2);
	printf("\n%s%lf","Perimetro do retangulo com 1/6 dos lados= ",perimetro2);
	printf("\n\nAperte ENTER para terminar.\n");
	getchar();
}
	
	