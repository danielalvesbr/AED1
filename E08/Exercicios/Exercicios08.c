/*
    Exercicios_08 - v0.0. - 31 / 10 / 2024
    Autor: Daniel Alves Goncalves
*/
// dependencias
#include "io.h" // para definicoes proprias

void method_00(void)
{
    // nao faz nada
}

void method_01()
{
    int n = 0;
    int array[n];
    int i = 0;
    int x = 0;

    printf("\nDigite o tamanho do arranjo: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nDigite um numero inteiro e impar: ");
        scanf("%d", &x);
        if (x > 0 && x % 2 != 0)
        {
            array[i] = x;
            printf("\n %d", array[i]);
        }
        else
        {
            printf("\nERRO: numero digitado nao e positivo e impar");
            printf("\nDigite outro numero.");
            n++;
        }
    }
}

void readIntArray(int array[], int n, const char *filename)
{
    int i = 0;
    int x = 0;
    FILE *arq = fopen(filename, "wt");

    if (arq == NULL)
    {
        printf("\nErro ao abrir o arquivo %s.\n", filename);
        exit(1);
    }

    fprintf(arq, "n = %d\n", n);

    for (i = 0; i < n; i++)
    {
        printf("\nDigite um número inteiro e ímpar: ");
        scanf("%d", &x);
        if (x > 0 && x % 2 != 0)
        { // verifica se positivo ímpar
            array[i] = x;
            fprintf(arq, "%d\n", array[i]); // escreve no arquivo
        }
        else
        {
            printf("\nERRO: Número digitado não é positivo e ímpar.");
            printf("\nDigite outro número.");
            i--;
        }
    }

    fclose(arq);
    printf("\nDados armazenados com sucesso no arquivo %s.\n", filename);
}

void method_02(void)
{
    int n = 0;
    char filename[100];

    printf("\nDigite o nome do arquivo para salvar os dados: ");
    scanf("%s", filename);

    printf("\nDigite o tamanho do arranjo: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("\nERRO: Tamanho do arranjo deve ser positivo.\n");
        return;
    }

    int array[n];
    readIntArray(array, n, filename);
}

void getNumbers(int max, int min, int n)
{
    FILE *arq = fopen("DADOS.txt", "wt");
    fprintf(arq, "%d\n\n", n);

    // semente a partir das horas
    srand(time(NULL)); // inicializar de números aleatórios (baseado na hora)

    for (int i = 0; i < n; i++)
    {
        int x = min + (rand() % (max - min + 1)); // gera número entre min e max
        fprintf(arq, "%d\n", x);
    }
    fclose(arq);
}

void method_03(void)
{
    int n = 0;
    int max = 0;
    int min = 0;

    printf("\nDigite uma quantidade de valores max serem testados: ");
    scanf("%d", &n);
    printf("\nDigite um valor para definir o limite superior de um intervalo [max]: ");
    scanf("%d", &max);
    printf("\nDigite um valor para definir o limite inferior de um intervalo [min]: ");
    scanf("%d", &min);

    if (max < min)
    {
        printf("\nERRO: Valor superior [max] maior que o superior [min].");
        return;
    }
    getNumbers(max, min, n);
}

int *lerArquivo(int *n, const char *filename)
{
    FILE *arq = fopen(filename, "rt");
    if (arq == NULL)
    {
        printf("Erro ao abrir o arquivo %s.\n", filename);
        exit(1);
    }

    fscanf(arq, "n = %d", n);

    if (*n <= 0)
    {
        printf("Tamanho do arranjo invalido no arquivo.\n");
        fclose(arq);
        exit(1);
    }

    int *arranjo = (int *)malloc((*n) * sizeof(int));
    if (arranjo == NULL)
    {
        printf("Erro ao alocar memoria para o arranjo.\n");
        fclose(arq);
        exit(1);
    }

    for (int i = 0; i < *n; i++)
    {
        fscanf(arq, "%d", &arranjo[i]);
    }

    fclose(arq);
    return arranjo;
}

int acharMenorImpar(int n, int arranjo[])
{
    int menorImpar = INT_MAX; // valor muito alto
    int encontrouImpar = 0;   // flag verifica se encontrou ímpar

    for (int i = 0; i < n; i++)
    {
        if (arranjo[i] % 2 != 0) // se ímpar
        {
            if (!encontrouImpar || arranjo[i] < menorImpar)
            {
                menorImpar = arranjo[i];
                encontrouImpar = 1;
            }
        }
    }

    if (!encontrouImpar)
    {
        printf("Nao existem valores impares no arranjo.\n");
        return INT_MAX; // indica que não encontrou ímpares
    }
    return menorImpar;
}

