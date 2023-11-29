#include "Especialista.hpp"

static double perc = 0.1;

double Especialista::calcularComissao(double ValorVenda) {
  double c = ValorVenda*perc;
  return c;
}


void Especialista::print() {
  std::cout << "[Especialista]" << endl;
  Funcionario::print();

  std::cout << "  Nome: " << nome << endl
  << "  SalarioBase: R$ " << fixed << setprecision(2) << salario_base <<endl;
}
