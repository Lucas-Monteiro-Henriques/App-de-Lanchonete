#include "pedido.hpp"


Pedido::~Pedido() {
  // TODO: Implemente este metodo.
  /**
   * Aqui voce deve deletar os ponteiros contidos na lista m_produtos
   */
   for (auto x : m_produtos) {
    delete x;
  } 
}

void Pedido::setEndereco(const std::string& endereco) {

  // TODO: Implemente este metodo.
  m_endereco = endereco; 

}

float Pedido::calculaTotal() const {
  double soma = 0;
  // TODO: Implemente este metodo.
  for(auto it : m_produtos){
    soma += it->getQtd() * it->getValor();
  }

  return soma;
}

void Pedido::adicionaProduto(Produto* p) {

  // TODO: Implemente este metodo.
  m_produtos.push_back(p);
}

std::string Pedido::resumo() const {
  string x;
  // TODO: Implemente este metodo.
  /**
   * Aqui voce deve percorrer a lista de produtos para criar um resumo completo
   * do pedido. A cada iteracao, utilize o metodo descricao de cada produto para
   * montar o resumo do pedido. Por fim, adicione o endereco de entrega.
   *
   */
  for(auto it : m_produtos){
    x += it->descricao() + m_endereco + "\n";
  }
  return x;
}