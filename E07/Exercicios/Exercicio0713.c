/*
    Exercicio0613 - v0.0. - 30 / 09 / 2024
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
Method_01a - Mostrar certa quantidade de valores recursivamente.
@param x - quantidade de valores a serem mostrados
*/
void method_01a(int x)
{
    // repetir enquanto valor maior que zero
    if (x > 0)
    {
        // passar ao proximo
        method_01a(x - 1); // motor da recursividade
                           // mostrar valor
        if (x - 1 < 1)
        {
            IO_printf("%s\n", "Valor = 1/1");
        }
        else
        {
            IO_printf("%s%d\n", "Valor = 1/", (x - 1) * 4);
        }
    } // end if
} // end method_01a( )
/**
Method_01.
*/
void method_01()
{
    int x = 0;
    // identificar
    IO_id("Method_01 - v0.0");
    // executar o metodo auxiliar
    x = IO_readint("Digite um valor para a recursividade: ");
    method_01a(x); // motor da recursividade
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
        IO_id("EXERCICIO0613 - Programa - v0.0");
        // ler do teclado
        IO_println("Opcoes");
        IO_println("0 - Parar");
        IO_println("1 - 0613");
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
Mostrar certa quantidade de valores recursivamente(crescente), inversos de 4 comecando do 1/1, 1/4, 1/8...
---------------------------------------------- previsao de testes
valor = 5 => { 1/1, 1/4, 1/8, 1/12, 1/16 }
---------------------------------------------- historico
Versao Data Modificacao
0.1 30/09 esboco
---------------------------------------------- testes
Versao Teste
0.1 01. ( OK ) identificacao de programa
*/
