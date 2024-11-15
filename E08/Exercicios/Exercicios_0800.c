#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>
#define TAM_MAX 1000


void method_0811(){
    int n = 0;
    int array[n];
    int i = 0;
    int x = 0;

        printf("\nDigite o tamanho do arranjo: ");
        scanf("%d", &n);

        for(i = 0; i < n; i++){
            printf("\nDigite um numero inteiro e impar: ");
            scanf("%d", &x);
            if(x > 0 && x % 2 != 0){
                array[i] = x;
                printf("\n %d", array[i]); 
            }
            else{
                printf("\nERRO: numero digitado nao e positivo e impar");
                printf("\nDigite outro numero.");
                n++;
            }
        }
}

void arranjo_leitura(int* array, int n){
    int i = 0;
    int x = 0;
    FILE * arq = fopen("q_02.txt", "wt");

    fprintf(arq, "n = %d\n", n);

    for(i = 0; i < n; i++){
        printf("\nDigite um nuemro inteiro e impar: ");
        scanf("%d", &x);
        if(x > 0 && x % 2 != 0 ){
            array[i] = x;
            fprintf(arq, "\n%d", array[i]);
        }
        else{
            printf("\nERRO: numero digitado nao e positivo e impar");
            printf("\nDigite outro numero.");
            n++;
        }
    }
fclose(arq);

}
            

void method_0812(){
    int n = 0;
    int array[n];

    printf("\nDigite o tamanho do arranjo: ");
    scanf("%d", &n);

    arranjo_leitura(array, n);
}

void q_03(int a, int b, int n){
    FILE* arq = fopen("DADOS.txt", "wt");
    fprintf(arq, "%d\n\n", n);
    srand( (unsigned)time(NULL) );

    for(int i = 0; i < n; i++){
        int x = a + (rand() % (b - a + 1));
        fprintf(arq, "%d\n", x);
    }
    fclose(arq);
}

void method_0813(){
    int n = 0;
    int a = 0, b = 0;

    printf("\nDigite uma quantidade de valores a serem testados: ");
    scanf("%d", &n);
    printf("\nDigite um valor para definir o limite inferiro de um intervalo [a,b]: ");
    scanf("%d", &a);
    printf("\nDigite um valor para definir o limite superior de um intervalo [a,b]: ");
    scanf("%d", &b);

    if ( a > b){
        printf("\nERRO: valor de A maior que o de B, tente novamente.");
        return;
    }
    q_03(a,b,n);
}

char *lerArquivo(int n, char *fileName){
    FILE *arq = fopen(fileName, "rt");
    int x = 1;
    if(arq == NULL){
        printf("\nArquivo nao pode ser aberto.");
        exit(0);
    }

    char *arranjo = (char *)malloc(100 * sizeof(char));  // Alocar mais memória, se necessário
    if (arranjo == NULL) {
        printf("\nErro ao alocar memoria.");
        fclose(arq);
        exit(0);
    }
    arranjo[0] = '\0';

    char copy[100];
    while(fgets(copy, 100, arq) && x <= n + 1){
        strcat(arranjo, copy);
        x++;
    }

    fclose(arq);
    return arranjo;
}

int m_impar(int n, char *array) {
    int atual;
    int menor = 1001; 
    char *token = strtok(array, "\n");  

    while (token != NULL && n > 0) {
        atual = atoi(token);  
        if (atual % 2 != 0){ 
            if (atual < menor){
                menor = atual;
            }
        }
        token = strtok(NULL, "\n"); 
        n--;
    }

    if (menor == 1001){
        return -1;
    }

    return menor;
}

void method_0814(){
    int n = 0;
    int menor = 0;
    printf("\nDigite uma quantidade de valores a serem testados: ");
    scanf("%d", &n);

    char *array = lerArquivo(n, "DADOS.txt");
    printf("\n%s", array);
    int i;

    menor = m_impar(n, array);

    printf("\nMenor numero impar no arranjo = %d", menor);

    free(array);
}

