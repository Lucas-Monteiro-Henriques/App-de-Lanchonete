release: main 

debug: obj/produto.o obj/hamburguer.o obj/pizza.o obj/japonesa.o obj/pedido.o obj/venda.o obj/util.o obj/main.o
	   c++ -g obj/produto.o obj/hamburguer.o obj/pizza.o obj/japonesa.o obj/pedido.o obj/venda.o obj/util.o obj/main.o -o main.exe

main: obj/produto.o obj/hamburguer.o obj/pizza.o obj/japonesa.o obj/pedido.o obj/venda.o obj/util.o obj/main.o 
	  c++ obj/produto.o obj/hamburguer.o obj/pizza.o obj/japonesa.o obj/pedido.o obj/venda.o obj/util.o obj/main.o -o main.exe

obj/util.o:


obj/venda.o: 


obj/pedido.o:


obj/hamburguer.o:


obj/pizza.o:


obj/japonesa.o:


obj/produto.o:





clean:
	rm main obj/*


