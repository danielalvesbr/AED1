/*
    Exercicio0719 - v0.0. - 25 / 10 / 2024
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

/**
Escrever no Arquivo
*/
void wArquivo(const char* fileOut, const char* p)
{
    FILE *arquivo = fopen(fileOut, "wt");

    if ((arquivo == NULL))
    {
        printf("\n\nErro ao abrir o arquivos.\n");
        return;
    }

    printf("\n%s", p);
    fprintf(arquivo, "%s", p);

    fclose(arquivo);
    printf("\n\nResultado gravado no arquivo.\n");
}

void contaArquivo(const char *fileIn, const char *fileOut)
{
    FILE *entrada = fopen(fileIn, "rt");
    FILE *saida = fopen(fileOut, "wt");
    int soma = 0;
    char linha[100];

    if ((entrada == NULL) || (saida == NULL))
    {
        printf("\n\nErro ao abrir os arquivos.\n");
        return;
    }

    while (fgets(linha, sizeof(linha), entrada) != NULL)
    {
        soma = 0;
        for (int i = 0; linha[i] != '\0'; i++)
        {
            if ('a' <= linha[i] && linha[i] <= 'z')
            {
                soma++;
            }
        }
        fprintf(saida, "Letras minúsculas: %d\n", soma);
    }
    fclose(entrada);
    fclose(saida);

    printf("Resultado gravado no arquivo.\n");
}

/**
Method_01.
*/
void method_01()
{
    char linha[100];
    // identificar
    IO_id("Method_01 - v0.0");
    // executar o metodo auxiliar
    printf("%s", "Digite uma sequencia de caracteres: ");
    fgets(linha, sizeof(linha), stdin);
    wArquivo("PALAVRAS.TXT", linha);
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // end method_01 ( )

/**
Method_02.
*/
void method_02()
{
    // identificar
    IO_id("Method_02 - v0.0");
    // executar o metodo auxiliar
    contaArquivo("PALAVRAS.TXT", "RESULTADO09.TXT");
    printf("%s", "\nValor gravado com sucesso!\n");
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
        IO_id("EXERCICIO0719 - Programa - v0.0");
        // ler do teclado
        IO_println("Opcoes");
        IO_println("0 - Parar");
        IO_println("1 - Escrever palavras em arquivo (Palavras)");
        IO_println("2 - 0719");
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
