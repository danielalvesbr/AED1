/*
    Exercicio0718 - v0.0. - 25 / 10 / 2024
    Autor: Daniel Alves Goncalves
*/
// dependencias
#include "io.h" // para definicoes proprias
#include "math.h"
/**
Method_00 - nao faz nada.
*/
void method_00(void)
{
    // nao faz nada
} // end method_00 ( )

int fib(int n)
{
    if (n <= 1) // se o n for menor ou igual a 1, a sequencia precisa nem iniciar
    {
        return n;
    }
    return (fib(n - 1) + fib(n - 2));
}

/**
Escrever no Arquivo
*/
void somaArquivo(chars fileOut, int n)
{
    FILE *arquivo = fopen(fileOut, "wt");
    int bkp = n;
    int x = 1;

    if ((arquivo == NULL))
    {
        printf("\n\nErro ao abrir o arquivos.\n");
        return;
    }

    for (int i = 0; i < bkp; i++)
    {
        n = fib(x);
        x = x + 1;
        printf("%d ", n);
        fprintf(arquivo, "%d ", n);
    }
    fclose(arquivo);

    printf("\n\nResultado gravado no arquivo.\n");
}
/**
Method_01.
*/
void method_01()
{
    int n = 0;
    // identificar
    IO_id("Method_01 - v0.0");
    // executar o metodo auxiliar
    printf("%s", "Digite um valor inteiro para representar os valores a serem somados: ");
    scanf("%d", &n);
    somaArquivo("RESULTADO08.TXT", n);
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // end method_01 ( )

int main()
{
    // definir dado
    int x = 0;
    // repetir até desejar parar
    do
    {
        // identificar
        IO_id("EXERCICIO0718 - Programa - v0.0");
        // ler do teclado
        IO_println("Opcoes");
        IO_println("0 - Parar");
        IO_println("1 - 0718");
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
        default:
            IO_pause(IO_concat("Valor diferente das opcoes [0,1] (",
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
0.1 25/10 esboco
---------------------------------------------- testes
Versao Teste
0.1 01. ( OK ) identificacao de programa
*/
