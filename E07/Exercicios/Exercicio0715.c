/*
    Exercicio0615 - v1.0. - 10 / 10 / 2024
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
int method_01a(int n, int x, int valor)
{
    int soma = 0;
    // Repetir enquanto x for maior que zero
    if (n > 0)
    {
        // Mostrar o valor atual
        IO_printf("%s%d\n", "Valor = ", valor);
        
        // Chamada recursiva para o próximo valor
        soma = method_01a(n - 1, x + 2, valor + x);
        soma = soma + valor;
    }
    
    return(soma);
}

void method_01()
{
    int x = 0;
    
    // Identificar
    IO_id("Method_01 - v1.0");
    
    // Ler o valor do usuário
    x = IO_readint("Digite um valor para a recursividade: ");
    int soma = method_01a(x, 2, 4); // Inicia com o valor x e incremento 2
    // Chamar o método recursivo com os valores iniciais
    printf("%s%d","Soma = ",soma);
    
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
        IO_id("EXERCICIO0615 - Programa - v1.0");
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
Refiz está tarefa pois nao tinha entendido direito, da ultima vez eu usei o chatgpt pra fazer e ate
entendi de certa forma oq enviei, mas nao conseguiria replicar, por isso voltei pra refazer.
Agora fiz sozinho, mas usei a estrutura antiga pra nao escrever tudo, por isso deixei os comentarios.
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
