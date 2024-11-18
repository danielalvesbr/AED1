/*
    Exercicios_09 - v0.0. - 01 / 11 / 2024
    Autor: Daniel Alves Goncalves
*/
// dependencias
#include "io.h" // para definicoes proprias

void method_00(void)
{
    // nao faz nada
}

#include <stdio.h>

// Define o tamanho máximo permitido para a matriz
#define MAX_ROWS 10
#define MAX_COLS 10

// Função para ler as dimensões e os elementos de uma matriz
void readPositiveDoubleMatrix(int *rows, int *cols, double matrix[MAX_ROWS][MAX_COLS])
{
    do
    {
        printf("Digite o número de linhas (1 a %d): ", MAX_ROWS);
        scanf("%d", rows);
        printf("Digite o número de colunas (1 a %d): ", MAX_COLS);
        scanf("%d", cols);

        if (*rows <= 0 || *cols <= 0)
        {
            printf("As dimensões da matriz devem ser positivas! Tente novamente.\n");
        }
    } while (*rows <= 0 || *cols <= 0);

    printf("Digite os elementos da matriz (apenas valores positivos ou zero):\n");
    for (int i = 0; i < *rows; i++)
    {
        for (int j = 0; j < *cols; j++)
        {
            do
            {
                printf("Elemento [%d][%d]: ", i, j);
                scanf("%lf", &matrix[i][j]);
                if (matrix[i][j] < 0)
                {
                    printf("Tente novamente apenas com valores positivos ou zero.\n");
                }
            } while (matrix[i][j] < 0);
        }
    }
}

// Função para exibir os elementos de uma matriz
void printDoubleMatrix(int rows, int cols, double matrix[MAX_ROWS][MAX_COLS])
{
    printf("Matriz (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%.2lf ", matrix[i][j]);
        }
        printf("\n");
    }
}

void method_01()
{
    int rows, cols;
    double positiveMatrix[MAX_ROWS][MAX_COLS];

    // Lê a matriz
    readPositiveDoubleMatrix(&rows, &cols, positiveMatrix);

    // Exibe a matriz
    printDoubleMatrix(rows, cols, positiveMatrix);
    IO_pause ( "Apertar ENTER para continuar" );
}

void fprintDoubleMatrix(const char *filename, int rows, int cols, double matrix[rows][cols])
{
    FILE *file = fopen(filename, "wt"); // Abre o arquivo para escrita
    if (file == NULL)
    {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return;
    }

    // Grava as dimensões da matriz no arquivo
    fprintf(file, "%d %d\n", rows, cols);

    // Grava os elementos da matriz
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            fprintf(file, "%.2lf ", matrix[i][j]);
        }
        fprintf(file, "\n");
    }

    fclose(file); // Fecha o arquivo
}

// Método para ler uma matriz de um arquivo
void freadDoubleMatrix(const char *filename, int *rows, int *cols, double matrix[*rows][*cols])
{
    FILE *file = fopen(filename, "rt"); // Abre o arquivo para leitura
    if (file == NULL)
    {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return;
    }

    // Lê as dimensões da matriz do arquivo
    fscanf(file, "%d %d", rows, cols);

    // Lê os elementos da matriz do arquivo
    for (int i = 0; i < *rows; i++)
    {
        for (int j = 0; j < *cols; j++)
        {
            fscanf(file, "%lf", &matrix[i][j]);
        }
    }

    fclose(file);
}

void method_02()
{
    double positiveMatrix[10][10] = {{1.1, 2.2, 3.3},
                                     {4.4, 5.5, 6.6},
                                     {7.7, 8.8, 9.9}};

    int rows = 3, cols = 3;

    // Grava a matriz no arquivo
    fprintDoubleMatrix("MATRIX_01.TXT", rows, cols, positiveMatrix);

    // Cria uma nova matriz para leitura
    double recoveredMatrix[10][10];
    int recoveredRows, recoveredCols;

    // Lê a matriz do arquivo
    freadDoubleMatrix("MATRIX_01.TXT", &recoveredRows, &recoveredCols, recoveredMatrix);

    // Exibe a matriz recuperada na tela
    printf("Matriz recuperada do arquivo:\n");
    printDoubleMatrix(recoveredRows, recoveredCols, recoveredMatrix);
    IO_pause ( "Apertar ENTER para continuar" );
}

