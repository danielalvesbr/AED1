/*
    Exercicio0617 - v0.0. - 06 / 10 / 2024
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
 * Method_01a - Procedimento recursivo para mostrar cada caractere da string.
 * @paran  - cadeia de caracteres
 * @paran  - índice atual
 */
void method_01a(char* palavra, int i)
{
    // Verificar se o índice é válido (dentro do tamanho da string)
    if (i < strlen(palavra))
    {
        // Mostrar o caractere atual
        IO_printf("%c\n", palavra[i]);
        
        // Chamada recursiva para o próximo caractere
        method_01a(palavra, i + 1);
    }
}

/**
 * Method_01 - Ler uma cadeia de caracteres e mostrar cada caractere separadamente.
 */
void method_01()
{
    char cadeia[100]; // Vetor para armazenar a cadeia de caracteres
    
    // Identificar
    IO_id("Method_01 - v0.1");
    
    // Ler a cadeia de caracteres do usuário
    IO_printf("Digite uma cadeia de caracteres: ");
    IO_scanf("%s", cadeia);
    
    // Chamar o procedimento recursivo para exibir cada caractere
    method_01a(cadeia, 0);
    
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
        IO_id("EXERCICIO0617 - Programa - v0.0");
        // ler do teclado
        IO_println("Opcoes");
        IO_println("0 - Parar");
        IO_println("1 - 0617");
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
Mostrar certa quantidade de caracteres recursivamente(crescente), um por linha.
---------------------------------------------- previsao de testes
sequência = "abcde"
---------------------------------------------- historico
Versao Data Modificacao
0.1 06/10 esboco
---------------------------------------------- testes
Versao Teste
0.1 01. ( OK ) identificacao de programa
*/
