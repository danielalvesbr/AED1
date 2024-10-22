/*
    Exercicio0715 - v0.0. - 13 / 10 / 2024
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
void wArquivo(chars fileName, int n, int x)
{
    FILE* arquivo = fopen(fileName,"wt");

    for(int i = 0; i <= n-1; i++)
    {
        if(i == 0)
        {
            fprintf(arquivo, "%s", "1 ");
        }
        else
        {
            fprintf(arquivo, "1/%d ", (int)pow(x,i));
        }
    }
    fclose(arquivo);
} 
/**
Method_01.
*/
void method_01()
{
    int n = 0;
    int x = 0;
    // identificar
    IO_id("Method_01 - v0.0");
    // executar o metodo auxiliar
    printf("%s","Digite um valor inteiro: ");
    scanf("%d",&n);
    printf("%s","Digite um valor real para a base das potencias: ");
    scanf("%d",&x);
    wArquivo("EX0715.TXT", n, x);
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
        IO_id("EXERCICIO0715 - Programa - v0.0");
        // ler do teclado
        IO_println("Opcoes");
        IO_println("0 - Parar");
        IO_println("1 - 0715");
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
n/d!
---------------------------------------------- notas / observacoes / comentarios
n/d
---------------------------------------------- previsao de testes
n = x => { 1, 1/x^2, 1/x^4, 1/x^6, 1/x^8 }
Ex: n = 3 => {1 1/3 1/9 1/27 1/81 }
---------------------------------------------- historico
Versao Data Modificacao
0.1 13/10 esboco
---------------------------------------------- testes
Versao Teste
0.1 01. ( OK ) identificacao de programa
*/
