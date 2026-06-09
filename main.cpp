#include <iostream>
#include <string>

struct tarefa {
    int id;
    std::string descricao;
    bool conclusao;
};

tarefa tarefas[50];
int totaltarefas = 0;

void adicionar() {
    if (totaltarefas >= 50) {
        std::cout << "Limite de tarefas atingido!" << std::endl;
        return;
    }

    std::cout << "\n------- Adicionar Tarefa -------" << std::endl;

    std::cout << "ID: ";
    std::cin >> tarefas[totaltarefas].id;

    std::cin.ignore();

    std::cout << "Descricao: ";
    std::getline(std::cin, tarefas[totaltarefas].descricao);

    tarefas[totaltarefas].conclusao = false;

    totaltarefas++;

    std::cout << "Tarefa adicionada com sucesso!" << std::endl;
}

void listar() {
    if (totaltarefas == 0) {
        std::cout << "\nNenhuma tarefa cadastrada!" << std::endl;
        return;
    }

    std::cout << "\n------- Lista de Tarefas -------" << std::endl;

    for (int i = 0; i < totaltarefas; i++) {
        std::string status = tarefas[i].conclusao ? "Concluida" : "Pendente";

        std::cout << "[" << status << "] "
                  << tarefas[i].id << " - "
                  << tarefas[i].descricao << std::endl;
    }
}

void marcarConcluida() {
    if (totaltarefas == 0) {
        std::cout << "\nNenhuma tarefa cadastrada!" << std::endl;
        return;
    }

    int idBuscado;
    bool encontrada = false;

    std::cout << "\nID da tarefa a concluir: ";
    std::cin >> idBuscado;

    for (int i = 0; i < totaltarefas; i++) {
        if (tarefas[i].id == idBuscado) {
            tarefas[i].conclusao = true;
            encontrada = true;

            std::cout << "Tarefa marcada como concluida!" << std::endl;
            break;
        }
    }

    if (!encontrada) {
        std::cout << "Tarefa nao encontrada!" << std::endl;
    }
}

int menu() {
    int opcao;

    std::cout << "\n======= MENU =======" << std::endl;
    std::cout << "1 - Adicionar tarefa" << std::endl;
    std::cout << "2 - Listar tarefas" << std::endl;
    std::cout << "3 - Marcar tarefa como concluida" << std::endl;
    std::cout << "0 - Sair" << std::endl;
    std::cout << "Opcao: ";
    std::cin >> opcao;

    return opcao;
}

int main() {
    int opcao;

    while (true) {
    std::cin>>opcao;

        switch (opcao) {
            case 1:
                adicionar();
                break;
            case 2:
                listar();
                break;
            case 3:
                marcarConcluida();
                break;
            case 0:
                std::cout << "ate logo!" << std::endl;
                return 0;
            default:
                std::cout << "Opcao invalida!" << std::endl;
        }
    return 0;

    }
}
