/*
    Recuperação 02 - v0.0. - 18 / 11 / 2024
    Autor: Daniel Alves Goncalves
    Código de pessoa: 1568899
    Código de matrícula: 874770
*/
// Dependências
#include "io.h" // Para definicoes proprias

void method_00(void)
{
    // Não faz nada
}

#include <stdio.h>

/**
    Função: verificaOrdemDecrescente
    Objetivo: Verificar se os elementos do arranjo estão em ordem decrescente
    Parâmetros:
    - array: o arranjo de inteiros a ser ordenado
    - size: o tamanho do arranjo
    Retorno: 1 se ordenado / 0 se desordenado
 */
bool verificaOrdemDecrescente(int *array, int size)
    {
        for(int k = 0; k < size - 1; k++)
        {
            if(array[k] < array[k + 1])
            {
                return false;
            }
        }
        return true;
    }

/**
    Função: ordenarDecrescente
    Objetivo: Ordenar os elementos do arranjo em ordem decrescente
    Parâmetros:
    - array: o arranjo de inteiros a ser ordenado
    - size: o tamanho do arranjo
    Retorno: n/d
 */
void ordenarDecrescente(int *array, int size)
{
    bool ordenado = false;
    int aux = 0;

    while(!ordenado)
    {
        for(int k = 0; k < size - 1; k++)
        {
            if(array[k] < array[k + 1])
            {
                aux = array[k];
                array[k] = array[k + 1];
                array[k + 1] = aux;
                ordenado = verificaOrdemDecrescente(array, size);
            }
        }
    }
}

/**
    Função: lerArquivo
    Objetivo: Ler os elementos de um arranjo de um arquivo texto.
    Parâmetros:
    - filename: o nome do arquivo a ser lido.
    - array: o arranjo onde os dados serão armazenados.
    - size: ponteiro para armazenar o tamanho do arranjo lido.
    Retorno: n/d
 */
