/*
	Exercicio0116 - v0.0. - 01/09/2024
	Autor: Daniel Alves Goncalves

	Compilar:
	gcc -o Exercicio0116 Exercicio0116.c
	./Exercicio0115
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
	double lado, area1, area2;
	printf("%s\n","Exercicio0116 - v0.0. - 01/09/2024");
	printf("%s\n","Autor: Daniel Alves Goncalves\n");

	printf("%s\n\n","Vamos calcular a area de um triangulo equilatero com 4x o tamanho dos lados!");

	printf("\n%s\n","Digite um valor real para: ");
	printf("%s","Lado do triangulo: ");
	scanf("%lf",&lado);
	getchar();
	
	area1 = (lado * lado) / 2;
	area2 = ((lado * 4) * (lado * 4)) / 2;

	printf("\n%s%lf","Area do triangulo = ",area1);
	printf("\n%s%lf","Area do do triangulo com 4x o lado = ",area2);
	printf("\n\nAperte ENTER para terminar.\n");
	getchar();
}
	
	