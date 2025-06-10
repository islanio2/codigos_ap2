#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

struct Paciente {
    std::string nome;
    int prioridade;
};

void selectionSort(std::vector<Paciente>& pacientes) {
    int n = pacientes.size();
    for (int i = 0; i < n - 1; ++i) {
        int min_idx = i;
        for (int j = i + 1; j < n; ++j) {
            if (pacientes[j].prioridade < pacientes[min_idx].prioridade) {
                min_idx = j;
            }
        }
        std::swap(pacientes[i], pacientes[min_idx]);
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

    selectionSort(pacientes);

    std::cout << "\nLista ordenada com Selection Sort:\n";
    for (const auto& p : pacientes) {
        std::cout << "{\"nome\": \"" << p.nome << "\", \"prioridade\": " << p.prioridade << "}\n";
    }

    return 0;
}

