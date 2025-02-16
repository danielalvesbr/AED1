#ifndef _MYARRAY_HPP_
#define _MYARRAY_HPP_

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cstdlib>  // para rand() e srand()
#include <ctime>    // para time()

using std::cin;
using std::cout;
using std::endl;
using std::setw;
using std::string;
using std::ifstream;
using std::ofstream;

template <typename T>
class Array
{
private:
    T optional;
    int length;
    T *data;

public:
    Array(int n, T initial = T()) : length(n), optional(initial), data(nullptr) {
    data = new T[length];
    }

    
    T& operator[](int index) {
    if (index < 0 || index >= length) { // Use 'length' em vez de 'size'
        throw std::out_of_range("Index out of bounds");
    }
    return data[index];
    }

    const T& operator[](int index) const {
    if (index < 0 || index >= length) {
        throw std::out_of_range("Index out of bounds");
    }
    return data[index];
}


    // Função para gerar números aleatórios e gravá-los no arquivo
    void randomIntGenerate(int N, int inferior, int superior, const string &filename) {
    ofstream file(filename);
    if (!file) {
        throw std::runtime_error("Erro ao abrir o arquivo para escrita!");
    }

    file << N << endl;
    for (int i = 0; i < N; i++) {
        file << rand() % (superior - inferior + 1) + inferior << endl;
    }
    file.close();
    }

    // Função para procurar o primeiro número par
    int searchFirstEven()
    {
        int maiorPar = -1;
        for (int i = 0; i < length; i++)
        {
            if (data[i] % 2 == 0)
            {
                maiorPar = data[i];
                break;
            }
        }
        return maiorPar;
    }

    // Função para procurar o primeiro número par múltiplo de 3
    int searchFirstEvenx3()
    {
        int menor = -1;
        for (int i = 0; i < length; i++)
        {
            if (data[i] % 2 == 0 && data[i] % 3 == 0)
            {
                menor = data[i];
                break;
            }
        }
        return menor;
    }

    // Função para somar os valores entre duas posições
    int addInterval(int inicio, int fim)
    {
        int soma = 0;
        for (int i = inicio; i <= fim; i++)
        {
            soma += data[i];
        }
        return soma;
    }

    // Função para calcular a média entre duas posições
    double averageInterval(int inicio, int fim)
    {
        int soma = 0;
        for (int i = inicio; i <= fim; i++)
        {
            soma += data[i];
        }
        return (double)soma / (fim - inicio + 1);
    }

    // Função para verificar se todos os valores são positivos
    bool negatives()
    {
        for (int i = 0; i < length; i++)
        {
            if (data[i] < 0)
            {
                return false;
            }
        }
        return true;
    }

    // Função para verificar se o arranjo está ordenado em ordem decrescente
    bool isDecrescent()
    {
        for (int i = 0; i < length - 1; i++)
        {
            if (data[i] < data[i + 1])
            {
                return false;
            }
        }
        return true;
    }

    // Função para buscar um valor dentro de um intervalo
    bool searchInterval(int procurado, int inicio, int fim)
    {
        for (int i = inicio; i <= fim; i++)
        {
            if (data[i] == procurado)
            {
                return true;
            }
        }
        return false;
    }

    // Função para multiplicar os elementos por uma constante
    void scalar(int constante, int inicio, int fim)
    {
        for (int i = inicio; i <= fim; i++)
        {
            data[i] *= constante;
        }
    }

    // Função para ordenar o arranjo em ordem decrescente
    void sortDown()
    {
        for (int i = 0; i < length - 1; i++)
        {
            for (int j = i + 1; j < length; j++)
            {
                if (data[i] < data[j])
                {
                    std::swap(data[i], data[j]);
                }
            }
        }
    }

    // Função para ler os dados de um arquivo
    void fread(const string &filename) {
    ifstream file(filename);
    if (!file) {
        throw std::runtime_error("Erro ao abrir o arquivo!");
    }

    file >> length;

    // Liberar a memória anteriormente alocada (se houver)
    if (data) {
        delete[] data;
    }

    data = new T[length]; // Realocar o array com o novo tamanho

    for (int i = 0; i < length; i++) {
        file >> data[i];
    }
    file.close();
}

    // Função para imprimir os dados
    void print()
    {
        for (int i = 0; i < length; i++)
        {
            cout << setw(3) << i << " : " << setw(9) << data[i] << endl;
        }
    }

    // Destruidor
    ~Array() {
    if (data) {
        delete[] data;
    }
}

};

#endif
