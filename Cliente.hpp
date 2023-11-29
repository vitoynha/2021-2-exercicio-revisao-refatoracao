#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{
  private:
    string nome;
    string endereco;
    string cep;

  public:
    Cliente() {}
    
    Cliente(string nome, string endereco, string cep);
    
    void print(); // imprime na tela os dados de um cliente cadastrado
    
};

#endif
