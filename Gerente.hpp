#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

using namespace std;

double valor_bonificacao = 15.0;

class Gerente {
  public:
    double salario_base; // valor m�nimo recebido pelo funcion�rio
    int idade;
    string nome;
    int rg_func;
    double bonificacao = 0;

    Gerente() {}

    Gerente(string nome, int idade, int rg_func, double salario_base) {
      this->nome = nome;
      this->idade= idade;
      this->rg_func = rg_func;
      this->salario_base = salario_base;
     }

    void print() {
      cout << "[Funcionario]" << endl
      << "[Gerente]" << endl
      << "  Nome: " << nome << endl
      << "  Idade: " << idade << endl
      << "  RGFunc: " << rg_func << endl
      << "  salario_base: R$ " << fixed << setprecision(2) << salario_base <<endl;
    }

    double calcula_BONIFICACAO_GERENTE(int num_total_vendas){
      return num_total_vendas*valor_bonificacao;
    }

};

#endif
