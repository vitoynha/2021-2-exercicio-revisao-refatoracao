#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

class Especialista : public Funcionario {
  public:
    string especialidade;
    int num_atendimentos = 0;
    double comissao = 0;

    Especialista() {}

    Especialista(string nome, string idade, int rg_func, double salario_base, string especialidade) {
      this->salario_base = salario_base; // valor m�nimo recebido pelo funcion�rio
      this->idade = idade;
      this->nome = nome;
      this->rg_func = rg_func;
      this->especialidade = especialidade;
    }

    double calcularComissao(double ValorVenda);

    /*Fucao que imprime as iunfomacoes dr especialista*/
    void print();
};

#endif
