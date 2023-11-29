#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){
	std::cout << "[Cliente]" << endl
     << "  Nome: " << nome << endl
		 << "  Endereco: " << endereco << endl
		 << "  CEP: " << cep << endl;

}

Cliente::Cliente(string nome, string endereco, string cep) {
  this->nome = nome;
  this->endereco = endereco;
  this->cep = cep;
}