int m_par(int n, char *array) {
    int atual;
    int maior = 1; 
    char *token = strtok(array, "\n");  

    while (token != NULL && n > 0) {
        atual = atoi(token);  
        if (atual % 6 == 0){ 
            if (atual > maior){
                maior = atual;
            }
        }
        token = strtok(NULL, "\n"); 
        n--;
    }

    if (maior == 1){
        return -1;
    }

    return maior;
}

void method_0815(){
    int n = 0;
    int maior = 0;

    printf("\nDigite uma quantidade de valores a serem testados: ");
    scanf("%d", &n);

    char *array = lerArquivo(n, "DADOS.txt");
    maior = m_par(n, array);

    if(maior != -1){
        printf("\nMaior numero par e multiplo de 3 no arranjo = %d", maior);
    }
    else{
        printf("\nNao existe numero par e multiplo de 3 no arranjo. ");
    }
}

char *readArquivo(float n, char *fileName){
    FILE *arq = fopen(fileName, "rt");
    int x = 1;
    if(arq == NULL){
        printf("\nArquivo nao pode ser aberto.");
        exit(0);
    }

    char *arranjo = (char *)malloc(100 * sizeof(char));  // Alocar mais memória, se necessário
    if (arranjo == NULL) {
        printf("\nErro ao alocar memoria.");
        fclose(arq);
        exit(0);
    }
    arranjo[0] = '\0';

    char copy[100];
    while(fgets(copy, 100, arq) && x <= n + 1){
        strcat(arranjo, copy);
        x++;
    }

    fclose(arq);
    return arranjo;
}

float media(int n, char *array) {
    float soma = 0.0;
    int contador = 0;

    char *token = strtok(array, "\n");
    while (token != NULL && contador < n) {
        float valor = atof(token); 
        soma += valor;
        token = strtok(NULL, "\n");
        contador++;
    }

    if (contador == 0) {
        return 0.0;
    }
    return soma / contador;
}

int *separador(float media, char *array, int n){
    FILE *arq = fopen("MENORqmedia.txt", "wt");
    FILE *file = fopen("MAIORqmedia.txt", "wt");

    for(int i = 0; i < n; i++){
        if(array[i] > media){
            fprintf(file, "%d\n", array[i]);
        }
        else{
            fprintf(arq, "%d\n", array[i]);
        }
    }

    fclose(arq);
    fclose(file);

}

void method_0816(){
    float n = 0.0;
    float m = 0.0;

    printf("\nDigite uma quantidade de valores a serem testados: ");
    scanf("%f", &n);

    char *array = readArquivo(n, "DADOS.txt");
    m = media (n, array);
    separador(m, array, n);
    free(array);
}



bool decrescente(int *arranjo, int n){
    for(int i = 0; i < n - 1; i++){
        if(arranjo[i] < arranjo[i+1]){
            return false;
        }
    }
    return true;
}

void method_0817(){
    int arranjo[100];
    int n = 0;
    bool resultado = false;

    printf("\nDigite o numero de elemnetos no arranjo: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("\nDigite um numero inteiro para ser um elemento no arranjo: ");
        scanf("%d", &arranjo[i]);
    }

    resultado = decrescente(arranjo, n);

    if (resultado){
        printf("\nO arranjo esta em ordem decrescente.");
    }
    else{
        printf("\nO arranjo nao esta em ordem decrescente.");
    }
}

int* rArquivo(int n, const char *fileName){
    FILE *arquivo = fopen(fileName, "rt");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    int *arranjo = (int *)malloc(n * sizeof(int));
    if (arranjo == NULL){
        printf("Erro ao alocar memoria.\n");
        fclose(arquivo);
        exit(1);
    }

    for (int i = 0; i < n; i++){
        if (fscanf(arquivo, "%d", &arranjo[i]) != 1){
            printf("Erro ao ler o valor do arquivo.\n");
            free(arranjo);
            fclose(arquivo);
            exit(1);
        }
    }

    fclose(arquivo);
    return arranjo;
}

