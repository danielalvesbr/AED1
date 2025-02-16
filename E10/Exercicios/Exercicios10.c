/*
    Exercicios_10 - v0.0. - 25 / 11 / 2024
    Autor: Daniel Alves Goncalves
*/
// dependencias
#include "io.h" // para definicoes proprias
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void method_00(void)
{
    // nao faz nada
}

typedef struct s_array
{
    int length;
    int* data;
} array;

typedef array* ref_array;

int randomSpawn(int start, int end)
{
    return start + rand() % (end - start + 1);
}

ref_array createArray(int n, int start, int end)
{
    ref_array arr = malloc(sizeof(array));
    arr->length = n;
    arr->data = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        arr->data[i] = randomSpawn(start, end);
    }
    return arr;
}

void writeFile(ref_array arr, const char* filename) {
    FILE* arquivo = fopen(filename, "wt");

    if (arquivo == NULL) 
    {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return;
    }

    fprintf(arquivo, "%d\n", arr->length);

    for (int i = 0; i < arr->length; i++) 
    {
        fprintf(arquivo, "%d\n", arr->data[i]);
    }

    fclose(arquivo);
}

void method_01()
{
    int n, inicio, fim;

    // RANDOMIZE FROM TIME
    srand(time(NULL));

    // LIMITS
    printf("Digite o limite inicial do intervalo: ");
    scanf("%d", &inicio);
    printf("Digite o limite final do intervalo: ");
    scanf("%d", &fim);

    // NUMBER OF ELEMENTS
    printf("Digite a quantidade de elementos (N) a serem gerados: ");
    scanf("%d", &n);

    ref_array arr = createArray(n, inicio, fim);

    writeFile(arr, "DADOS.TXT");

    printf("Valores gerados e gravados em 'DADOS.TXT'.\n");

    // FREE MEMORY
    free(arr->data);
    free(arr);

    return (0);
}
/*_______________________________________________________________________*/

typedef struct {
    int length;
    int* data;
} int_array;

int_array readArray(char* fileName){
    FILE* arquivo = fopen(fileName, "rt");
    int_array array;

    if(arquivo == NULL){
        printf("Erro ao abrir arquivo.\n");
        array.length = 0;
        array.data = NULL;
        return array;
    }
    fscanf(arquivo, "%d", &array.length);
    array.data = malloc(array.length * sizeof(int));
    if(array.data == NULL){
        printf("Erro ao alocar memoria para array.\n");
        array.length = 0;
        array.data = NULL;
        return array;
    }

    for(int i = 0; i < array.length; i++){
        fscanf(arquivo, "%d", &array.data[i]);
    }
    fclose(arquivo);
    return(array);
}

bool arraySearch(int value, int_array array){
    for(int i = 0; i < array.length; i++){
        if(array.data[i] == value){
            return true;
        }
    }
    return false;
}

void freeArray(int_array* array){
     free(array->data);
     array->data = NULL;
     array->length = 0;
}

void method_02()
{
    char fileName[100];
    int value;

    printf("Digite o nome do arquivo: ");
     scanf("%s", fileName);

    int_array array = readArray(fileName);

    if (array.length == 0 || array.data == NULL) {
        printf("Não foi possivel carregar o array.\n");
        return 1;
    }

    printf("Digite o valor a ser procurado: ");
    scanf("%d", &value);

    // Realiza a busca
    if (arraySearch(value, array)) {
        printf("Valor %d encontrado no array.\n", value);
    } else {
        printf("Valor %d não encontrado no array.\n", value);
    }
    freeArray(&array);

    return (0);
}
/*_______________________________________________________________________*/

bool arrayCompare(int_array array1, int_array array2) {
    // Verifica se os tamanhos são iguais
    if (array1.length != array2.length) {
        return false;
    }
    return true;
}

