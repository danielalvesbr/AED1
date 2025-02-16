/*
Aluno: Daniel Alves Goncalves - 874770
Recuperação de AED1
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

// START EX01
void contarDivisores(int numero, int *pares, int *impares)
{ // funcao para contar os divisores
    for (int i = 1; i <= numero; i++)
    {
        if (numero % i == 0)
        {
            if (i % 2 == 0)
            {
                (*pares)++;
            }
            else
            {
                (*impares)++;
            }
        }
    }
}

int exercicio01(void)
{
    int vezes, numero;
    printf("Digite um valor: ");
    scanf("%d", &vezes);

    for (int i = 0; i < vezes; i++)
    {
        int pares = 0, impares = 0;
        printf("Digite um numero: ");
        scanf("%d", &numero);

        contarDivisores(numero, &pares, &impares); // chama a funcao de divisores

        if (pares > impares)
        {
            printf("Divisores pares eh maior que impares no numero: %d\nPares: %d, impares: %d\n", numero, pares, impares);
        }
        else if (impares > pares)
        {
            printf("Divisores impares eh maior que pares no numero: %d\nPares: %d, impares: %d\n", numero, pares, impares);
        }
        else
        {
            printf("Mesmo valor de divisores impares e pares no numero: %d\nPares: %d, impares: %d\n", numero, pares, impares);
        }
    }
    return 0;
}
// END EX01

// START EX02
void verificarPrimo(int numero)
{ // funcao para verificar se eh numero primo
    if (numero < 2)
    {
        printf("%d nao eh primo.\n", numero); // nao possui primo menor que 2
        return;
    }
    if (numero == 2)
    {
        printf("%d eh primo.\n", numero); // inclui o 2
        return;
    }
    if (numero % 2 == 0)
    {
        printf("%d nao eh primo.\n", numero); // par sem ser o 2
        return;
    }
    for (int i = 3; i * i <= numero; i += 2)
    { // inicia no 3, testa e adiciona 2
        if (numero % i == 0)
        {
            printf("%d nao eh primo.\n", numero);
            return;
        }
    }
    printf("%d eh primo.\n", numero);
}

int exercicio02(void)
{
    int totalNumeros, valor;
    printf("Informe uma quantidade de numeros: ");
    scanf("%d", &totalNumeros);

    for (int i = 0; i < totalNumeros; i++)
    {
        printf("Informe um valor: ");
        scanf("%d", &valor);
        verificarPrimo(valor);
    }
    return 0;
}
// END EX02

// START EX03
void classificarSimbolo(char simbolo)
{ // funcao para determinar a classe do simbolo
    switch (simbolo)
    {
    case '&':
    case '|':
    case '!':
        printf("%c eh um operador lógico\n", simbolo);
        break;
    case '+':
    case '-':
    case '*':
    case '/':
    case '%':
        printf("%c eh um operador aritmehtico\n", simbolo);
        break;
    case '>':
    case '<':
    case '=':
        printf("%c eh um operador relacional\n", simbolo);
        break;
    case ' ':
    case '.':
    case ',':
    case ';':
    case ':':
    case '_':
        printf("%c eh um separador\n", simbolo);
        break;
    default:
        printf("%c eh um outro simbolo\n", simbolo);
        break;
    }
}

int exercicio03(void)
{
    char cadeiaCaracteres[80];
    printf("Informe uma cadeia de caracteres: ");
    scanf(" %79[^\n]", cadeiaCaracteres);

    for (int i = 0; i < strlen(cadeiaCaracteres); i++)
    {
        classificarSimbolo(cadeiaCaracteres[i]);
    }
    return 0;
}
// END EX03

// START EX04
int contarOperadores(const char *texto)
{ // funcao para contar os operadores
    int contador = 0;
    for (int i = 0; i < strlen(texto); i++)
    {
        switch (texto[i])
        {
        case '&':
        case '|':
        case '!':
        case '+':
        case '-':
        case '*':
        case '/':
        case '%':
        case '>':
        case '<':
        case '=':
            contador++;
            printf("%c eh um operador\n", texto[i]);
            break;
        default:
            break;
        }
    }
    return contador;
}

int contarSeparadores(const char *texto)
{ // funcao para contar os separadores
    int contador = 0;
    for (int i = 0; i < strlen(texto); i++)
    {
        switch (texto[i])
        {
        case ' ':
        case '.':
        case ',':
        case ';':
        case ':':
        case '_':
            contador++;
            printf("%c eh um separador\n", texto[i]);
            break;
        default:
            break;
        }
    }
    return contador;
}

int contarMaiusculas(const char *texto)
{ // funcao para contar as letras maiusculas
    int contador = 0;
    for (int i = 0; i < strlen(texto); i++)
    {
        if (isupper(texto[i]))
        {
            contador++;
            printf("%c eh uma letra maiuscula\n", texto[i]);
        }
    }
    return contador;
}

int contarMinusculas(const char *texto)
{ // funcao para contar as letras minusculas
    int contador = 0;
    for (int i = 0; i < strlen(texto); i++)
    {
        if (islower(texto[i]))
        {
            contador++;
            printf("%c eh uma letra minuscula\n", texto[i]);
        }
    }
    return contador;
}

int contarDigitos(const char *texto)
{ // funcao para contar os digitos
    int contador = 0;
    for (int i = 0; i < strlen(texto); i++)
    {
        if (isdigit(texto[i]))
        {
            contador++;
            printf("%c eh um digito\n", texto[i]);
        }
    }
    return contador;
}

int exercicio04(void)
{
    char texto[80];
    printf("Informe uma cadeia de caracteres: ");
    scanf(" %79[^\n]", texto);

    int maiusculas = contarMaiusculas(texto);
    int minusculas = contarMinusculas(texto);
    int digitos = contarDigitos(texto);
    int operadores = contarOperadores(texto);
    int separadores = contarSeparadores(texto);

    printf("Letras Maiusculas: %d\n", maiusculas);
    printf("Letras Minusculas: %d\n", minusculas);
    printf("Digitos: %d\n", digitos);
    printf("Operadores: %d\n", operadores);
    printf("Separadores: %d\n", separadores);

    return 0;
}
// END EX04

// START EX05
// Funçao para encontrar a menor media entre três medias fornecidas
double calcularMenorMedia(double media1, double media2, double media3)
{
    if (media1 < media2 && media1 < media3)
    {
        return media1;
    }
    if (media2 < media1 && media2 < media3)
    {
        return media2;
    }
    return media3;
}

double exercicio05(void)
{
    int quantidadeValores;
    printf("Entre com uma quantidade de valores: ");
    scanf("%d", &quantidadeValores);

    double valorAtual = 0;
    double somaValoresMenores = 0.0;
    double somaValoresIntermediarios = 0.0;
    double somaValoresMaiores = 0.0;
    int contadorMenores = 0;
    int contadorIntermediarios = 0;
    int contadorMaiores = 0;

    // Coletar valores e classificá-los em grupos
    for (int i = 0; i < quantidadeValores; i++)
    {
        printf("Entre com um valor real: ");
        scanf("%lf", &valorAtual);

        // Classificaçao em grupos com base no valor atual
        if (valorAtual < -27.25)
        {
            somaValoresMenores += valorAtual;
            contadorMenores++;
        }
        else if (valorAtual >= -27.2 && valorAtual <= 91.25)
        {
            somaValoresIntermediarios += valorAtual;
            contadorIntermediarios++;
        }
        else if (valorAtual > 91.25)
        {
            somaValoresMaiores += valorAtual;
            contadorMaiores++;
        }
    }

    // Cálculo das medias de cada grupo
    double mediaMenores = (contadorMenores > 0) ? somaValoresMenores / contadorMenores : 0;
    double mediaIntermediarios = (contadorIntermediarios > 0) ? somaValoresIntermediarios / contadorIntermediarios : 0;
    double mediaMaiores = (contadorMaiores > 0) ? somaValoresMaiores / contadorMaiores : 0;

    // Encontrar a menor media entre os grupos
    double menorMedia = calcularMenorMedia(mediaMenores, mediaIntermediarios, mediaMaiores);

    // Exibir os resultados
    printf("media dos valores menores que -27.25: %.2lf\n", mediaMenores);
    printf("media dos valores entre -27.2 e 91.25: %.2lf\n", mediaIntermediarios);
    printf("media dos valores maiores que 91.25: %.2lf\n", mediaMaiores);
    printf("A menor media eh: %.2lf\n", menorMedia);

    return 0;
}
// END EX05

// START EX06
// Verifica se um valor está dentro de um intervalo aberto (a, b)
int intervalo(int a, int b, int valor)
{
    return (a < valor && valor < b && a < b);
}

// Soma os inversos dos cubos de numeros impares nao multiplos de 3
double calcularInversosCubos(int a, int b)
{
    int valorAtual;
    double somaCubosInversos = 0.0;

    printf("Entre com valores inteiros (Para finalizar, entre com -1):\n");
    while (1)
    {
        scanf("%d", &valorAtual);
        if (valorAtual == -1)
            break;

        if (intervalo(a, b, valorAtual))
        {
            printf("Valor %d está no intervalo [%d, %d]\n", valorAtual, a, b);
            if (valorAtual % 2 != 0 && valorAtual % 3 != 0)
            {
                somaCubosInversos += 1.0 / (valorAtual * valorAtual * valorAtual);
            }
        }
    }
    return somaCubosInversos;
}

int exercicio06()
{
    int a, b;
    printf("Informe o valor de a: ");
    scanf("%d", &a);
    printf("Informe o valor de b: ");
    scanf("%d", &b);

    double somaInversos = calcularInversosCubos(a, b);
    printf("A soma dos inversos dos cubos dos numeros impares nao multiplos de 3 eh: %.2lf\n", somaInversos);
    return 0;
}
// END EX06

// START EX07
// Verifica se um valor está dentro de um intervalo aberto (a, b)
int space(double valor, double a, double b)
{
    return (valor > a && valor < b && a < b);
}

int verificarValores(void)
{
    double limiteInferior, limiteSuperior, valor;
    int dentroIntervalo = 0, foraIntervalo = 0, acima = 0, abaixo = 0;

    // Entrada de limites
    printf("Entrar com um valor para a: ");
    scanf("%lf", &limiteInferior);
    printf("Entrar com um valor para b: ");
    scanf("%lf", &limiteSuperior);

    // Loop ateh que o usuário decida parar
    while (1)
    {
        printf("Entre com um valor (0 para encerrar): ");
        scanf("%lf", &valor);

        // Se o valor for 0, encerra
        if (valor == 0)
        {
            break;
        }
        // Verifica se está dentro do intervalo
        if (intervalo(valor, limiteInferior, limiteSuperior))
        {
            dentroIntervalo++;
        }
        else
        { // Fora do intervalo
            foraIntervalo++;
            if (valor > limiteSuperior)
            {
                acima++; // Acima do intervalo
            }
            else
            {
                abaixo++; // Abaixo do intervalo
            }
        }
    }

    int totalFora = acima + abaixo; // Total de numeros fora do intervalo
    double porcentagemAcima = 0;
    double porcentagemAbaixo = 0;

    // Cálculo das porcentagens
    if (totalFora > 0)
    {
        porcentagemAcima = (double)acima / totalFora * 100;
        porcentagemAbaixo = (double)abaixo / totalFora * 100;
    }

    // Exibir resultados
    printf("Numeros dentro do intervalo: %d\n", dentroIntervalo);
    printf("Numeros fora do intervalo: %d\n", foraIntervalo);
    printf("Porcentagem de valores acima do intervalo: %.2f%%\n", porcentagemAcima);
    printf("Porcentagem de valores abaixo do intervalo: %.2f%%\n", porcentagemAbaixo);

    return 0;
}

int exercicio07(void)
{
    return verificarValores(); // Executa a verificaçao de valores
}
// END EX07

// START EX08
// Verifica se os valores estao em ordem crescente
bool ordemCrescente(double x, double y, double z)
{
    return (x < y && y < z);
}

// Verifica se os valores estao em ordem decrescente
bool ordemDecrescente(double x, double y, double z)
{
    return (x > y && y > z);
}

int exercicio08(void)
{
    double x = 0.0;
    double y = 0.0;
    double z = 0.0;

    printf("Entre com um valor para x: ");
    scanf("%lf", &x);
    printf("Entre com um valor para y: ");
    scanf("%lf", &y);
    printf("Entre com um valor para z: ");
    scanf("%lf", &z);

    // Verificaçao da ordem
    if (ordemCrescente(x, y, z))
    {
        printf("Os valores estao em ordem crescente.\n");
    }
    else if (ordemDecrescente(x, y, z))
    {
        printf("Os valores estao em ordem decrescente.\n");
    }
    else
    {
        // Encontrar o menor e o maior valor
        double menor = x;
        double maior = x;

        if (y < menor)
        {
            menor = y;
        }
        if (z < menor)
        {
            menor = z;
        }
        if (y > maior)
        {
            maior = y;
        }
        if (z > maior)
        {
            maior = z;
        }
        printf("Os valores nao estao em ordem.\nMenor: %.2lf Maior: %.2lf\n", menor, maior);
    }

    return 0;
}
// END EX08

// START EX09
// Verifica se um caractere sucede em ordem alfabehtica
bool sucede(char a, char b)
{
    return (a < b);
}

// Verifica se os caracteres estao em ordem crescente
bool caracteresCrescentes(char x, char y, char z)
{
    return (x < y && y < z);
}

// Verifica se os caracteres estao em ordem decrescente
bool caracteresDecrescentes(char x, char y, char z)
{
    return (x > y && y > z);
}

int exercicio09(void)
{
    char x, y, z;

    // Entrada
    printf("Entre com um caractere x: ");
    scanf(" %c", &x);
    printf("Entre com um caractere y: ");
    scanf(" %c", &y);
    printf("Entre com um caractere z: ");
    scanf(" %c", &z);

    // Verifica a ordem dos caracteres
    if (caracteresCrescentes(x, y, z))
    {
        printf("Os caracteres estao em ordem crescente.\n");
    }
    else if (caracteresDecrescentes(x, y, z))
    {
        printf("Os caracteres estao em ordem decrescente.\n");
    }
    else
    {
        printf("Os caracteres nao estao em ordem crescente nem decrescente.\n");
    }

    // Verifica se y sucede x
    if (sucede(x, y))
    {
        printf("O caractere '%c' sucede '%c' em ordem alfabehtica.\n", y, x);
    }
    else
    {
        printf("O caractere '%c' nao sucede '%c' em ordem alfabehtica.\n", y, x);
    }

    return 0;
}
// END EX09

// START EX10
// Verifica se as cadeias de caracteres estao em ordem crescente
bool ordemCrescenteCadeias(char x[], char y[], char z[])
{
    return (strcmp(x, y) < 0 && strcmp(y, z) < 0);
}

// Verifica se as cadeias de caracteres estao em ordem decrescente
bool ordemDecrescenteCadeias(char x[], char y[], char z[])
{
    return (strcmp(x, y) > 0 && strcmp(y, z) > 0);
}

// Encontra a menor cadeia de caracteres
void encontrarMenorCadeia(char x[], char y[], char z[], char menor[])
{
    if (strcmp(x, y) < 0 && strcmp(x, z) < 0)
    {
        strcpy(menor, x);
    }
    else if (strcmp(y, z) < 0)
    {
        strcpy(menor, y);
    }
    else
    {
        strcpy(menor, z);
    }
}

// Encontra a maior cadeia de caracteres
void encontrarMaiorCadeia(char x[], char y[], char z[], char maior[])
{
    if (strcmp(x, y) > 0 && strcmp(x, z) > 0)
    {
        strcpy(maior, x);
    }
    else if (strcmp(y, z) > 0)
    {
        strcpy(maior, y);
    }
    else
    {
        strcpy(maior, z);
    }
}

int exercicio10(void)
{
    char cadeia1[100], cadeia2[100], cadeia3[100];
    char menorCadeia[100], maiorCadeia[100];

    // Entrada de dados
    printf("Entre com a cadeia 1: ");
    scanf("%s", cadeia1);
    printf("Entre com a cadeia 2: ");
    scanf("%s", cadeia2);
    printf("Entre com a cadeia 3: ");
    scanf("%s", cadeia3);

    // Verifica a ordem das cadeias de caracteres
    if (ordemCrescenteCadeias(cadeia1, cadeia2, cadeia3))
    {
        printf("As cadeias estao em ordem crescente.\n");
    }
    else if (ordemDecrescenteCadeias(cadeia1, cadeia2, cadeia3))
    {
        printf("As cadeias estao em ordem decrescente.\n");
    }
    else
    {
        // Encontrar a menor e maior cadeia
        encontrarMenorCadeia(cadeia1, cadeia2, cadeia3, menorCadeia);
        encontrarMaiorCadeia(cadeia1, cadeia2, cadeia3, maiorCadeia);
        printf("As cadeias nao estao em ordem crescente nem decrescente.\n");
        printf("Menor: %s\n", menorCadeia);
        printf("Maior: %s\n", maiorCadeia);
    }

    return 0;
}
// END EX10

// START MAIN
int main()
{

    int opcao = 0;

    printf("%s\n", "Exercicio01 - 1");
    printf("%s\n", "Exercicio02 - 2");
    printf("%s\n", "Exercicio03 - 3");
    printf("%s\n", "Exercicio04 - 4");
    printf("%s\n", "Exercicio05 - 5");
    printf("%s\n", "Exercicio06 - 6");
    printf("%s\n", "Exercicio07 - 7");
    printf("%s\n", "Exercicio08 - 8");
    printf("%s\n", "Exercicio09 - 9");
    printf("%s\n", "Exercicio010 - 10");
    // printf("\n%s %d", "Opcao =" ,opcao);
    printf("%s", "Qual a opcao? ");
    scanf("%d", &opcao);
    getchar();

    switch (opcao)
    {
    case 0:
        break;
    case 1:
        exercicio01();
        break;
    case 2:
        exercicio02();
        break;
    case 3:
        exercicio03();
        break;
    case 4:
        exercicio04();
        break;
    case 5:
        exercicio05();
        break;
    case 6:
        exercicio06();
        break;
    case 7:
        exercicio07();
        break;
    case 8:
        exercicio08();
        break;
    case 9:
        exercicio09();
        break;
    case 10:
        exercicio10();
        break;
    default:
        printf("%s", "ERRO: Insira um valor de 1 a 10.");
    }
}
// END MAIN