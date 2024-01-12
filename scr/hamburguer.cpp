#include "hamburguer.hpp"

using namespace std; 

std::string Hamburguer::descricao() const {
  // TODO: Implemente este metodo.
  /*
   * Note que aqui voce deve retornar uma descricao detalhada do Hamburguer.
   *
   * Exemplos:
   * 1X Hamburguer X-tudo artesanal.
   * 1X Hamburguer X-tudo simples.
   */
  string x;
  if(artesanall == 1){
    x = to_string(m_qtd) + "X Hamburguer "+ hamburguer_tipo + " artesanal.";
  }
  else if(artesanall != 1){
    x = to_string(m_qtd) + " X Hamburguer" + hamburguer_tipo + " simples.";
  }
  return x;
}

Hamburguer::Hamburguer(const std::string& tipo,
                       bool artesanal,
                       int qtd,
                       float valor_unitario) {

  artesanall = artesanal;
  hamburguer_tipo = tipo;
  m_qtd = qtd;
  m_valor_unitario = valor_unitario;
  // TODO: Implemente este metodo.

}


