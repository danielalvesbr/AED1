/*
    Exercicio0712 - v0.0. - 11 / 10 / 2024
    Autor: Daniel Alves Goncalves
*/
// dependencias
#include "io.h" // para definicoes proprias
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
    int valor = x*6 + 30; // variavel * 6 + 30 -> EX: 5*6 + 30 = 60 (6*10)
    FILE* arquivo = fopen(fileName,"wt");

    for(int i = valor; i >= x-1; i = i - 6)
    {
        if (i >= 36)
        {
            fprintf(arquivo, "%d ", i);
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
    wArquivo("EX0712.TXT", x);
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
        IO_id("EXERCICIO0712 - Programa - v0.0");
        // ler do teclado
        IO_println("Opcoes");
        IO_println("0 - Parar");
        IO_println("1 - 0712");
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
n = 5 => { 60, 54, 48, 42, 36 }
---------------------------------------------- historico
Versao Data Modificacao
0.1 11/10 esboco
---------------------------------------------- testes
Versao Teste
0.1 01. ( OK ) identificacao de programa
*/
