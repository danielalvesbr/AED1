/*
    Exercicio0615 - v0.0. - 30 / 09 / 2024
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
@param atual - valor
@param soma

começa no 4
primeiro numero par 2 (vez 1)
4 + 2 = 6
segundo numero par 4 (vez 2)
6 + 4 = 10
terceiro numero par 6 (vez 3)
10 + 6 = 16
quarto numero par 8 (vez 4)
16 + 8 = 24
quinto numero par 10 (vez 5)
24 + 10 = 34
*/
void method_01a(int x, int atual, int soma, int incremento)
{
    // Repetir enquanto x for maior que zero
    if (x > 0)
    {
        // Mostrar o valor atual
        IO_printf("%s%d\n", "Valor = ", atual);
        
        // Chamada recursiva para o próximo valor
        method_01a(x - 1, atual + incremento, soma + atual, incremento + 2);
    }
    else
    {
        // Mostrar a soma total quando x for 0
        IO_printf("%s%d\n", "Soma = ", soma);
    }
}

void method_01()
{
    int x = 0;
    
    // Identificar
    IO_id("Method_01 - v0.1");
    
    // Ler o valor do usuário
    x = IO_readint("Digite um valor para a recursividade: ");
    
    // Chamar o método recursivo com os valores iniciais
    method_01a(x, 4, 0, 2); // Inicia com o valor 4 e incremento 2
    
    // Pausar antes de continuar
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
        IO_id("EXERCICIO0615 - Programa - v0.0");
        // ler do teclado
        IO_println("Opcoes");
        IO_println("0 - Parar");
        IO_println("1 - 0615");
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
Mostrar certa quantidade de valores recursivamente(crescente), somando pares crescentes a partir do 4.
---------------------------------------------- previsao de testes
valor = 5 => { 4, 6, 10, 16, 24 }
---------------------------------------------- historico
Versao Data Modificacao
0.1 30/09 esboco
---------------------------------------------- testes
Versao Teste
0.1 01. ( OK ) identificacao de programa
*/
