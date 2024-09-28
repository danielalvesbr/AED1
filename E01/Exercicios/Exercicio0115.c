/*
	Exercicio0115 - v0.0. - 01/09/2024
	Autor: Daniel Alves Goncalves

	Compilar:
	gcc -o Exercicio0115 Exercicio0115.c
	./Exercicio0115
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
	double base, altura, area1, area2;
	printf("%s\n","Exercicio0115 - v0.0. - 01/09/2024");
	printf("%s\n","Autor: Daniel Alves Goncalves\n");

	printf("%s\n\n","Vamos calcular a area de um triangulo com metade da altura original!");

	printf("\n%s\n","Digite um valor real para: ");
	printf("%s","Base: ");
	scanf("%lf",&base);
	getchar();
	
	printf("%s","Altura: ");
	scanf("%lf",&altura);
	getchar();
	
	area1 = (base * altura)/2;
	area2 = ((altura / 2) * base) / 2;

	printf("\n%s%lf","Area do triangulo = ",area1);
	printf("\n%s%lf","Area do do triangulo com metade da altura = ",area2);
	printf("\n\nAperte ENTER para terminar.\n");
	getchar();
}
	
	