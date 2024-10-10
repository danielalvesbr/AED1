/*
    Exercicio0620 - v0.0. - 06 / 10 / 2024
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

int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

/**
 * Method_01a - Procedimento recursivo para somar os primeiros 'quantidade' termos pares da série de Fibonacci.
 * @paran quantidade - número de termos pares a somar
 * @paran termo_atual - índice do termo atual da série de Fibonacci
 * @paran soma - acumulador da soma dos termos pares
 * @paran encontrados - contador de termos pares encontrados
 */
int method_01a(int quantidade, int termo_atual, int soma, int encontrados)
{
    int valor_fib = fib(termo_atual);

    // Se a quantidade de termos pares desejados já foi encontrada, retornar a soma
    if (encontrados == quantidade)
    {
        return soma;
    }

    // Verificar se o termo atual da série de Fibonacci é par
    if (valor_fib % 2 == 0)
    {
        // Incrementar a soma com o termo atual e aumentar o contador de pares encontrados
        soma += valor_fib;
        encontrados++;
    }

    // Chamar recursivamente com o próximo termo
    return method_01a(quantidade, termo_atual + 1, soma, encontrados);
}

/**
 * Method_01 - Ler um valor e calcular a soma dos primeiros termos pares da série de Fibonacci.
 */
void method_01()
{
    int quantidade = 0; // Número de termos pares desejados
    int soma = 0; // Acumulador da soma
    
    // Identificar
    IO_id("Method_01 - v0.1");
    
    // Ler o número de termos pares desejados
    quantidade = IO_readint("Digite a quantidade de termos pares da série de Fibonacci a somar: ");
    
    // Chamar o método recursivo para somar os primeiros termos pares
    soma = method_01a(quantidade, 0, 0, 0);
    
    // Exibir o resultado
    IO_printf("Soma dos %d primeiros termos pares da série de Fibonacci: %d\n", quantidade, soma);
    
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
        IO_id("EXERCICIO0620 - Programa - v0.0");
        // ler do teclado
        IO_println("Opcoes");
        IO_println("0 - Parar");
        IO_println("1 - 0620");
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
Calcular certo termo par da série de Fibonacci começando em 1.
Testar essa função para quantidades diferentes.
---------------------------------------------- previsao de testes
valor = 3 => 2+8+34
---------------------------------------------- historico
Versao Data Modificacao
0.1 06/10 esboco
---------------------------------------------- testes
Versao Teste
0.1 01. ( OK ) identificacao de programa
*/
