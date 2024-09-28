/*
	Exercicio0119 - v0.0. - 01/09/2024
	Autor: Daniel Alves Goncalves

	Compilar:
	gcc -o Exercicio0119 Exercicio0119.c -lm
	./Exercicio0119
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
	double raio, area, area1;
	printf("%s\n","Exercicio0119 - v0.0. - 01/09/2024");
	printf("%s\n","Autor: Daniel Alves Goncalves\n");

	printf("%s\n\n","Vamos calcular a area de um semicirculo com 1/4 do raio!");

	printf("\n%s\n","Digite um valor real para: ");
	printf("%s","Raio: ");
	scanf("%lf",&raio);
	getchar();
	
	area = M_PI * raio * raio;
	area1 = M_PI * (raio / 4) * (raio / 4);

	printf("\n%s%lf","Area do circulo = ",area);
	printf("\n%s%lf","Area do circulo com 1/4 do raio = ",area1);
	printf("\n\nAperte ENTER para terminar.\n");
	getchar();
}
	
	