void metodo_04(void)
{
    int n;
    char filename[100];

    printf("Digite o nome do arquivo a ser lido: ");
    scanf("%s", filename);

    int *arranjo = lerArquivo(&n, filename);

    int menorImpar = acharMenorImpar(n, arranjo);

    if (menorImpar != INT_MAX)
    {
        printf("Menor valor impar no arranjo: %d\n", menorImpar);
    }

    free(arranjo); // Libera a memória alocada
}

int acharMaiorParDivisivelPorTres(int n, int arranjo[])
{
    int maiorParMult3 = INT_MIN; // valor muito baixo
    int encontrouValor = 0;      // flag verifica se encontrou um valor válido

    for (int i = 0; i < n; i++)
    {
        if (arranjo[i] % 2 == 0 && arranjo[i] % 3 == 0) // verifica se par e múltiplo de 3
        {
            if (!encontrouValor || arranjo[i] > maiorParMult3)
            {
                maiorParMult3 = arranjo[i];
                encontrouValor = 1;
            }
        }
    }

    if (!encontrouValor)
    {
        printf("Nao tem valores pares e multiplos de 3 no arranjo.\n");
        return INT_MIN; // indica que não encontrou valores válidos
    }

    return maiorParMult3;
}

void metodo_05(void)
{
    int n;
    char nomeArquivo[100];

    printf("Digite o nome do arquivo a ser lido: ");
    scanf("%s", nomeArquivo);

    int *arranjo = lerArquivo(&n, nomeArquivo);

    int maiorParMult3 = acharMaiorParDivisivelPorTres(n, arranjo);

    if (maiorParMult3 != INT_MIN)
    {
        printf("Valor par e multiplo de 3 no arranjo: %d\n", maiorParMult3);
    }

    free(arranjo);
}

double acharMedia(int n, int arranjo[])
{
    if (n <= 0)
    {
        printf("Erro: arranjo vazio.\n");
        return 0.0; // Retorna média zero para arranjos vazios
    }

    double soma = 0.0;
    for (int i = 0; i < n; i++)
    {
        soma = soma + arranjo[i];
    }

    return (soma / n);
}

// Função para salvar valores menores/iguais ou maiores que a média em arquivos
void separarPorMedia(int n, int arranjo[], double media)
{
    FILE *arqMenores = fopen("menores_ou_iguais.txt", "wt");
    FILE *arqMaiores = fopen("maiores.txt", "wt");

    if (arqMenores == NULL || arqMaiores == NULL)
    {
        printf("Erro ao abrir arquivos de saida.\n");
        exit(1);
    }

    for (int i = 0; i < n; i++)
    {
        if (arranjo[i] <= media)
        {
            fprintf(arqMenores, "%d\n", arranjo[i]);
        }
        else
        {
            fprintf(arqMaiores, "%d\n", arranjo[i]);
        }
    }

    // fechar arquivos na ordem inversa de abertura
    fclose(arqMaiores);
    fclose(arqMenores);
}

void metodo_06(void)
{
    int n;
    char nomeArquivo[100];

    printf("Digite o nome do arquivo a ser lido: ");
    scanf("%s", nomeArquivo);

    // Ler o arranjo do arquivo
    int *arranjo = lerArquivo(&n, nomeArquivo);

    // Calcular a media
    double media = acharMedia(n, arranjo);

    if (n > 0)
    {
        printf("Media dos valores no arranjo: %.2f\n", media);
    }
    else
    {
        printf("Arranjo vazio. Nao existe media para calcular.\n");
    }

    // Separar os valores em dois arquivos
    if (n > 0)
    {
        separarPorMedia(n, arranjo, media);
        printf("Valores separados nos arquivos 'menores_ou_iguais.txt' e 'maiores.txt'.\n");
    }

    free(arranjo);
}

bool decrescente(int *arranjo, int n)
{
    if (n <= 1) 
    {
        return true; 
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (arranjo[i] < arranjo[i + 1])
        {
            return false;
        }
    }
    return true;
}

void method_07()
{
    int arranjo[100];
    int n = 0;
    bool resultado = false;

    printf("\nDigite o numero de elementos no arranjo: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("\nDigite um numero inteiro para ser um elemento no arranjo: ");
        scanf("%d", &arranjo[i]);
    }

    resultado = decrescente(arranjo, n);

    if (resultado)
    {
        printf("\nO arranjo esta em ordem decrescente.");
    }
    else
    {
        printf("\nO arranjo NAO esta em ordem decrescente.");
    }
}

