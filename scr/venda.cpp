#include "venda.hpp"

#include <iomanip>


Venda::~Venda() {
  // TODO: Implemente este metodo
  /**
   * Aqui voce deve deletar os ponteiros contidos na lista m_pedidos
   */

}

void Venda::adicionaPedido(Pedido* p) {

  // TODO: Implemente este metodo
  m_pedidos.push_back(p);
}

void Venda::imprimeRelatorio() const {
  // TODO: Implemente este metodo
  /**
   * Aqui voce tem que percorrer a lista de todos os pedidos e imprimir o resumo
   * de cada um. Por ultimo, devera ser exibido o total de venda e a quantidade
   * de pedidos processados.
   */
    double soma = 0;
    int quantidade = 0;
    for(auto it : m_pedidos){
        quantidade++;
        cout<< "Pedido " <<quantidade<<endl;
        cout<<it->resumo()<<endl;
        soma += it->calculaTotal();
    }
  cout << "Relatorio de Vendas" << endl;
  cout << "Total de vendas: R$ " << soma << endl;
  cout << "Total de pedidos: " << quantidade << endl;  
}
  