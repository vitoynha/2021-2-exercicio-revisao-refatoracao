#include <iostream>

#include "Cliente.hpp"
#include "Especialista.hpp"
#include "Funcionario.hpp"
#include "Gerente.hpp"
#include "Venda.hpp"
using namespace std;

int main() {
  Cliente clientes[5];

  clientes[0] = Cliente("J. Jonah Jameson", "Nova York", "35690000");
  clientes[1] = Cliente("Norman Osborn", "Hartlford", "22061955");
  clientes[2] = Cliente("Otto Octavius", "Schenectady", "24051953");
  clientes[3] = Cliente("Bruce Benner", "Dayton", "22111967");
  clientes[4] = Cliente("Steve Rogers", "Lower East Side", "13061981");

  for (Cliente cliente : clientes) {
    cliente.print();
  }

  Especialista especialistas[3];

  especialistas[0] =
      Especialista("Peter Parker", "46", 27061975, 3000, "Fotografia");
  especialistas[1] = Especialista("Tony Stark", "56", 4041965, 1000,
                                  "Consertos de equipamentos eletronicos");
  especialistas[2] = Especialista("Wanda Maximoff", "32", 1611989, 5000,
                                  "Engenharia e Designeeeeer");

  Gerente gerentes[1];
  gerentes[0] = Gerente("Nick Fury", 72, 21121948, 10000);

  Venda vendas[8];
  vendas[0] =
      Venda("J. Jonah Jameson", especialistas[0], "Fotos do Homem Aranha", 100);
  vendas[1] =
      Venda("Bruce Benner", especialistas[1], "Troca da tela do telefone", 100);
  vendas[2] =
      Venda("Norman Osborn", especialistas[0], "Fotos do novo planador", 150);
  vendas[3] =
      Venda("J. Jonah Jameson", especialistas[1], "Recarga de cartucho", 10);
  vendas[4] =
      Venda("Bruce Benner", especialistas[2], "Reconstrucao de Predio", 10000);
  vendas[5] = Venda("Steve Rogers", especialistas[2],
                    "Decoracao de Apartamento no Brooklyn", 3000);
  vendas[6] = Venda("J. Jonah Jameson", especialistas[2],
                    "Reforma do Clarim Diario", 5000);
  vendas[7] = Venda("Otto Octavius", especialistas[1], "Formatacao do PC", 80);

  cout << " \n \n           Relatorio das Vendas \n" << endl;

  for (Venda venda : vendas) {
    venda.print();
    cout << " Descricao: " << venda.descricao << endl;
  }

  cout << " \n \n           Relatorio dos Funcionarios \n" << endl;
  especialistas[0].print();
  cout << "Num Atendimentos: " << especialistas[0].num_atendimentos << endl;
  cout << "Salario Total: "
       << especialistas[0].salario_base + especialistas[0].comissao << endl;

  especialistas[1].print();
  cout << "Num Atendimentos: " << especialistas[1].num_atendimentos << endl;
  cout << "Salario Total: "
       << especialistas[1].salario_base + especialistas[1].comissao << endl;

  especialistas[2].print();
  cout << "Num Atendimentos: " << especialistas[2].num_atendimentos << endl;
  cout << "Salario Total: "
       << especialistas[2].salario_base + especialistas[2].comissao << endl;

  int num_total_servicos = 0;
  num_total_servicos = especialistas[0].num_atendimentos +
                       especialistas[1].num_atendimentos +
                       especialistas[2].num_atendimentos;
  gerentes[0].bonificacao =
      gerentes[0].calcula_BONIFICACAO_GERENTE(num_total_servicos);
  gerentes[0].print();
  cout << "Salario Total: "
       << gerentes[0].salario_base + gerentes[0].bonificacao << endl;

  return 0;
}
