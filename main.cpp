#include <iostream>
#include <string>
#include <iomanip>



  //-------------------------------- CADASTRO DO ALUNO --------------------------------
  


  std::string nomecompleto_aluno_responsavel_financeiro;
  std::string enderecocompleto_com_cep_aluno_responsavel_financeiro;
  std::string gmail_aluno_responsavel_financeiro;
  std::string telefone_aluno_responsavel_financeiro;
  std::string rg_aluno_responsavel_financeiro;
  std::string data_nascimento_aluno_responsavel_financeiro;



// --------------------------------- MODALIDADES DO CURSO --------------------------------

  void exibirModalidade(){
  std::cout<<" ======= Bem vindo ao sistema de cadastro de alunos do Senac nh ======= "<<std::endl;
  std::cout<<" Para se cadastrar, por favor, preencha os campos a seguir: "<<std::endl;
  std::cout<<"1 - cursos presencias "<<std::endl;
  std::cout<<"2 - cursos EAD "<<std::endl;
  std::cout<<"3 - cursos de idiomas (Libras) "<<std::endl;
  std::cout<<"0 - sair do sistema "<<std::endl;
  std::cout<<"selecione a modalidade do curso que deseja se cadastrar: "<<std::endl;


  }


  int main(){

int modalidade_curso = -1;
exibirModalidade();


 








// -------------------------------------- COLETA DE DADOS ------------------------



  std::cout<<" Por favor, digite o nome completo do aluno e do responsavel financeiro:  "<<std::endl;
  std::getline(std::cin, nomecompleto_aluno_responsavel_financeiro);

  std::cout<<"Digite o endereco do aluno e do responsavel financeiro completo com cep: "<<std::endl;
  std::getline(std::cin, enderecocompleto_com_cep_aluno_responsavel_financeiro);

  std::cout<<"Digite o gmail do aluno e do responsavel financeiro: "<<std::endl;
  std::getline(std::cin, gmail_aluno_responsavel_financeiro);

  std::cout<<"Digite o telefone do aluno e do responsavel financeiro: "<<std::endl;
  std::cin>>telefone_aluno_responsavel_financeiro;

  std::cout<<"Digite o rg do aluno e do responsavel financeiro: "<<std::endl;
  std::cin>>rg_aluno_responsavel_financeiro;

  std::cout<<"Digite a data de nascimento do aluno e do responsavel financeiro: "<<std::endl;
  std::cin>>data_nascimento_aluno_responsavel_financeiro;
  

    

    return 0;
}






 






