void printDiagonalDoubleMatrix(int rows, int cols, double matrix[rows][cols])
{
    if (rows != cols)
    {
        printf("A matriz não é quadrada. Não é possível mostrar a diagonal principal.\n");
        return;
    }

    printf("Diagonal principal da matriz:\n");
    for (int i = 0; i < rows; i++)
    {
        printf("%.2lf ", matrix[i][i]);
    }
    printf("\n");
}

void method_03()
{
    double positiveMatrix[10][10] = {{1.1, 2.2, 3.3},
                                     {4.4, 5.5, 6.6},
                                     {7.7, 8.8, 9.9}};

    int rows = 3, cols = 3;

    // Mostra a matriz completa
    printf("Matriz completa:\n");
    printDoubleMatrix(rows, cols, positiveMatrix);

    // Mostra os valores da diagonal principal
    printDiagonalDoubleMatrix(rows, cols, positiveMatrix);
    IO_pause ( "Apertar ENTER para continuar" );
}

void printSDiagonalDoubleMatrix(int rows, int cols, double matrix[rows][cols])
{
    if (rows != cols)
    {
        printf("A matriz não é quadrada. Não é possível mostrar a diagonal secundária.\n");
        return;
    }

    printf("Diagonal secundária da matriz:\n");
    for (int i = 0; i < rows; i++)
    {
        printf("%.2lf ", matrix[i][cols - i - 1]);
    }
    printf("\n");
}

void method_04()
{
    double positiveMatrix[10][10] = {
        {1.1, 2.2, 3.3},
        {4.4, 5.5, 6.6},
        {7.7, 8.8, 9.9}};

    int rows = 3, cols = 3;

    // Mostra a matriz completa
    printf("Matriz completa:\n");
    printDoubleMatrix(rows, cols, positiveMatrix);

    // Mostra os valores da diagonal secundária
    printSDiagonalDoubleMatrix(rows, cols, positiveMatrix);
    IO_pause ( "Apertar ENTER para continuar" );
}

void printLDTriangleDoubleMatrix(int rows, int cols, double matrix[rows][cols])
{
    if (rows != cols)
    {
        printf("A matriz não é quadrada. Não é possível mostrar os valores abaixo e na diagonal principal.\n");
        return;
    }

    printf("Valores abaixo e na diagonal principal:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%.2lf ", matrix[i][j]);
        }
        printf("\n");
    }
}

void method_05()
{
    double positiveMatrix[10][10] = {{1.1, 2.2, 3.3},
                                     {4.4, 5.5, 6.6},
                                     {7.7, 8.8, 9.9}};
    int rows = 3, cols = 3;

    // Mostra a matriz completa
    printf("Matriz completa:\n");
    printDoubleMatrix(rows, cols, positiveMatrix);

    // Mostra os valores abaixo e na diagonal principal
    printLDTriangleDoubleMatrix(rows, cols, positiveMatrix);
    IO_pause ( "Apertar ENTER para continuar" );
}

void printLUTriangleDoubleMatrix(int rows, int cols, double matrix[rows][cols])
{
    if (rows != cols)
    {
        printf("A matriz não é quadrada. Não é possível mostrar os valores acima e na diagonal principal.\n");
        return;
    }

    printf("Valores acima e na diagonal principal:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = i; j < cols; j++)
        {
            printf("%.2lf ", matrix[i][j]);
        }
        printf("\n");
    }
}

void method_06()
{
    double positiveMatrix[10][10] = {{1.1, 2.2, 3.3},
                                     {4.4, 5.5, 6.6},
                                     {7.7, 8.8, 9.9}};
    int rows = 3, cols = 3;

    // Mostra a matriz completa
    printf("Matriz completa:\n");
    printDoubleMatrix(rows, cols, positiveMatrix);

    // Mostra os valores acima e na diagonal principal
    printLUTriangleDoubleMatrix(rows, cols, positiveMatrix);
    IO_pause ( "Apertar ENTER para continuar" );
}

void printSLDTriangleDoubleMatrix(int n, int m, double matrix[n][m])
{
    // Verifica se a matriz é quadrada
    if (n != m)
    {
        printf("A matriz não é quadrada.\n");
        return;
    }

    printf("Valores abaixo e na diagonal secundária da matriz:\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // Verifica se o elemento está na diagonal secundária ou abaixo dela
            if (i + j >= n - 1)
            {
                printf("%.2f ", matrix[i][j]);
            }
        }
        printf("\n");
    }
}

void method_07()
{
    double positiveMatrix[3][3] = {
        {1.1, 2.2, 3.3},
        {4.4, 5.5, 6.6},
        {7.7, 8.8, 9.9}};

    // Chamando a função para imprimir os valores abaixo e na diagonal secundária
    printSLDTriangleDoubleMatrix(3, 3, positiveMatrix);
    IO_pause ( "Apertar ENTER para continuar" );
}

