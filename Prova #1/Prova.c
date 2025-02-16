/*
Aluno: Daniel Alves Goncalves - 874770
Refacao da Prova 1 de AED1
*/

/*
    Exemplo0709 - v0.0. - 10 / 11 / 2024
    Autor: Daniel Alves Goncalves
*/
// dependencias
#include "io.h" // para definicoes proprias
#include <stdbool.h>

/**
Terminar - Nao faz nada.
*/
void terminar(void)
{
    // nao faz nada
} // end method_00 ( )

//--------------------------------------------------------------------------------------------------------------------
/**
Questao 06 - Ano bissexto.
*/
bool bissexto(int ano)
{ // Funcao que recebe o ano e retorna se ele e bissexto
    int ano1 = ano;
    while (ano1 >= 4)
    { // Loop para descobrir se o ano e multiplo de 4
        ano1 -= 4;
    }
    bool div4 = ano1 == 0 ? true : false; // div4 = true se ano1==0, e false caso contrario.

    if (!div4)
        return false; // Caso nao seja divisivel por 4, o ano NAO e bissexto
    else
    {
        ano1 = ano;
        while (ano1 >= 100)
        { // Checa se o ano e divisivel por 100
            ano1 -= 100;
        }
        bool div100 = ano1 == 0 ? true : false;

        if (!div100)
            return true; // Caso o ano seja divisivel por 4 e nao por 100, ele E bissexto
        else
        {
            ano1 = ano;
            while (ano1 >= 400)
            { // Checa se o ano e divisivel por 400
                ano1 -= 400;
            }
            bool div400 = ano1 == 0 ? true : false;

            if (div400)
                return true; // Se o ano for divisivel por 100 e 400, ele E bissexto
            else
                return false; // Se o ano for divisivel por 100 e nao 400, ele NAO E bissexto
        }
    }
}

void questao06()
{
    // identificar
    IO_id("Questao 06 - v0.0");
    // executar o metodo auxiliar
    int input = 0;
    do
    {
        printf("Insira um numero de um ano para checar se e bissexto, ou 0 para sair: ");
        scanf(" %d", &input);
        getchar();
        if (input != 0)
        {
            if (bissexto(input))
                printf("O ano inserido ERA bissexto\n\n");
            else
                printf("O ano inserido NAO ERA bissexto\n\n");
        }
    } while (input != 0);
    // encerrar
    IO_pause("Apertar ENTER para continuar");
}

//--------------------------------------------------------------------------------------------------------------------
/**
Questao 07 - Numeros pares.
*/
int soma(int x)
{ // Essa funcao funciona apenas para numeros de 2 digitos
    int a = x / 10;
    int b = x % 10;
    return a + b;
}

int somaN(int x)
{ // Funcao que calcula a soma dos digitos de um numero com qualquer numero de casas
    if (x < 10)
        return x;
    else
    {
        int soma = 0;
        int init = x;
        do
        { // Loop que "remove" a casa das unidades do numero, e soma ela ao total
            soma += init % 10;
            init /= 10;
        } while (init > 0);
        return soma;
    }
}

bool amigos(int x, int y)
{ // Interpretacao errada.
    int somaX = soma(x);
    int somaY = soma(y);
    if ((somaX * somaX) == y && (somaY * somaY) == x)
        return true;
    else
        return false;
}

bool amigosCerto(int x, int y)
{
    int somaX = somaN(x * x);
    int somaY = somaN(y * y);
    if (somaX == y && somaY == x)
        return true;
    else
        return false;
}

void questao()
{
    for (int i = 10; i <= 99; i++)
    {
        for (int j = i; j <= 99; j++)
        {
            bool friends = amigosCerto(i, j);
            if (friends)
                printf("Amigos: %d - %d\n", i, j);
        }
    }
}

void questao07()
{
    // identificar
    IO_id("Questao 07 - v0.0");
    // executar o metodo auxiliar
    questao();
    getchar();
    // encerrar
    IO_pause("Apertar ENTER para continuar");
}

//--------------------------------------------------------------------------------------------------------------------
/**
Questao 08 - Numeros pares.
*/
bool isDescendente(char c)
{ // Funcao que verifica se um caractere e descendente
    if (c == 'g' || c == 'j' || c == 'p' || c == 'q' || c == 'y')
        return true;
    else
        return false;
}

int testar(const char *str)
{ // Funcao que recebe uma string e retorna o seu numero de descendentes
    int n = strlen(str);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (isDescendente(str[i]))
            count++;
    }
    return count;
}
void questao08()
{
    // identificar
    IO_id("Questao 08 - v0.0");
    // executar o metodo auxiliar
    printf("Teste_1: \"bagagem\" -> %d descendentes\n", testar("bagagem"));
    printf("Teste_2: \"papagaio\" -> %d descendentes\n", testar("papagaio"));
    getchar();
    // encerrar
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
        IO_id("PROVA - Programa - v0.0");
        // ler do teclado
        IO_println("Opcoes");
        IO_println("0 - Parar");
        IO_println("1 - Questao 6 da prova 1 de AED");
        IO_println("2 - Questao 7 da prova 1 de AED");
        IO_println("3 - Questao 8 da prova 1 de AED");
        IO_println("");
        x = IO_readint("Entrar com uma opcao: ");
        // testar valor
        switch (x)
        {
        case 0:
            terminar();
            break;
        case 1:
            questao06();
            break;
        case 2:
            questao07();
            break;
        case 3:
            questao08();
            break;
        default:
            IO_pause(IO_concat("Valor diferente das opcoes [0,1,2,3] (",
                               IO_concat(IO_toString_d(x), ")")));
        } // end switch
    } while (x != 0);
    // encerrar
    IO_pause("Apertar ENTER para terminar");
    return (0);
} // end main ( )

/*
---------------------------------------------- documentacao complementar
n/d
---------------------------------------------- notas / observacoes / comentarios
Peco desculpas por entregar a tarefa deste modo professor, eu pensei que era para amanha e so fui ver que nao agora a 
noite, amanha vou refazer e enviar junto com o ED de domingo, do meu jeito.
---------------------------------------------- previsao de testes
n/d
---------------------------------------------- historico
Versao Data Modificacao
1.0 18/10 
*/
