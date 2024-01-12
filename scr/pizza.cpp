#include "pizza.hpp"

using namespace std;

std::string Pizza::descricao() const {
  // TODO: Implemente este metodo.
  /*
   * Note que aqui voce deve retornar uma descricao detalhada da pizza.
   *
   * Exemplos:
   * 2X Pizza Calabresa, 4 pedacos e borda recheada.
   * 2X Pizza Calabresa, 4 pedacos e sem borda recheada.
   */
  string x;
  
  if(Borda == 1){
    x = std::to_string(m_qtd) + "X Pizza " + Sabor + ", " + std::to_string(Pedacos) + " pedacos e borda recheada.";
  }else{
    x = to_string(m_qtd) + "X Pizza " + Sabor + ", " + to_string(Pedacos) + " pedacos e sem borda recheada.";
  }
  return x;
}

Pizza::Pizza(const std::string& sabor,
             int pedacos,
             bool borda_recheada,
             int qtd,
             float valor_unitario) {
  m_qtd = qtd;
  m_valor_unitario = valor_unitario;
  Pedacos = pedacos;
  Borda = borda_recheada;
  Sabor = sabor;
  // TODO: Implemente este metodo.
}