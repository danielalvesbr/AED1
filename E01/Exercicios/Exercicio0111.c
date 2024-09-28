/*
	Exercicio0111 - v0.0. - 01/09/2024
	Autor: Daniel Alves Goncalves

	Compilar:
	gcc -o Exercicio0111 Exercicio0111.c
	./Exercicio0111
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
	printf("%s\n","Exercicio0111 - v0.0. - 01/09/2024");
	printf("%s\n","Autor: Daniel Alves Goncalves\n");

	printf("%s\n","Vamos calcular a area de um quadrado e o dobro da area desse quadrado!");
	printf("%s\n","Pressione ENTER para continuar");
	getchar();
	
	int lado = 0;
	double area1, area2;
	printf("\n%s","Digite um valor inteiro para o lado do quadrado: ");
	scanf("%d",&lado);
	area1 = lado * lado;
	area2 = (lado * 2) * (lado * 2);

	while (getchar() != '\n') //Limpar o buffer do getchar
        continue;
	
	printf("\n%s%lf","Area do quadrado = ",area1);
	printf("\n%s%lf","Area do dobro do lado do quadrado = ",area2);
	printf("\n\nAperte ENTER para terminar.\n");
	getchar();
}

