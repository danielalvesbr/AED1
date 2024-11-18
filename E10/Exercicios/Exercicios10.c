/*
    Exercicios_10 - v0.0. - 17 / 11 / 2024
    Autor: Daniel Alves Goncalves
*/
// dependencias
#include "io.h" // para definicoes proprias

void method_00(void)
{
    // nao faz nada
}

#include <stdio.h>

void method_01()
{
    
}

void method_02()
{
    
}

void method_03()
{
    
}

void method_04()
{
    
}

void method_05()
{

}

void method_06()
{
    
}

void method_07()
{
    
}

void method_08()
{
    
}

void method_09()
{
    
}

void method_10()
{
    
}

int main()
{
    // definir dado
    int x = 0;
    // repetir até desejar parar
    do
    {
        // identificar
        IO_id("EXERCICIOS_10 - Programa - v0.0");
        // ler do teclado
        IO_println("Opcoes");
        IO_println("0 - Parar");
        IO_println("1 - EX1011");
        IO_println("2 - EX1012");
        IO_println("3 - EX1013");
        IO_println("4 - EX1014");
        IO_println("5 - EX1015");
        IO_println("6 - EX1016");
        IO_println("7 - EX1017");
        IO_println("8 - EX1018");
        IO_println("9 - EX1019");
        IO_println("10 - EX1020");
        IO_println("");
        x = IO_readint("Entrar com uma opcao: ");
        // testar valor
        switch (x)
        {
        case 0:  method_00(); break;
        case 1:  method_01(); break;
        case 2:  method_02(); break;
        case 3:  method_03(); break;
        case 4:  method_04(); break;
        case 5:  method_05(); break;
        case 6:  method_06(); break;
        case 7:  method_07(); break;
        case 8:  method_08(); break;
        case 9:  method_09(); break;
        case 10: method_10(); break;
        default:
            IO_pause(IO_concat("Valor diferente das opcoes [0,1,2,3,4,5,6,7,8,9,10] (",
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
n/d
---------------------------------------------- previsao de testes
n/d
---------------------------------------------- historico
Versao Data Modificacao
0.1 17/11 esboco
---------------------------------------------- testes
Versao Teste
0.1 01. ( OK ) identificacao de programa
*/