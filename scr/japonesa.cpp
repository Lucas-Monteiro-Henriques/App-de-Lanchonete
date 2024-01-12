#include "japonesa.hpp"

std::string Japonesa::descricao() const {
  // TODO: Implemente este metodo.
  /*
   * Note que aqui voce deve retornar uma descricao detalhada da comida
   * japonesa.
   *
   * Exemplos:
   * 1X Comida japonesa - Combo 1, 4 sushis, 5 temakis e 6 hots.
   * 1X Comida japonesa - Combo 2, 5 sushis, 6 temakis e 8 hots.
   */
  string x; 
  x = to_string(m_qtd) + "X Comida japonesa - " + Combo + ", " + to_string(Sushis) + " sushis, " + to_string(Temakis) + " temakis e " + to_string(Hots) + " hots.";
  return x;
}

Japonesa::Japonesa(const std::string& combinado,
                   int sushis,
                   int temakis,
                   int hots,
                   int qtd,
                   float valor_unitario) {
  // TODO: Implemente este metodo.
  m_qtd = qtd;
  m_valor_unitario = valor_unitario;
  Sushis = sushis;
  Temakis = temakis;
  Hots = hots;
  Combo = combinado;
}