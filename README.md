
App de uma lanchonete
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Durante a pandemia, a utilização de aplicativos para fazer pedidos em restaurantes e supermercados se tornou muito comum.

Neste problema, eu simulei o recebimento de pedidos de um restaurante que faz vendas por aplicativo.

Para fazer essa simulação de recebimento de pedidos, foi implementado seis classes: Venda, Pedido, Produto, Pizza, Hamburguer e Japonesa. 



A classe Produto armazena as seguintes informações:

Produto
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 
quantidade: int
val_unitario: float
As classes Pizza, Hamburguer e Japonesa são subclasse de Produto e possuir as seguintes especificações:
Pizza

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
- sabor: string
- pedacos: int
- borda_recheada: bool
+ Pizza(string sabor, int pedacos, bool borda_recheada, int qtd, float valor_unitario)
Hamburguer
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
- tipo: string
- artesanal: bool
+ Hamburguer(string tipo, bool artesanal, int qtd, float valor_unitario)

Japonesa
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
- combinado: string
- sushis: int
- temakis: int
- hots: int
+ Japonesa(string combinado, int sushis, int temakis, int hots, int qtd, float valor_unitario)
A classe Pedido tem uma lista de produtos, o endereco de entrega e os seguintes métodos foram implementados :

Pedido
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
- produtos: std::list<Produto*>
- endereco: string
+ adicionaProduto(Produto* p): void
+ calculaTotal(): float
+ resumo(): string
+ setEndereco(string endereco): void
Breve descrição:

void adicionaProduto(Produto* p); // adiciona um produto ao pedido
float calculaTotal(); // calcula e retorna o valor total do pedido
string resumo(); // retorna um resumo do pedido (uma descrição de todos os produtos que fazem parte do pedido e o endereço de entrega no final)
setEndereco(string endereco); // atualiza o endereço de entrega do pedido

A classe Venda, tem uma lista de pedidos recebidos e os métodos a seguir:

Venda
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
- pedidos: std::list<Pedido*>
+ adicionaPedido(Pedido* p): void
+ imprimeRelatorio(): void
Breve descrição:

void adicionaPedido(Pedido* p); // adiciona um pedido à lista de pedidos recebidos
void imprimeRelatorio(); // imprime a lista completa de todos pedidos processados, o total de vendas e a quantidade de pedidos recebidos
Help
