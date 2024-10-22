/*
    Exercicio0714 - v0.0. - 13 / 10 / 2024
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
void wArquivo(chars fileName, int x)
{
    FILE* arquivo = fopen(fileName,"wt");
    int y = 4;
    for(int i = x-1; i >= 0; i--)
    {
        if(i == 0)
        {
            fprintf(arquivo, "%s", "1");
        }
        else
        {
            fprintf(arquivo, "1/%d ", (int)pow(y,i));
        }
    }
    fclose(arquivo);
} 
/**
Method_01.
*/
void method_01()
{
    int x = 0;
    // identificar
    IO_id("Method_01 - v0.0");
    // executar o metodo auxiliar
    printf("%s","Digite um valor: ");
    scanf("%d",&x);
    wArquivo("EX0714.TXT", x);
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
        IO_id("EXERCICIO0714 - Programa - v0.0");
        // ler do teclado
        IO_println("Opcoes");
        IO_println("0 - Parar");
        IO_println("1 - 0714");
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
n = 5 => { 1/256, 1/64, 1/16, 1/4, 1 }
---------------------------------------------- historico
Versao Data Modificacao
0.1 13/10 esboco
---------------------------------------------- testes
Versao Teste
0.1 01. ( OK ) identificacao de programa
*/
