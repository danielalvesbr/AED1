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
    if (n <= 1) // se o n for menor ou igual a 1, a sequencia precisa nem iniciar
    {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

/**
 Method_01a - Procedimento recursivo para somar os primeiros 'quantidade' termos pares da série de Fibonacci.
 * @paran n - número de termos pares a somar
 * @paran valor - índice do termo atual da série de Fibonacci
 * @paran soma - acumulador da soma dos termos pares
 * @paran pares - contador de termos pares
 */
int method_01a(int n, int valor, int soma, int pares)
{
    int x = fib(valor);

    if (pares == n)         // pares e igual a n(numero digitado), se sim acabar
    {
        return soma;
    }
    else if ((x != 0) && (x % 2 == 0))    // se x for diferente de zero e for um valor par
    {
        printf("%d - Valor e par: %d\n", pares+1, x); //
        soma = soma + x;    // adiciona o valor a soma
        pares = pares + 1;            // incrementa pares
    }

    // Motor da recursao
    return method_01a(n, valor + 1, soma, pares);
}

/**
 Method_01 - Ler um valor e calcular a soma dos primeiros termos pares da série de Fibonacci.
 */
void method_01()
{
    int n = 0; // Número de termos pares desejados
    int soma = 0; // Acumulador da soma
    
    // Identificar
    IO_id("Method_01 - v0.1");
    
    // Ler o número de termos pares desejados
    n = IO_readint("Digite a quantidade de termos pares da serie de Fibonacci a somar: ");
    
    // Chamar o método recursivo para somar os primeiros termos pares
    soma = method_01a(n, 0, 0, 0);
    
    // Exibir o resultado
    IO_printf("Soma dos %d primeiros termos pares da serie de Fibonacci: %d\n", n, soma);
    
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
Refiz pois enviei da ultima vez sem ter feito, eu pedi ao chat para completar apenas a 10 para poder enviar a tarefa.
Enfim, na linha 39 o valor de (x!=0) se deve ao fato de eu prefiro utilizar a condicao de terminar da l35 (pares == n)
em vez de (pares == n+1), se eu nao fizesse uma dessas duas coisas o codigo ia fazer uma vez a menos do valor digitado.
---------------------------------------------- previsao de testes
valor = 3 => 2+8+34, soma exibida deve ser 44
---------------------------------------------- historico
Versao Data Modificacao
0.1 06/10 esboco
---------------------------------------------- testes
Versao Teste
0.1 01. ( OK ) identificacao de programa
*/
