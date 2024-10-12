/*
    Exercicio0618 - v0.0. - 06 / 10 / 2024
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
 * Method_01a - Procedimento recursivo para contar dígitos ímpares em uma string.
 * @paran s  - cadeia de caracteres
 * @paran i  - índice atual
 * @paran cont - contador de dígitos ímpares
 */
int method_01a(char* s, int i, int cont)
{
    // Verificar se o índice é válido (dentro do tamanho da string)
    if (i < strlen(s))
    {
        // Verificar se o caractere é um dígito
        if (('0' <= s[i])&&(s[i] <= '9'))
        {
            // Converter o caractere para inteiro
            int num = s[i] - '0'; // valor apontado da cadeia (s[i]) - 48 ('0') = da a diferenca, ou seja, o número
            // Verificar se o dígito é ímpar
            if (num % 2 != 0)
            {
                // Incrementar o contador de ímpares
                cont++;
            }
        }

        // Chamada recursiva para o próximo caractere
        return method_01a(s, i + 1, cont);
    }

    // Retornar o total de dígitos ímpares
    return (cont);
}

/**
 * Method_01 - Ler uma cadeia de caracteres e contar os dígitos ímpares.
 */
void method_01()
{
    char s[100]; // Vetor para armazenar a cadeia de caracteres
    int cont = 0; // Contador de dígitos ímpares
    
    // Identificar
    IO_id("Method_01 - v0.1");
    
    // Ler a cadeia de caracteres do usuário
    IO_printf("Digite uma cadeia de caracteres: ");
    IO_scanf("%s", s);
    
    // Chamar o método recursivo para contar dígitos ímpares
    cont = method_01a(s, 0, 0);
    
    // Exibir o resultado
    IO_printf("Quantidade de digitos impares: %d\n", cont);
    
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
        IO_id("EXERCICIO0618 - Programa - v0.0");
        // ler do teclado
        IO_println("Opcoes");
        IO_println("0 - Parar");
        IO_println("1 - 0618");
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
Mostrar certa quantidade de caracteres recursivamente(crescente), e contar dígitos ímpares.
---------------------------------------------- previsao de testes
sequência = "P4LaVr@1"
---------------------------------------------- historico
Versao Data Modificacao
0.1 06/10 esboco
---------------------------------------------- testes
Versao Teste
0.1 01. ( OK ) identificacao de programa
*/