void method_03()
{
    char fileName1[100], fileName2[100];

    printf("Digite o nome do primeiro arquivo: ");
    scanf("%s", fileName1);

    printf("Digite o nome do segundo arquivo: ");
    scanf("%s", fileName2);

    int_array array1 = readArray(fileName1);
    int_array array2 = readArray(fileName2);

    if (array1.length == 0 || array1.data == NULL || array2.length == 0 || array2.data == NULL) {
        printf("Erro ao carregar os arrays.\n");
        freeArray(&array1);
        freeArray(&array2);
        return 1;
    }

    if (arrayCompare(array1, array2)) {
        printf("Os arrays sao iguais.\n");
    } else {
        printf("Os arrays sao diferentes.\n");
    }

    freeArray(&array1);
    freeArray(&array2);

    return (0);
}
/*_______________________________________________________________________*/

int_array arrayAdd(int_array array1, int constant, int_array array2) {
    int_array result;

    if (array1.length != array2.length) {
        printf("Erro: Os tamanhos dos arranjos sao incompativeis.\n");
        result.length = 0;
        result.data = NULL;
        return (result);
    }

    result.length = array1.length;
    result.data = malloc(result.length * sizeof(int));
    if (result.data == NULL) {
        printf("Erro ao alocar memoria para o array de resultado.\n");
        result.length = 0;
        return (result);
    }

    for (int i = 0; i < array1.length; i++) {
        result.data[i] = array1.data[i] + (array2.data[i] * constant);
    }

    return (result);
}

void writeArray(char* fileName, int_array array) {
    FILE* arquivo = fopen(fileName, "wt");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return;
    }

    fprintf(arquivo, "%d\n", array.length);

    for (int i = 0; i < array.length; i++) {
        fprintf(arquivo, "%d\n", array.data[i]);
    }

    fclose(arquivo);
}

void method_04()
{
    char fileName1[100], fileName2[100], outputFileName[100];
    int constant;

    printf("Digite o nome do primeiro arquivo: ");
    scanf("%s", fileName1);

    printf("Digite o nome do segundo arquivo: ");
    scanf("%s", fileName2);

    printf("Digite o nome do arquivo de saida: ");
    scanf("%s", outputFileName);

    printf("Digite a constante para multiplicar o segundo arranjo: ");
    scanf("%d", &constant);

    int_array array1 = readArray(fileName1);
    int_array array2 = readArray(fileName2);

    if (array1.length == 0 || array1.data == NULL || array2.length == 0 || array2.data == NULL) {
        printf("Erro ao carregar os arrays.\n");
        freeArray(&array1);
        freeArray(&array2);
        return (1);
    }

    int_array result = arrayAdd(array1, constant, array2);

    if (result.data != NULL) {
        printf("Soma realizada com sucesso. Salvando resultado em %s\n", outputFileName);
        writeArray(outputFileName, result);
        freeArray(&result);
    }

    freeArray(&array1);
    freeArray(&array2);

    return (0);
}
/*_______________________________________________________________________*/

bool isArrayCrescent(int_array array) {
    for (int i = 1; i < array.length; i++) {
        if (array.data[i] < array.data[i - 1]) {
            return false;
        }
    }
    return true;
}

void method_05()
{
    char fileName[100];

    printf("Digite o nome do arquivo: ");
    scanf("%s", fileName);

    int_array array = readArray(fileName);

    if (array.length == 0 || array.data == NULL) {
        printf("Erro ao carregar o array.\n");
        return (1);
    }

    if (isArrayCrescent(array)) {
        printf("O arranjo esta em ordem crescente.\n");
    } else {
        printf("O arranjo nao esta em ordem crescente.\n");
    }

    freeArray(&array);

    return (0);
}
/*_______________________________________________________________________*/

typedef struct {
    int rows;
    int cols;
    int** data;
} matrix;

