/*
    Exemplos_11 - v0.0. - 28 / 11 / 2024
    Autor: Daniel Alves Goncalves
*/

// dependências
#include <iostream> // std::cin, std::cout, std::endl
#include <limits>   // std::numeric_limits
#include <string>   // para cadeias de caracteres
#include "myarray.hpp" // incluindo o header da classe

using namespace std;

// ----------------------------------------------- funções auxiliares
void pause(std::string text)
{
    std::string dummy;
    std::cin.clear();
    std::cout << std::endl << text;
    std::cin.ignore();
    std::getline(std::cin, dummy);
    std::cout << std::endl << std::endl;
} 

// ----------------------------------------------- métodos para o menu
void method_01() {
    int N, inferior, superior;
    cout << "Digite a quantidade de números a serem gerados: ";
    cin >> N;
    cout << "Digite o valor inferior: ";
    cin >> inferior;
    cout << "Digite o valor superior: ";
    cin >> superior;

    Array<int> arr(N); // Instanciando o objeto arr da classe Array
    arr.randomIntGenerate(N, inferior, superior, "DADOS.TXT");
    cout << "Números gerados e salvos em 'DADOS.TXT'." << endl;
}

void method_02() {
    int N;
    ifstream file("DADOS.TXT");
    file >> N;

    Array<int> arrayObj(N); // Instanciando o objeto arrayObj
    for (int i = 0; i < N; i++) {           
        file >> arrayObj[i];  // Carrega os dados no array da classe
    }

    int maiorPar = arrayObj.searchFirstEven();
    if (maiorPar == -1) {
        cout << "Nenhum valor par encontrado!" << endl;
    } else {
        cout << "O maior valor par é: " << maiorPar << endl;
    }
}

void method_03() {
    int N;
    ifstream file("DADOS.TXT");
    file >> N;

    Array<int> arrayObj(N);
    for (int i = 0; i < N; i++) {
        file >> arrayObj[i];  // Carrega os dados no array da classe
    }

    int menor = arrayObj.searchFirstEvenx3();
    if (menor == -1) {
        cout << "Nenhum valor par múltiplo de 3 encontrado!" << endl;
    } else {
        cout << "O menor valor par múltiplo de 3 é: " << menor << endl;
    }
}

void method_04() {
    int N, inicio, fim;
    ifstream file("DADOS.TXT");
    file >> N;

    Array<int> arrayObj(N);
    for (int i = 0; i < N; i++) {
        file >> arrayObj[i];  // Carrega os dados no array da classe
    }

    cout << "Digite a posição inicial: ";
    cin >> inicio;
    cout << "Digite a posição final: ";
    cin >> fim;

    int soma = arrayObj.addInterval(inicio, fim);
    cout << "A soma entre as posições é: " << soma << endl;
}

void method_05() {
    int N, inicio, fim;
    ifstream file("DADOS.TXT");
    file >> N;

    Array<int> arrayObj(N);
    for (int i = 0; i < N; i++) {
        file >> arrayObj[i];  // Carrega os dados no array da classe
    }

    cout << "Digite a posição inicial: ";
    cin >> inicio;
    cout << "Digite a posição final: ";
    cin >> fim;

    double media = arrayObj.averageInterval(inicio, fim);
    cout << "A média entre as posições é: " << media << endl;
}

void method_06() {
    int N;
    ifstream file("DADOS.TXT");
    file >> N;

    Array<int> arrayObj(N);
    for (int i = 0; i < N; i++) {
        file >> arrayObj[i];  // Carrega os dados no array da classe
    }

    bool positivos = arrayObj.negatives();
    if (positivos) {
        cout << "Todos os valores são positivos!" << endl;
    } else {
        cout << "Existem valores negativos!" << endl;
    }
}

void method_07() {
    int N;
    ifstream file("DADOS.TXT");
    file >> N;

    Array<int> arrayObj(N);
    for (int i = 0; i < N; i++) {
        file >> arrayObj[i];  // Carrega os dados no array da classe
    }

    bool ordenado = arrayObj.isDecrescent();
    if (ordenado) {
        cout << "O arranjo está ordenado em ordem decrescente." << endl;
    } else {
        cout << "O arranjo não está ordenado em ordem decrescente." << endl;
    }
}

void method_08() {
    int N, procurado, inicio, fim;
    ifstream file("DADOS.TXT");
    file >> N;

    Array<int> arrayObj(N);
    for (int i = 0; i < N; i++) {
        file >> arrayObj[i];  // Carrega os dados no array da classe
    }

    cout << "Digite o valor a ser procurado: ";
    cin >> procurado;
    cout << "Digite a posição inicial: ";
    cin >> inicio;
    cout << "Digite a posição final: ";
    cin >> fim;

    bool existe = arrayObj.searchInterval(procurado, inicio, fim);
    if (existe) {
        cout << "Valor encontrado no arranjo!" << endl;
    } else {
        cout << "Valor não encontrado no arranjo." << endl;
    }
}

void method_09() {
    int N, constante, inicio, fim;
    ifstream file("DADOS.TXT");
    file >> N;

    Array<int> arrayObj(N);
    for (int i = 0; i < N; i++) {
        file >> arrayObj[i];  // Carrega os dados no array da classe
    }

    cout << "Digite a constante para multiplicação: ";
    cin >> constante;
    cout << "Digite a posição inicial: ";
    cin >> inicio;
    cout << "Digite a posição final: ";
    cin >> fim;

    arrayObj.scalar(constante, inicio, fim);
    cout << "Dados escalados com sucesso!" << endl;
}

void method_10() {
    int N;
    ifstream file("DADOS.TXT");
    file >> N;

    Array<int> arrayObj(N);
    for (int i = 0; i < N; i++) {
        file >> arrayObj[i];  // Carrega os dados no array da classe
    }

    arrayObj.sortDown();
    cout << "Arranjo ordenado em ordem decrescente!" << endl;
}

int main() {
    int choice;
    srand(time(0)); // Inicializar o gerador de números aleatórios

    do {
        cout << "\nEscolha uma opção:" << endl;
        cout << "1. Gerar números aleatórios e salvar em arquivo" << endl;
        cout << "2. Procurar o maior valor par" << endl;
        cout << "3. Procurar o menor valor par múltiplo de 3" << endl;
        cout << "4. Somar valores entre duas posições" << endl;
        cout << "5. Calcular a média entre duas posições" << endl;
        cout << "6. Verificar se todos os valores são positivos" << endl;
        cout << "7. Verificar se está ordenado em ordem decrescente" << endl;
        cout << "8. Verificar se um valor existe entre duas posições" << endl;
        cout << "9. Multiplicar valores por uma constante entre duas posições" << endl;
        cout << "10. Ordenar os valores em ordem decrescente" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha: ";
        cin >> choice;

        switch (choice) {
            case 0:  break; // Sai do loop
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
            default: cout << "Opção inválida!" << endl;
        }
        pause("Pressione Enter para continuar...");

    } while (choice != 0);
    
    return 0;
}
