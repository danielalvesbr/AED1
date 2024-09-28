/*
	Exercicio0118 - v0.0. - 01/09/2024
	Autor: Daniel Alves Goncalves

	Compilar:
	gcc -o Exercicio0118 Exercicio0118.c -lm
	./Exercicio0118
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
	double lado1, lado2, lado3, volume1, volume2;
	printf("%s\n","Exercicio0118 - v0.0. - 01/09/2024");
	printf("%s\n","Autor: Daniel Alves Goncalves\n");

	printf("%s\n\n","Vamos calcular o volume de um paralelepipedo com 5x a medida do lados!");

	printf("\n%s\n","Digite um valor real para: ");
	printf("%s","Lado X: ");
	scanf("%lf",&lado1);
	getchar();

	printf("%s","Lado Y: ");
	scanf("%lf",&lado2);
	getchar();

	printf("%s","Lado Z: ");
	scanf("%lf",&lado3);
	getchar();
	
	volume1 = lado1 * lado2 * lado3;
	volume2 = pow(lado1,5) * pow(lado2,5) * pow(lado3,5);

	printf("\n%s%lf","Volume do paralelepipedo = ",volume1);
	printf("\n%s%lf","Volume do paralelepipedo com 5x o lado = ",volume2);
	printf("\n\nAperte ENTER para terminar.\n");
	getchar();
}
	
	