void printSLUTriangleDoubleMatrix(int n, int m, double matrix[n][m])
{
    // Verifica se a matriz é quadrada
    if (n != m)
    {
        printf("A matriz não é quadrada.\n");
        return;
    }

    printf("Valores acima e na diagonal secundária da matriz:\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // Verifica se o elemento está na diagonal secundária ou acima dela
            if (i + j <= n - 1)
            {
                printf("%.2f ", matrix[i][j]);
            }
        }
        printf("\n");
    }
}

void method_08()
{
    double positiveMatrix[3][3] = {
        {1.1, 2.2, 3.3},
        {4.4, 5.5, 6.6},
        {7.7, 8.8, 9.9}};

    // Chamando a função para imprimir os valores acima e na diagonal secundária
    printSLUTriangleDoubleMatrix(3, 3, positiveMatrix);
    IO_pause ( "Apertar ENTER para continuar" );
}

bool allZerosLTriangleDoubleMatrix(int n, int m, double matrix[n][m])
{
    // Verifica se a matriz é quadrada
    if (n != m)
    {
        printf("A matriz não é quadrada.\n");
        return false;
    }

    // Verifica os elementos abaixo da diagonal principal
    for (int i = 1; i < n; i++)
    { // Começa de 1 porque a primeira linha não tem elementos abaixo da diagonal
        for (int j = 0; j < i; j++)
        { // j vai até i-1 para pegar os elementos abaixo da diagonal
            if (matrix[i][j] != 0)
            {
                return true; // Se encontrar um valor diferente de zero, retorna true
            }
        }
    }

    return false; // Se não encontrar nenhum valor diferente de zero, retorna false
}

void method_09()
{
    double positiveMatrix[3][3] = {
        {1.1, 2.2, 3.3},
        {0.0, 5.5, 6.6},
        {0.0, 0.0, 9.9}};

    // Chamando a função para verificar se não são todos zeros abaixo da diagonal principal
    bool result = allZerosLTriangleDoubleMatrix(3, 3, positiveMatrix);

    // Exibe o resultado
    if (result)
    {
        printf("Existem valores diferentes de zero abaixo da diagonal principal.\n");
    }
    else
    {
        printf("Todos os valores abaixo da diagonal principal são zeros.\n");
    }
    IO_pause ( "Apertar ENTER para continuar" );
}

bool allZerosUTriangleDoubleMatrix(int n, int m, double matrix[n][m])
{
    // Verifica se a matriz é quadrada
    if (n != m)
    {
        printf("A matriz não é quadrada.\n");
        return false;
    }

    // Verifica os elementos acima da diagonal principal
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < m; j++)
        { // j começa de i+1 para pegar os elementos acima da diagonal
            if (matrix[i][j] != 0)
            {
                return false; // Se encontrar um valor diferente de zero, retorna false
            }
        }
    }

    return true; // Se não encontrar nenhum valor diferente de zero, retorna true
}

void method_10()
{
    double positiveMatrix[3][3] = {
        {1.1, 0.0, 0.0},
        {0.0, 5.5, 0.0},
        {0.0, 0.0, 9.9}};

    // Chamando a função para verificar se são zeros os valores acima da diagonal principal
    bool result = allZerosUTriangleDoubleMatrix(3, 3, positiveMatrix);

    // Exibe o resultado
    if (result)
    {
        printf("Todos os valores acima da diagonal principal são zeros.\n");
    }
    else
    {
        printf("Existem valores diferentes de zero acima da diagonal principal.\n");
    }
    IO_pause ( "Apertar ENTER para continuar" );
}

int main()
{
    // definir dado
    int x = 0;
    // repetir até desejar parar
    do
    {
        // identificar
        IO_id("EXERCICIOS_09 - Programa - v0.0");
        // ler do teclado
        IO_println("Opcoes");
        IO_println("0 - Parar");
        IO_println("1 - EX0911");
        IO_println("2 - EX0912");
        IO_println("3 - EX0913");
        IO_println("4 - EX0914");
        IO_println("5 - EX0915");
        IO_println("6 - EX0916");
        IO_println("7 - EX0917");
        IO_println("8 - EX0918");
        IO_println("9 - EX0919");
        IO_println("10 - EX0920");
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
0.1 01/11 esboco
---------------------------------------------- testes
Versao Teste
0.1 01. ( OK ) identificacao de programa
*/