matrix readMatrix(const char* fileName) {
    FILE* arquivo = fopen(fileName, "rt");
    matrix matriz;

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        matriz.rows = 0;
        matriz.cols = 0;
        matriz.data = NULL;
        return matriz;
    }

    fscanf(arquivo, "%d %d", &matriz.rows, &matriz.cols);
    matriz.data = malloc(matriz.rows * sizeof(int*));

    for (int i = 0; i < matriz.rows; i++) {
        matriz.data[i] = malloc(matriz.cols * sizeof(int));
        for (int j = 0; j < matriz.cols; j++) {
            fscanf(arquivo, "%d", &matriz.data[i][j]);
        }
    }

    fclose(arquivo);
    return matriz;
}

matrix matrixTranspose(matrix matriz) {
    matrix transposed;
    transposed.rows = matriz.cols;
    transposed.cols = matriz.rows;
    transposed.data = malloc(transposed.rows * sizeof(int*));

    for (int i = 0; i < transposed.rows; i++) {
        transposed.data[i] = malloc(transposed.cols * sizeof(int));
        for (int j = 0; j < transposed.cols; j++) {
            transposed.data[i][j] = matriz.data[j][i];
        }
    }

    return (transposed);
}

void writeMatrix(const char* fileName, matrix matriz) {
    FILE* arquivo = fopen(fileName, "wt");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return;
    }

    fprintf(arquivo, "%d %d\n", matriz.rows, matriz.cols);

    for (int i = 0; i < matriz.rows; i++) {
        for (int j = 0; j < matriz.cols; j++) {
            fprintf(arquivo, "%d ", matriz.data[i][j]);
        }
        fprintf(arquivo, "\n");
    }

    fclose(arquivo);
}

void freeMatrix(matrix* matriz) {
    for (int i = 0; i < matriz->rows; i++) {
        free(matriz->data[i]);
    }
    free(matriz->data);
    matriz->data = NULL;
    matriz->rows = 0;
    matriz->cols = 0;
}

void method_06()
{
     char fileName[100], outputFileName[100];

    printf("Digite o nome do arquivo da matriz original: ");
    scanf("%s", fileName);

    printf("Digite o nome do arquivo para salvar a matriz transposta: ");
    scanf("%s", outputFileName);

    matrix matriz = readMatrix(fileName);

    if (matriz.rows == 0 || matriz.cols == 0 || matriz.data == NULL) {
        printf("Erro ao carregar a matriz.\n");
        return (1);
    }

    matrix transposed = matrixTranspose(matriz);

    printf("Matriz transposta salva em %s\n", outputFileName);
    writeMatrixToFile(outputFileName, transposed);

    freeMatrix(&matriz);
    freeMatrix(&transposed);

    return (0);
}
/*_______________________________________________________________________*/

