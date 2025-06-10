#include <iostream>
#include <vector>
#include <string>

int busca_linear(const std::vector<std::string>& lista, const std::string& titulo_buscado) {
    for (int i = 0; i < lista.size(); ++i) {
        if (lista[i] == titulo_buscado) {
            return i;
        }
    }
    return -1;
}

int main() {
    std::vector<std::string> livros = {
        "A Culpa é das Estrelas",
        "A Droga da Obediência",
        "A Estrada",
        "A Fera de Gaia",
        "A Menina que Roubava Livros",
        "A Montanha Mágica",
        "A Revolução dos Bichos",
        "A Sombra do Vento",
        "A Teia de Charlotte",
        "1984",
        "Admirável Mundo Novo",
        "Alice no País das Maravilhas",
        "O Alquimista",
        "Cem Anos de Solidão",
        "A Hora da Estrela",
        "A Metamorfose",
        "As Crônicas de Nárnia: O Leão, a Feiticeira e o Guar-Roupa",
        "Assassinato no Expresso do Oriente",
        "Corte de Espinhos e Rosas",
        "Crepúsculo",
        "Dom Casmurro",
        "Duna",
        "Ensaio sobre a Cegueira",
        "Fahrenheit 451",
        "Frankenstein",
        "O Grande Gatsby",
        "Harry Potter e a Pedra Filosofal",
        "Jogos Vorazes",
        "Memórias Póstumas de Brás Cubas",
        "O Código Da Vinci",
        "O Cortiço",
        "O Guia do Mochileiro das Galáxias",
        "O Iluminado",
        "O Ladrão de Raios",
        "O Pequeno Príncipe",
        "O Poder do Hábito",
        "O Silmarillion",
        "O Sol é Para Todos",
        "O Senhor dos Anéis: A Sociedade do Anel",
        "Onde Vivem os Monstros",
        "Orgulho e Preconceito",
        "O Retrato de Dorian Gray",
        "Percy Jackson e o Ladrão de Raios",
        "Sapiens: Uma Breve História da Humanidade",
        "O Hobbit",
        "Um Estudo em Vermelho",
        "Vidas Secas"
    };
    
    std::string titulo_buscado = "O Hobbit";
    int indice = busca_linear(livros, titulo_buscado);
    if (indice != -1) {
        std::cout << "\"" << titulo_buscado << "\" encontrado no índice " << indice << std::endl;
    } else {
        std::cout << "\"" << titulo_buscado << "\" não encontrado." << std::endl;
    }

    return 0;
}

