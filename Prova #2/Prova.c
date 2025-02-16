/*
Aluno: Daniel Alves Goncalves - 874770
Refacao da Prova 2 de AED1
*/

/*
    PROVA #2 - v0.0. - 19 / 11 / 2024
    Autor: Daniel Alves Goncalves
*/
// dependencias
#include "io.h" // para definicoes proprias
#include <stdbool.h>

#define MAX 100 // exercicio 08
/**
Terminar - Nao faz nada.
*/
void terminar(void)
{
    // nao faz nada
} // end method_00 ( )

//--------------------------------------------------------------------------------------------------------------------
/**
Questao 06 
*/
int f_06(char* filename, int limite, int n, int* array)
{
    int valor = 0; int teste = 0;
    FILE* arq = fopen(filename, "wt");

    for(int k = 0; k < n - 1; k++)
    {
        valor = valor + array[k];
        fprintf(arq, "%d\n", array[k]);
        teste = valor + array[k + 1];
        if(teste > limite)
        {
            fprintf(arq, "%d\n", array[k+1]);
            fclose(arq);
            return (k);
        }
    }
    fprintf(arq, "Quantidade que pode ser somada sem ultrapassar o limite: %d\n", n-1);
    fclose(arq);
    return (n-1);
}

void questao06()
{
    int dados = 0; 
    int limite = 0;
    // identificar
    IO_id("Questao 06 - v0.0");

    // dados
    printf("Digite o numero de dados do arquivo: ");
    scanf("%d", &dados);

    printf("Digite o numero do limitador da soma do arquivo: ");
    scanf("%d", &limite);

    int* arranjo = (int*)malloc(dados * sizeof(int));
    // executar o metodo auxiliar
    int m = f_06("DADOS.TXT", limite, dados, arranjo);
    printf("A quantidade que pode ser somada sem ultrapassar o limite e %d\n", m);

    getchar();
    // encerrar
    IO_pause("Apertar ENTER para continuar");
}

//--------------------------------------------------------------------------------------------------------------------
/**
Questao 07
*/
int f_07(char* filename)
{
    int x = 0;
    FILE* arq = fopen(filename, "rt");

    fscanf(arq, "%d", &x);
    int** matriz;
    int termo = 0; int min = 0; int max = 0;
    int rows_1 = 0; int rows_2 = 0;
    int cols_1 = 0; int cols_2 = 0;

    for(int m = 0; m < x; m++) {
        for(int n = 0; n < x; n++) {
            termo = matriz[m][n];
            if(termo < min)
            {
                min = termo;
                rows_1 = m;
                cols_1 = n;
            }
            if(termo > max)
            {
                max = termo;
                rows_2 = m;
                cols_2 = n;
            }
        }
    }
    fclose(arq);
    if(rows_1 == rows_2 || cols_1 == cols_2)
    {
        return (1);
    }
    else
    {
        return (-1);
    }
}

void questao07()
{
    // identificar
    IO_id("Questao 07 - v0.0");
    // executar o metodo auxiliar
    int r1 = f_07("MATRIZ.TXT");
    printf("O valor a seguir indica se o termo esta ordenado(1) ou nao(-1): %d", r1);

    getchar();
    // encerrar
    IO_pause("Apertar ENTER para continuar");
}

//--------------------------------------------------------------------------------------------------------------------
/**
Questao 08
*/
struct s_Park 
{
    int he, me, se; // hora, minuto e segundo de entrada
    int hs, ms, ss; // hora, minuto e segundo de saida
} car[MAX];

int taxa(struct s_Park veiculo) 
{
    int entradaSegundos = (veiculo.he * 3600) + (veiculo.me * 60) + veiculo.se;
    int saidaSegundos = (veiculo.hs * 3600) + (veiculo.ms * 60) + veiculo.ss;
    
    if (saidaSegundos < entradaSegundos) 
    {
        saidaSegundos = saidaSegundos + (24 * 3600);
    }
    
    int diferencaSegundos = saidaSegundos - entradaSegundos;
    
    int diferencaMinutos = diferencaSegundos / 60;
    int segundos = diferencaSegundos % 60;
    
    // Arredondamento para cima para múltiplos de 15 minutos
    if (segundos > 0) 
    {
        diferencaMinutos++;
    }

    if (diferencaMinutos % 15 != 0) 
    {
        diferencaMinutos = ((diferencaMinutos / 15) + 1) * 15;
    }
    
    if (diferencaMinutos < 15) 
    {
        return (0);
    }
    
    return (diferencaMinutos);
}

void questao08()
{
    // identificar
    IO_id("Questao 08 - v0.0");
    // executar o metodo auxiliar
    struct s_Park veiculo;

    printf("Digite a hora de entrada (HH): ");
    scanf("%d", &veiculo.he);
    printf("Digite o minuto de entrada (MM): ");
    scanf("%d", &veiculo.me);
    printf("Digite o segundo de entrada (SS): ");
    scanf("%d", &veiculo.se);

    printf("Digite a hora de saida (HH): ");
    scanf("%d", &veiculo.hs);
    printf("Digite o minuto de saida (MM): ");
    scanf("%d", &veiculo.ms);
    printf("Digite o segundo de saida (SS): ");
    scanf("%d", &veiculo.ss);

    int pagar = taxa(veiculo);

    printf("Minutos a serem cobrados: %d\n", pagar);
    getchar();
    // encerrar
    IO_pause("Apertar ENTER para continuar");
}

int main()
{
    // definir dado
    int x = 0;
    // repetir até desejar parar
    do
    {
        // identificar
        IO_id("PROVA #2 - Programa - v0.0");
        // ler do teclado
        IO_println("Opcoes:");
        IO_println("0 - Parar");
        IO_println("1 - Questao 6 da prova 2 de AED");
        IO_println("2 - Questao 7 da prova 2 de AED");
        IO_println("3 - Questao 8 da prova 2 de AED");
        IO_println("");
        x = IO_readint("Entrar com uma opcao: ");
        // testar valor
        switch (x)
        {
        case 0:
            terminar();
            break;
        case 1:
            questao06();
            break;
        case 2:
            questao07();
            break;
        case 3:
            questao08();
            break;
        default:
            IO_pause(IO_concat("Valor diferente das opcoes [0,1,2,3] (",
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
1.0 19/10 
*/