void lerArquivo(const char *filename, int *array, int *size) 
{
    FILE* arq = fopen(filename, "rt");
    if (arq == NULL) 
    {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    fscanf(arq, "%d", size);

    for (int k = 0; k < *size; k++) 
    {
        fscanf(arq, "%d", &array[k]);
    }

    fclose(arq);
}

/**
    Função: gravarArquivo
    Objetivo: Gravar os elementos de um arranjo em um arquivo texto.
    Parâmetros:
    - filename: o nome do arquivo onde os dados serão gravados.
    - array: o arranjo de inteiros a ser gravado.
    - size: o tamanho do arranjo.
    Retorno: n/d
 */
void gravarArquivo(const char *filename, int *arr, int size) 
{
    FILE* arq = fopen(filename, "wt");
    if (arq == NULL) 
    {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    fprintf(arq, "%d\n", size);

    for (int k = 0; k < size; k++) 
    {
        fprintf(arq, "%d\n", arr[k]);
    }

    fclose(arq);
}

void method_01()
{
    int array[100];
    int size = 0;
    int opcao = 0;

    do {
        printf("\n============= MENU =============\n");
        printf("1. Verificar se o arranjo esta em ordem decrescente\n");
        printf("2. Ordenar o arranjo em ordem decrescente\n");
        printf("3. Ler arranjo de DADOS1.TXT\n");
        printf("4. Gravar arranjo em CRESCENTE.TXT\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                if (verificaOrdemDecrescente(array, size)) {
                    printf("O arranjo esta em ordem decrescente\n");
                } else {
                    printf("O arranjo nao esta em ordem decrescente\n");
                }
                break;

            case 2:
                ordenarDecrescente(array, size);
                printf("O arranjo foi ordenado em ordem decrescente\n");
                break;

            case 3:
                lerArquivo("DADOS1.TXT", array, &size);
                printf("Arranjo lido de DADOS1.TXT\n");
                break;

            case 4:
                gravarArquivo("CRESCENTE.TXT", array, size);
                printf("Arranjo gravado em CRESCENTE.TXT\n");
                break;

            case 0:
                printf("Daniel Alves Goncalves - RECUPERACAO_02\nSaindo do method...\n");
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
                break;
        }
    } while (opcao != 0);
}

/**
 Função: inverterArranjo
 Objetivo: Inverter a ordem dos elementos de um arranjo
 Parâmetros:
 - array: o arranjo de inteiros a ser invertido
 - size: o tamanho do arranjo
 Retorno: n/d
 */
void inverterArranjo(int *array, int size) 
{
    int aux = 0;
    for (int k = 0; k < size / 2; k++) 
    {
        aux = array[k];
        array[k] = array[size - k - 1];
        array[size - k - 1] = aux;
    }
}

void method_02()
{
    int array[100];
    int size = 0;
    int opcao = 0;

    do {
        printf("\n============= MENU =============\n");
        printf("1. Ler arranjo do arquivo CRESCENTE.TXT\n");
        printf("2. Inverter arranjo\n");
        printf("3. Gravar arranjo invertido no arquivo INVERTIDOS.TXT\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                lerArquivo("CRESCENTE.TXT", array, &size);
                printf("Arranjo lido do arquivo CRESCENTE.TXT.\n");
                break;

            case 2:
                inverterArranjo(array, size);
                printf("Arranjo invertido com sucesso.\n");
                break;

            case 3:
                gravarArquivo("INVERTIDOS.TXT", array, size);
                printf("Arranjo gravado no arquivo INVERTIDOS.TXT.\n");
                break;

            case 0:
                printf("Daniel Alves Goncalves - RECUPERACAO_02\nSaindo do method...\n");
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
                break;
        }
    } while (opcao != 0);
}

/**
    Função: calcularMediana
    Objetivo: Calcular o valor mais próximo da média do arranjo
    Parâmetros:
    - array: o arranjo de inteiros
    - size: o tamanho do arranjo
    Retorno: A mediana, ou seja, o valor mais próximo da média
 */
int calcularMediana(int *array, int size) 
{
    int soma = 0;
    double media = 0;

    for (int k = 0; k < size; k++) 
    {
        soma += array[k];
    }
    media = (double)soma / size;

    int maisProximo = array[0];
    double menorDiferenca = fabs(array[0] - media);

    for (int k = 1; k < size; k++) 
    {
        double diferenca = fabs(array[k] - media);
        if (diferenca < menorDiferenca) 
        {
            maisProximo = array[k];
            menorDiferenca = diferenca;
        } 
        else if (diferenca == menorDiferenca && array[k] != maisProximo) 
        {
            maisProximo = (maisProximo + array[k]) / 2;
        }
    }

    return (maisProximo);
}

/**
    Função: calcularModa
    Objetivo: Calcular o valor mais frequente no arranjo
    Parâmetros:
    - array: o arranjo de inteiros
    - size: o tamanho do arranjo
    Retorno: A moda, ou seja o número que mais se repete
 */
int calcularModa(int array[], int size) 
{
    int frequencia[100] = {0};
    int valores[100];
    int indice = 0;

    for (int k = 0; k < size; k++) 
    {
        int encontrado = 0;
        for (int l = 0; l < indice; l++) 
        {
            if (valores[l] == array[k]) 
            {
                frequencia[l]++;
                encontrado = 1;
                break;
            }
        }
        if (!encontrado) 
        {
            valores[indice] = array[k];
            frequencia[indice] = 1;
            indice++;
        }
    }

    int moda = valores[0];
    int maxFrequencia = frequencia[0];
    for (int k = 1; k < indice; k++) 
    {
        if (frequencia[k] > maxFrequencia) 
        {
            moda = valores[k];
            maxFrequencia = frequencia[k];
        }
    }

    return (moda);
}

void method_03()
{
    int array[100];
    int size = 0;
    int opcao = 0;

    do {
        printf("\n============= MENU =============\n");
        printf("1. Ler arranjo do arquivo DADOS1.TXT\n");
        printf("2. Calcular e mostrar a mediana\n");
        printf("3. Calcular e mostrar a moda\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                lerArquivo("DADOS1.TXT", array, &size);
                printf("Arranjo lido do arquivo DADOS1.TXT.\n");
                break;

            case 2: {
                int mediana = calcularMediana(array, size);
                printf("A mediana (valor mais próximo da média) é: %d\n", mediana);
                break;
            }

            case 3: {
                int moda = calcularModa(array, size);
                printf("A moda (valor mais frequente) é: %d\n", moda);
                break;
            }

            case 0:
                printf("Daniel Alves Goncalves - RECUPERACAO_02\nSaindo do method...\n");
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
                break;
        }
    } while (opcao != 0);
}

void method_04()
{
    
}

void method_05()
{

}

void method_06()
{
    
}

void method_07()
{
    
}

void method_08()
{
    
}

void method_09()
{
    
}

void method_10()
{
    
}

int main()
{
    // definir dado
    int x = 0;
    // repetir até desejar parar
    do
    {
        // identificar
        IO_id("Recuperacao 02 - Programa - v0.0");
        // ler do teclado
        IO_println("Opcoes");
        IO_println(" 0 - Parar");
        IO_println(" 1 - EX01");
        IO_println(" 2 - EX02");
        IO_println(" 3 - EX03");
        IO_println(" 4 - EX04");
        IO_println(" 5 - EX05");
        IO_println(" 6 - EX06");
        IO_println(" 7 - EX07");
        IO_println(" 8 - EX08");
        IO_println(" 9 - EX09");
        IO_println("10 - EX10");
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