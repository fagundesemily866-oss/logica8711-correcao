#include <iostream>
#include <string>
#include <iomanip>

// ---- CADASTRO DO ALUNO ----
std::string nome;
std::string nomeR;
std::string nascimento;
std::string rg;
std::string cpf;

// ---- CONTATO ----
std::string emailAluno;
std::string emailResponsavel;
std::string contatoAluno;
std::string contatoResponsavel;

// ---- LOCALIZACAO ----
std::string rua;
std::string numero;
std::string bairro;
std::string cidade;
std::string estado;
std::string cep;

// ---- CURSO ----
int curso;
int tipoCurso;
std::string nomeCurso;
float valorCurso;

// --------------------------------- MENU --------------------------------

void exibirModalidade() {

    std::cout << "======= Bem vindo ao sistema de cadastro do Senac NH =======\n\n";

    std::cout << "Cursos Presenciais:\n";
    std::cout << "1 - TDS (R$14405.49)\n";
    std::cout << "2 - Enfermagem (R$15278.00)\n";
    std::cout << "3 - Modelagem (R$14844.79)\n\n";

    std::cout << "Cursos EAD:\n";
    std::cout << "1 - RH (R$3355)\n";
    std::cout << "2 - Logistica (R$3751)\n";
    std::cout << "3 - Contabilidade (R$3355)\n";
    std::cout << "4 - Transacoes Imobiliarias (R$3157)\n\n";

    std::cout << "Curso de Libras:\n";
    std::cout << "1 - Libras (R$1757.00)\n\n";
}

// -------------------------------- DESCONTO --------------------------------

float valores_curso(float valor_curso, int modalidade_curso) {

    switch (modalidade_curso) {

        case 1:
            return valor_curso * 0.90;

        case 2:
            return valor_curso * 0.94;

        case 3:
            return valor_curso * 0.95;

        default:
            return valor_curso;
    }
}

// -------------------------------- MAIN --------------------------------

int main() {

    exibirModalidade();

    std::cout << "Tipo de curso:\n";
    std::cout << "1 - Presencial\n";
    std::cout << "2 - EAD\n";
    std::cout << "3 - Libras\n";
    std::cout << "Opcao: ";
    std::cin >> tipoCurso;

    switch (tipoCurso) {

        case 1:

            std::cout << "\nCursos Presenciais:\n";
            std::cout << "1 - TDS\n";
            std::cout << "2 - Enfermagem\n";
            std::cout << "3 - Modelagem\n";
            std::cin >> curso;

            if (curso == 1) {
                nomeCurso = "TDS";
                valorCurso = 14405.49;
            }

            else if (curso == 2) {
                nomeCurso = "Enfermagem";
                valorCurso = 15278.00;
            }

            else if (curso == 3) {
                nomeCurso = "Modelagem";
                valorCurso = 14844.79;
            }

            break;

        case 2:

            std::cout << "\nCursos EAD:\n";
            std::cout << "1 - RH\n";
            std::cout << "2 - Logistica\n";
            std::cout << "3 - Contabilidade\n";
            std::cout << "4 - Transacoes Imobiliarias\n";
            std::cin >> curso;

            if (curso == 1) {
                nomeCurso = "RH";
                valorCurso = 3355;
            }

            else if (curso == 2) {
                nomeCurso = "Logistica";
                valorCurso = 3751;
            }

            else if (curso == 3) {
                nomeCurso = "Contabilidade";
                valorCurso = 3355;
            }

            else if (curso == 4) {
                nomeCurso = "Transacoes Imobiliarias";
                valorCurso = 3157;
            }

            break;

        case 3:

            nomeCurso = "Libras";
            valorCurso = 1757.00;

            break;

        default:

            std::cout << "Opcao invalida.\n";
            return 0;
    }

    // ---------------- COLETA DE DADOS ----------------

    std::cin.ignore();

    std::cout << "\nNome completo do aluno: ";
    std::getline(std::cin, nome);
std::cin.ignore();
    std::cout << "Nome do responsavel financeiro: ";
    std::getline(std::cin, nomeR);
std::cin.ignore();
    std::cout << "CEP: ";
    std::getline(std::cin, cep);
std::cin.ignore();
    std::cout << "Email do aluno: ";
    std::getline(std::cin, emailAluno);
std::cin.ignore();
    std::cout << "Email do responsavel: ";
    std::getline(std::cin, emailResponsavel);
std::cin.ignore();
    std::cout << "Telefone do aluno: ";
    std::getline(std::cin, contatoAluno);
std::cin.ignore();
    std::cout << "Telefone do responsavel: ";
    std::getline(std::cin, contatoResponsavel);
std::cin.ignore();
    std::cout << "RG do aluno: ";
    std::getline(std::cin, rg);
std::cin.ignore();
    std::cout << "CPF do aluno: ";
    std::getline(std::cin, cpf);
std::cin.ignore();
    std::cout << "Data de nascimento: ";
    std::getline(std::cin, nascimento);

    // ---------------- RESUMO ----------------

    std::cout << "\n========== DADOS CADASTRADOS ==========\n";

    std::cout << "Aluno: " << nome << std::endl;
    std::cout << "Responsavel: " << nomeR << std::endl;
    std::cout << "Curso: " << nomeCurso << std::endl;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Valor do curso: R$" << valorCurso << std::endl;
 
    return 0;
  }








  
















 






