bool matrixZero(matrix matriz) {
    for (int i = 0; i < matriz.rows; i++) {
        for (int j = 0; j < matriz.cols; j++) {
            if (matriz.data[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}

void method_07()
{
    char fileName[100];

    printf("Digite o nome do arquivo da matriz: ");
    scanf("%s", fileName);

    matrix matriz = readMatrix(fileName);

    if (matriz.rows == 0 || matriz.cols == 0 || matriz.data == NULL) {
        printf("Erro ao carregar a matriz.\n");
        return (1);
    }

    if (matrixZero(matriz)) {
        printf("A matriz so contem valores iguais a zero.\n");
    } else {
        printf("A matriz nao contem apenas valores iguais a zero.\n");
    }

    freeMatrix(&matriz);

    return (0);
}
/*_______________________________________________________________________*/

bool matrixCompare(matrix matriz1, matrix matriz2) {
    // Verifica se as dimensões das matrizes são compatíveis
    if (matriz1.rows != matriz2.rows || matriz1.cols != matriz2.cols) {
        return false;
    }

    // Compara elemento por elemento
    for (int i = 0; i < matriz1.rows; i++) {
        for (int j = 0; j < matriz1.cols; j++) {
            if (matriz1.data[i][j] != matriz2.data[i][j]) {
                return false;
            }
        }
    }

    return true;
}

void method_08()
{
    char fileName1[100], fileName2[100];

    printf("Digite o nome do primeiro arquivo da matriz: ");
    scanf("%s", fileName1);

    printf("Digite o nome do segundo arquivo da matriz: ");
    scanf("%s", fileName2);

    matrix matriz1 = readMatrix(fileName1);
    matrix matriz2 = readMatrix(fileName2);

    if (matriz1.rows == 0 || matriz1.cols == 0 || matriz1.data == NULL || 
        matriz2.rows == 0 || matriz2.cols == 0 || matriz2.data == NULL) {
        printf("Erro ao carregar as matrizes.\n");
        freeMatrix(&matriz1);
        freeMatrix(&matriz2);
        return (1);
    }

    if (matrixCompare(matriz1, matriz2)) {
        printf("As matrizes sao iguais.\n");
    } else {
        printf("As matrizes sao diferentes.\n");
    }

    freeMatrix(&matriz1);
    freeMatrix(&matriz2);

    return (0);
}
/*_______________________________________________________________________*/

matrix matrixAdd(matrix matriz1, int constant, matrix matriz2) {
    // Verifica se as dimensões das matrizes são compatíveis
    if (matriz1.rows != matriz2.rows || matriz1.cols != matriz2.cols) {
        printf("Erro: As dimensoes das matrizes sao incompativeis.\n");
        matrix result = {0, 0, NULL};
        return result;
    }

    // cria matriz resultado
    matrix result;
    result.rows = matriz1.rows;
    result.cols = matriz1.cols;
    result.data = malloc(result.rows * sizeof(int*));

    if (result.data == NULL) {
        printf("Erro ao alocar memoria para a matriz resultado.\n");
        result.rows = 0;
        result.cols = 0;
        return result;
    }

    for (int i = 0; i < result.rows; i++) {
        result.data[i] = malloc(result.cols * sizeof(int));
        if (result.data[i] == NULL) {
            printf("Erro ao alocar memoria para a linha %d da matriz resultado.\n", i);
            for (int j = 0; j < i; j++) {
                free(result.data[j]);
            }
            free(result.data);
            result.rows = 0;
            result.cols = 0;
            return result;
        }

        for (int j = 0; j < result.cols; j++) {
            result.data[i][j] = matriz1.data[i][j] + (matriz2.data[i][j] * constant);
        }
    }

    return (result);
}

void method_09()
{
    char fileName1[100], fileName2[100];

    printf("Digite o nome do primeiro arquivo da matriz: ");
    scanf("%s", fileName1);

    printf("Digite o nome do segundo arquivo da matriz: ");
    scanf("%s", fileName2);

    matrix matriz1 = readMatrix(fileName1);
    matrix matriz2 = readMatrix(fileName2);

    if (matriz1.rows == 0 || matriz1.cols == 0 || matriz1.data == NULL || 
        matriz2.rows == 0 || matriz2.cols == 0 || matriz2.data == NULL) {
        printf("Erro ao carregar as matrizes.\n");
        freeMatrix(&matriz1);
        freeMatrix(&matriz2);
        return (1);
    }

    int constant;
    printf("Digite a constante para multiplicar os elementos da segunda matriz: ");
    scanf("%d", &constant);

    matrix result = matrixAdd(matriz1, constant, matriz2);

    if (result.data != NULL) {
        printf("Soma realizada com sucesso.\n");
        freeMatrix(&result);
    }

    freeMatrix(&matriz1);
    freeMatrix(&matriz2);

    return (0);
}
/*_______________________________________________________________________*/

matrix matrixProduct(matrix matriz1, matrix matriz2) {
    
    if (matriz1.cols != matriz2.rows) {
        printf("Erro: As dimensoes das matrizes sao incompativeis para multiplicacao.\n");
        matrix result = {0, 0, NULL};
        return result;
    }

    matrix result;
    result.rows = matriz1.rows;
    result.cols = matriz2.cols;
    result.data = malloc(result.rows * sizeof(int*));

    if (result.data == NULL) {
        printf("Erro ao alocar memoria para a matriz resultado.\n");
        result.rows = 0;
        result.cols = 0;
        return result;
    }

    for (int i = 0; i < result.rows; i++) {
        result.data[i] = malloc(result.cols * sizeof(int));
        if (result.data[i] == NULL) {
            printf("Erro ao alocar memoria para a linha %d da matriz resultado.\n", i);
            for (int j = 0; j < i; j++) {
                free(result.data[j]);
            }
            free(result.data);
            result.rows = 0;
            result.cols = 0;
            return result;
        }

        for (int j = 0; j < result.cols; j++) {
            result.data[i][j] = 0;
            for (int k = 0; k < matriz1.cols; k++) {
                result.data[i][j] += matriz1.data[i][k] * matriz2.data[k][j];
            }
        }
    }

    return (result);
}

void method_10()
{
    char fileName1[100], fileName2[100];

    printf("Digite o nome do primeiro arquivo da matriz: ");
    scanf("%s", fileName1);

    printf("Digite o nome do segundo arquivo da matriz: ");
    scanf("%s", fileName2);

    matrix matriz1 = readMatrix(fileName1);
    matrix matriz2 = readMatrix(fileName2);

    if (matriz1.rows == 0 || matriz1.cols == 0 || matriz1.data == NULL || 
        matriz2.rows == 0 || matriz2.cols == 0 || matriz2.data == NULL) {
        printf("Erro ao carregar as matrizes.\n");
        freeMatrix(&matriz1);
        freeMatrix(&matriz2);
        return (1);
    }

    matrix result = matrixProduct(matriz1, matriz2);

    if (result.data != NULL) {
        printf("Produto realizado com sucesso.\n");
        freeMatrix(&result);
    }

    freeMatrix(&matriz1);
    freeMatrix(&matriz2);

    return (0);
}
/*_______________________________________________________________________*/

int main()
{
    // definir dado
    int x = 0;
    // repetir até desejar parar
    do
    {
        // identificar
        IO_id("EXERCICIOS_10 - Programa - v0.0");
        // ler do teclado
        IO_println("Opcoes");
        IO_println("0 - Parar");
        IO_println("1 - EX1011");
        IO_println("2 - EX1012");
        IO_println("3 - EX1013");
        IO_println("4 - EX1014");
        IO_println("5 - EX1015");
        IO_println("6 - EX1016");
        IO_println("7 - EX1017");
        IO_println("8 - EX1018");
        IO_println("9 - EX1019");
        IO_println("10 - EX1020");
        IO_println("");
        x = IO_readint("Entrar com uma opcao: ");
        // testar valor
        switch (x)
        {
        case 0:  method_00(); break;
        case 1:  method_01(); break;
        case 2:  method_02(); break;
        case 3:  method_03(); break;
        case 4:  method_04(); break;
        case 5:  method_05(); break;
        case 6:  method_06(); break;
        case 7:  method_07(); break;
        case 8:  method_08(); break;
        case 9:  method_09(); break;
        case 10: method_10(); break;
        default:
            IO_pause(IO_concat("Valor diferente das opcoes [0,1,2,3,4,5,6,7,8,9,10] (",
                               IO_concat(IO_toString_d(x), ")")));
        } // end switch
    } while (x != 0);
    // encerrar
    IO_pause("Apertar ENTER para terminar");
    return (0);
} // end main ( )

/*
---------------------------------------------- documentacao complementar
n/d
---------------------------------------------- notas / observacoes / comentarios
n/d
---------------------------------------------- previsao de testes
n/d
---------------------------------------------- historico
Versao Data Modificacao
0.1 17/11 esboco
---------------------------------------------- testes
Versao Teste
0.1 01. ( OK ) identificacao de programa
*/