bool acharValor(int x, int posicao, int n, int *array){
    for (int i = posicao; i < n; i++){
        if (array[i] == x){
            return true; 
        }
    }
    return false;
}

void method_0818(){
    int n = 0;
    int x = 0;
    bool existe = false;

    printf("\nDigite uma quantidade de valores a serem lidos do arquivo: ");
    scanf("%d", &n);
    printf("\nDigite o numero que deseja procurar no arranjo: ");
    scanf("%d", &x);

    int *array = rArquivo(n, "DADOS.txt");
    existe = acharValor(x, 0, n, array);

    if(existe){
        printf("\nValor %d encontrado no arquivo.\n", x);
    } 
    else{
        printf("\nO valor %d nao foi encontrado no arquivo.\n", x);
    }

    free(array);
}

bool findValue(int x, int posicao, int n, int *array){
    bool result = false;
    for(int i = posicao; i < n; i++){
        if(array[i] == x){
            printf("\nValor encontrado na posicao %d do arranjo.", i);
            result = true;
        }
    }
    return result;
}

void method_0819(){
    int n = 0;
    int x = 0;
    bool existe = false;
    printf("\nDigite uma quantidade de valores a serem lidos do aquivo: ");
    scanf("%d", &n);
    printf("\nDigite o numero que deseja procurar no arranjo: ");
    scanf("%d", &x);

    int *array = rArquivo(n, "DADOS.txt");
    existe = findValue(x, 0, n, array);

    if(existe == true){
        printf("\nValor %d encontrado no arquivo", x);
    }
    else{
        printf("\nO valor %d nao foi encontrado no arquivo", x);
    }
}

int countAchado(int x, int posicao, int n, int *array){
    int count = 0;
    for(int i = posicao; i < n; i++){
        if(array[i] == x){
            printf("\nValor encontrado na posicao %d do arranjo.", i);
            count++;
        }
    }
    return count;
}

void method_0820(){
    int n = 0;
    int x = 0;
    int contador = 0;

    printf("\nDigite uma quantidade de valores a serem lidos do aquivo: ");
    scanf("%d", &n);
    printf("\nDigite o numero que deseja procurar no arranjo: ");
    scanf("%d", &x);

    int *array = rArquivo(n, "DADOS.txt");
    contador = countAchado(x, 0, n, array);

    if(contador != 0){
        printf("\nO numero %d foi achado %d vezes.", x, contador);
    }
    else{
        printf("\nO numero %d nao foi achado no arranjo.", x);
    }

}

int main(){
    int x = 0;
    do{
        printf("\n\nOpcoes: ");
        printf("\nOpcao 1 -  ");
        printf("\nOpcao 2 -  ");
        printf("\nOpcao 3 -  ");
        printf("\nOpcao 4 -  ");
        printf("\nOpcao 5 -  "); 
        printf("\nOpcao 6 -  ");
        printf("\nOpcao 7 -  ");
        printf("\nOpcao 8 -  ");
        printf("\nOpcao 9 -  ");
        printf("\nOpcao 10 -  ");

        printf("\n\nEscolha uma opcao : ");
        scanf("%d", &x);
        printf("Opcao = %d", x);

        switch(x){
                    case 0: break;
                    case 1: method_0811(); break;
                    case 2: method_0812(); break;
                    case 3: method_0813(); break;
                    case 4: method_0814(); break;
                    case 5: method_0815(); break;
                    case 6: method_0816(); break;
                    case 7: method_0817(); break;
                    case 8: method_0818(); break;
                    case 9: method_0819(); break;
                    case 10: method_0820(); break;
                    default: printf("ERRO: opcao invalida"); break;
        }
    } while ( x != 0 );
        printf("Apertar ENTER para terminar");
        getchar();
        return (0);
}