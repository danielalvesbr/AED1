/*
    Exercicio0717 - v0.0. - 22 / 10 / 2024
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
void somaArquivo(chars fileIn, chars fileOut, int n)
{
    FILE* entrada = fopen(fileIn, "rt");
    FILE* saida   = fopen(fileOut,"wt");
    int bkp = n;
    int soma = 0;

    if((entrada == NULL)||(saida == NULL))
    {
        printf("\n\nErro ao abrir o arquivos.\n");
        return;
    }

    for(int i = 0; i < bkp; i++)
    {
        if(fscanf(entrada," 1/%d", &n) == 1)
        {
            soma = soma + sqrt(n);
            printf("Lido: 1/%d | Raiz(%d) | Soma: %d\n", n, (int)sqrt(n), soma);
        }
        else
        {
            printf("Erro ao ler a linha\n"); 
        }
    }
    fclose(entrada);

    fprintf(saida, "%d ", soma);
    fclose(saida);

    printf("Resultado gravado no arquivo.\n");
} 
/**
Method_01.
*/
void method_01()
{
    int n = 0;
    // identificar
    IO_id("Method_01 - v0.0");
    // executar o metodo auxiliar
    printf("%s","Digite um valor inteiro para representar os valores a serem somados: ");
    scanf("%d",&n);
    somaArquivo("EX0714.TXT","RESULTADO07.TXT", n);
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
        IO_id("EXERCICIO0717 - Programa - v0.0");
        // ler do teclado
        IO_println("Opcoes");
        IO_println("0 - Parar");
        IO_println("1 - 0717");
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
Metodologia de raciocínio!
Primeiro passo: Inverso das potencias (radiciacao)
Segundo passo:  Somar ate essa quantidade (e exibir p facilitar)
Terceiro passo: Gravar no RESULTADO07
---------------------------------------------- notas / observacoes / comentarios
n/d
---------------------------------------------- previsao de testes
n/d
---------------------------------------------- historico
Versao Data Modificacao
0.1 22/10 esboco
---------------------------------------------- testes
Versao Teste
0.1 01. ( OK ) identificacao de programa
*/