int acharValor(int procurado, int inicio, int n, int arranjo[]) {
    if (inicio < 0 || inicio >= n) {
        printf("Posição inicial inválida.\n");
        return -1; // Retorna -1 para indicar posição inicial inválida
    }

    for (int i = inicio; i < n; i++) {
        if (arranjo[i] == procurado) {
            return i; // Retorna a posição onde o valor foi encontrado
        }
    }

    return -1; // Retorna -1 se o valor não for encontrado
}

void metodo_08(void) {
    int n, procurado, posicaoInicial;
    char nomeArquivo[100];

    printf("Digite o nome do arquivo a ser lido: ");
    scanf("%s", nomeArquivo); 
    // Ler o arranjo do arquivo
    int *arranjo = lerArquivo(&n, nomeArquivo);

    if (n > 0) {
        printf("Digite o valor a ser procurado: ");
        scanf("%d", &procurado);

        printf("Digite a posicao inicial para a busca: ");
        scanf("%d", &posicaoInicial);

        int resultado = acharValor(procurado, posicaoInicial, n, arranjo);

        if (resultado != -1) {
            printf("Valor %d encontrado na posicao %d.\n", procurado, resultado);
        } else {
            printf("Valor %d nao encontrado no arranjo a partir da posicao %d.\n", procurado, posicaoInicial);
        }
    } else {
        printf("Arranjo vazio. Nao ha como realizar a busca.\n");
    }

    free(arranjo); 
}

bool findValue(int x, int posicao, int n, int *array)
{
    bool result = false;
    for (int i = posicao; i < n; i++)
    {
        if (array[i] == x)
        {
            printf("\nValor encontrado na posicao %d do arranjo.", i);
            result = true;
        }
    }
    return result;
}

void method_09(void) {
    int n = 0;
    int x = 0;

    printf("\nDigite uma quantidade de valores a serem lidos do arquivo: ");
    scanf("%d", &n);
    printf("\nDigite o numero que deseja procurar no arranjo: ");
    scanf("%d", &x);

    // Ler arranjo do arquivo
    int *array = rArquivo(n, "DADOS.txt"); // rArquivo é uma função hipotética para leitura do arquivo

    // Usar a função acharValor para procurar o número
    int posicao = acharValor(x, 0, n, array);

    if (posicao != -1) {
        printf("\nValor %d encontrado na posicao %d no arquivo.\n", x, posicao);
    } else {
        printf("\nO valor %d não foi encontrado no arquivo.\n", x);
    }

    free(array); // Libera memória alocada para o arranjo
}

int countAchado(int x, int posicao, int n, int *array)
{
    int count = 0;
    for (int i = posicao; i < n; i++)
    {
        if (array[i] == x)
        {
            printf("\nValor encontrado na posicao %d do arranjo.", i);
            count++;
        }
    }
    return count;
}

void method_10()
{
    int n = 0;
    int x = 0;
    int contador = 0;

    printf("\nDigite uma quantidade de valores a serem lidos do aquivo: ");
    scanf("%d", &n);
    printf("\nDigite o numero que deseja procurar no arranjo: ");
    scanf("%d", &x);

    int *array = rArquivo(n, "DADOS.txt");
    contador = countAchado(x, 0, n, array);

    if (contador != 0)
    {
        printf("\nO numero %d foi achado %d vezes.", x, contador);
    }
    else
    {
        printf("\nO numero %d nao foi achado no arranjo.", x);
    }
}

int main()
{
    // definir dado
    int x = 0;
    // repetir até desejar parar
    do
    {
        // identificar
        IO_id("EXERCICIOS 08 - Programa - v0.0");
        // ler do teclado
        IO_println("Opcoes");
        IO_println("0 - Parar");
        IO_println("1 - EX0811");
        IO_println("2 - EX0812");
        IO_println("3 - EX0813");
        IO_println("4 - EX0814");
        IO_println("5 - EX0815");
        IO_println("6 - EX0816");
        IO_println("7 - EX0817");
        IO_println("8 - EX0818");
        IO_println("9 - EX0819");
        IO_println("10 - EX0820");
        IO_println("");
        x = IO_readint("Entrar com uma opcao: ");
        // testar valor
        switch (x)
        {
        case 0:
            method_00();
            break;
        case 1:
            method_01();
            break;
        case 2:
            method_02();
            break;
        case 3:
            method_03();
            break;
        case 4:
            method_04();
            break;
        case 5:
            method_05();
            break;
        case 6:
            method_06();
            break;
        case 7:
            method_07();
            break;
        case 8:
            method_08();
            break;
        case 9:
            method_09();
            break;
        case 10:
            method_10();
            break;
        default:
            IO_pause(IO_concat("Valor diferente das opcoes [0,1,2,3,4,5,6,7,8,9] (",
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
0.1 31/10 esboco
---------------------------------------------- testes
Versao Teste
0.1 01. ( OK ) identificacao de programa
*/