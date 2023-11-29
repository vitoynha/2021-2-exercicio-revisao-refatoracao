#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;

class Venda{
  public:
    double valor;
    string descricao;
    Especialista esp;
    string cliente;

    Venda() {}

    Venda(string clientes, Especialista& esp, string descricao, double valor) {
      this-> cliente = clientes;
      this-> esp = esp;
      this-> descricao = descricao;
      this-> valor = valor;

      esp.comissao += esp.calcularComissao(valor);
      esp.num_atendimentos+=1;

 }

    void print() {

        std::cout << "Especialista: ";
        cout << esp.nome;

        std::cout << " Cliente: ";
        cout << cliente;
    }
};

#endif
