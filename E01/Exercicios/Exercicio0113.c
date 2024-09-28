/*
	Exercicio0113 - v0.0. - 01/09/2024
	Autor: Daniel Alves Goncalves

	Compilar:
	gcc -o Exercicio0113 Exercicio0113.c
	./Exercicio0113
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
	int lado1, lado2;
	double area1, area2;
	printf("%s\n","Exercicio0113 - v0.0. - 01/09/2024");
	printf("%s\n","Autor: Daniel Alves Goncalves\n");

	printf("%s\n","Vamos calcular a area de um retangulo com os lados 3x maiores que o original!");
	printf("\n%s\n","Pressione ENTER para continuar");
	getchar();

	printf("\n%s\n","Digite um valor inteiro para: ");
	printf("\n%s","Lado X: ");
	scanf("%d",&lado1);
	getchar();
	
	printf("\n%s","Lado Y: ");
	scanf("%d",&lado2);
	getchar();
	
	area1 = lado1 * lado2;
	area2 = (lado1 * 3) * (lado2 * 3);
	
	printf("\n\n%s%lf","Area do retangulo = ",area1);
	printf("\n%s%lf","Area do retangulo com os lados 3x maiores = ",area2);
	printf("\n\nAperte ENTER para terminar.\n");
	getchar();
}
	
	