/*
	Exercicio0120 - v0.0. - 01/09/2024
	Autor: Daniel Alves Goncalves

	Compilar:
	gcc -o Exercicio0120 Exercicio0120.c -lm
	./Exercicio0119
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
	double raio, volume, volume1;
	printf("%s\n","Exercicio0120 - v0.0. - 01/09/2024");
	printf("%s\n","Autor: Daniel Alves Goncalves\n");

	printf("%s\n\n","Vamos calcular o volume de uma esfera com 3/5 do raio!");

	printf("\n%s\n","Digite um valor real para: ");
	printf("%s","Raio: ");
	scanf("%lf",&raio);
	getchar();
	
	volume = M_PI * pow(raio,3) * (4 / 3);
	volume1 = M_PI * (pow(raio,3) * (3 / 5)) * (4 / 3);

	printf("\n%s%lf","Volume do circulo = ",volume);
	printf("\n%s%lf","Volume do circulo com 3/5 do raio = ",volume1);
	printf("\n\nAperte ENTER para terminar.\n");
	getchar();
}
	
	