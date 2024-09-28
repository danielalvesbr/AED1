/*
	Exercicio0117 - v0.0. - 01/09/2024
	Autor: Daniel Alves Goncalves

	Compilar:
	gcc -o Exercicio0117 Exercicio0117.c
	./Exercicio0117
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
	double lado, volume1, volume2;
	printf("%s\n","Exercicio0117 - v0.0. - 01/09/2024");
	printf("%s\n","Autor: Daniel Alves Goncalves\n");

	printf("%s\n\n","Vamos calcular o volume de um cubo com 7x a medida do lado!");

	printf("\n%s\n","Digite um valor real para: ");
	printf("%s","Lado do cubo: ");
	scanf("%lf",&lado);
	getchar();
	
	volume1 = lado * lado * lado;
	volume2 = volume1 * (7 * 7 * 7);

	printf("\n%s%lf","Volume do cubo = ",volume1);
	printf("\n%s%lf","Volume do cubo com 7x o lado = ",volume2);
	printf("\n\nAperte ENTER para terminar.\n");
	getchar();
}
	
	