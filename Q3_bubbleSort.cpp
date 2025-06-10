#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <ctime>

std::vector<int> vetor_aleatorio(int tamanho, int min, int max) {
    std::vector<int> vetor;
    srand(time(0));
    for (int i = 0; i < tamanho; i++) {
        vetor.push_back(rand() % (max - min + 1) + min);
    }
    return vetor;
}

void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    std::vector<int> numeros = vetor_aleatorio(50, 1, 500);
    std::cout << "50 números aleatórios:\n";
    for (int i = 0; i < numeros.size(); ++i) {
        std::cout << numeros[i] << (i == numeros.size() - 1 ? "" : ", ");
    }
    std::cout << "\n";

    bubbleSort(numeros);

    std::cout << "\nLista ordenada com Bubble Sort:\n";
    for (int i = 0; i < numeros.size(); ++i) {
        std::cout << numeros[i] << (i == numeros.size() - 1 ? "" : ", ");
    }
    std::cout << "\n";

    return 0;
}

