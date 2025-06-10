#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

struct Paciente {
    std::string nome;
    int prioridade;
};

void bubbleSort(std::vector<Paciente>& pacientes) {
    int n = pacientes.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (pacientes[j].prioridade > pacientes[j + 1].prioridade) {
                std::swap(pacientes[j], pacientes[j + 1]);
            }
        }
    }
}

int main() {
    std::vector<Paciente> pacientes = {
        {"Ana", 5},{"Pedro", 2},{"Carla", 4},{"Lucas", 1},{"Mariana", 3},{"Fernanda", 5},{"Rafael", 2},{"Beatriz", 4},{"Guilherme", 1},{"Sofia", 3}
    };

    std::cout << "Lista original:\n";
    for (const auto& p : pacientes) {
        std::cout << "{\"nome\": \"" << p.nome << "\", \"prioridade\": " << p.prioridade << "}\n";
    }

    bubbleSort(pacientes);

    std::cout << "\nLista ordenada com Bubble Sort:\n";
    for (const auto& p : pacientes) {
        std::cout << "{\"nome\": \"" << p.nome << "\", \"prioridade\": " << p.prioridade << "}\n";
    }

    return 0;
}

