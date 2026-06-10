#include <iostream>
#include <string>

struct Produto {
    int id;
    std::string nome;
    float preco;
};

Produto produtos[100];
int quantidadeProdutos = 0;

void adicionarProduto() {

    if (quantidadeProdutos >= 100) {
        std::cout << "Limite de produtos atingido!" << std::endl;
        return;
    }

    std::cout << "\n------- Adicionar Produto -------" << std::endl;

    std::cout << "Digite o ID do produto: ";
    std::cin >> produtos[quantidadeProdutos].id;

    std::cin.ignore();

    std::cout << "Digite o nome do produto: ";
    std::getline(std::cin, produtos[quantidadeProdutos].nome);

    std::cout << "Digite o preco do produto: ";
    std::cin >> produtos[quantidadeProdutos].preco;

    quantidadeProdutos++;

    std::cout << "Produto cadastrado com sucesso!" << std::endl;
}

void deletarProduto() {

    if (quantidadeProdutos == 0) {
        std::cout << "Nenhum produto cadastrado." << std::endl;
        return;
    }

    int idBuscado;

    std::cout << "\nDigite o ID do produto a ser deletado: ";
    std::cin >> idBuscado;

    for (int i = 0; i < quantidadeProdutos; i++) {

        if (produtos[i].id == idBuscado) {

            for (int j = i; j < quantidadeProdutos - 1; j++) {
                produtos[j] = produtos[j + 1];
            }

            quantidadeProdutos--;

            std::cout << "Produto deletado com sucesso!" << std::endl;
            return;
        }
    }

    std::cout << "Produto nao encontrado!" << std::endl;
}

void exibirProdutos() {

    if (quantidadeProdutos == 0) {
        std::cout << "Nenhum produto cadastrado." << std::endl;
        return;
    }

    std::cout << "\n------- Lista de Produtos -------" << std::endl;

    for (int i = 0; i < quantidadeProdutos; i++) {

        std::cout << "ID: " << produtos[i].id << std::endl;
        std::cout << "Nome: " << produtos[i].nome << std::endl;
        std::cout << "Preco: " << produtos[i].preco << std::endl;
        std::cout << "---------------------" << std::endl;
    }
}

void buscarProduto() {

    if (quantidadeProdutos == 0) {
        std::cout << "Nenhum produto cadastrado." << std::endl;
        return;
    }

    int idBuscado;
    bool produtoEncontrado = false;

    std::cout << "\nDigite o ID do produto: ";
    std::cin >> idBuscado;

    for (int i = 0; i < quantidadeProdutos; i++) {

        if (produtos[i].id == idBuscado) {

            std::cout << "\nProduto encontrado!" << std::endl;
            std::cout << "ID: " << produtos[i].id << std::endl;
            std::cout << "Nome: " << produtos[i].nome << std::endl;
            std::cout << "Preco: " << produtos[i].preco << std::endl;

            produtoEncontrado = true;
            break;
        }
    }

    if (!produtoEncontrado) {
        std::cout << "Produto nao encontrado!" << std::endl;
    }
}

int menu() {

    int opcao;

    std::cout << "\n------- MENU -------" << std::endl;
    std::cout << "1. Adicionar produto" << std::endl;
    std::cout << "2. Exibir produtos" << std::endl;
    std::cout << "3. Buscar produto" << std::endl;
    std::cout << "4. Deletar produto" << std::endl;
    std::cout << "0. Sair" << std::endl;
    std::cout << "Escolha uma opcao: ";

    std::cin >> opcao;

    return opcao;
}

int main() {

    int opcao;

    do {

        opcao = menu();

        switch (opcao) {

            case 1:
                adicionarProduto();
                break;

            case 2:
                exibirProdutos();
                break;

            case 3:
                buscarProduto();
                break;

            case 4:
                deletarProduto();
                break;

            case 0:
                std::cout << "Saindo do programa..." << std::endl;
                break;

            default:
                std::cout << "Opcao invalida!" << std::endl;
        }

    } while (opcao != 0);

    return 0;
}




    
        
    
    
