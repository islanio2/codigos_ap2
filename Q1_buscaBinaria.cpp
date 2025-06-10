#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int busca_binaria(const std::vector<std::string>& lista, const std::string& titulo_buscado) {
    int esquerda = 0;
    int direita = lista.size() - 1;

    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;

        if (lista[meio] == titulo_buscado) {
            return meio;
        } else if (lista[meio] < titulo_buscado) {
            esquerda = meio + 1;
        } else {
            direita = meio - 1;
        }
    }
    return -1;
}

int main() {
    std::vector<std::string> livros = {
        "1984",
        "A Culpa é das Estrelas",
        "A Droga da Obediência",
        "A Estrada",
        "A Fera de Gaia",
        "A Hora da Estrela",
        "A Menina que Roubava Livros",
        "A Metamorfose",
        "A Montanha Mágica",
        "A Revolução dos Bichos",
        "A Sombra do Vento",
        "A Teia de Charlotte",
        "Admirável Mundo Novo",
        "Alice no País das Maravilhas",
        "As Crônicas de Nárnia: O Leão, a Feiticeira e o Guarda-Roupa",
        "Assassinato no Expresso do Oriente",
        "Cem Anos de Solidão",
        "Corte de Espinhos e Rosas",
        "Crepúsculo",
        "Dom Casmurro",
        "Duna",
        "Ensaio sobre a Cegueira",
        "Fahrenheit 451",
        "Frankenstein",
        "Harry Potter e a Pedra Filosofal",
        "Jogos Vorazes",
        "Memórias Póstumas de Brás Cubas",
        "O Alquimista",
        "O Código Da Vinci",
        "O Cortiço",
        "O Grande Gatsby",
        "O Guia do Mochileiro das Galáxias",
        "O Hobbit",
        "O Iluminado",
        "O Ladrão de Raios",
        "O Pequeno Príncipe",
        "O Poder do Hábito",
        "O Retrato de Dorian Gray",
        "O Senhor dos Anéis: A Sociedade do Anel",
        "O Silmarillion",
        "O Sol é Para Todos",
        "Onde Vivem os Monstros",
        "Orgulho e Preconceito",
        "Percy Jackson e o Ladrão de Raios",
        "Sapiens: Uma Breve História da Humanidade",
        "Um Estudo em Vermelho",
        "Vidas Secas"
    };

    std::string titulo_buscado = "O Hobbit";
    int indice = busca_binaria(livros, titulo_buscado);
    if (indice != -1) {
        std::cout << "\"" << titulo_buscado << "\" encontrado no índice " << indice << std::endl;
    } else {
        std::cout << "\"" << titulo_buscado << "\" não encontrado." << std::endl;
    }

    return 0;
}

