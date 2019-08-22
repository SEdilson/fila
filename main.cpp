#include <iostream>
#include "fila.h"

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	string opcao = "";
	Fila* q = criaFila();
	
	int numeroInserido;
	
	cout<<"Selecione uma opcao valida: "<<endl;
	getline(cin, opcao);
	
	cout<<"1 - Inserir elemento na fila"<<endl;
	cout<<"2 - Remover elemento da fila"<<endl;
	cout<<"3 - Ver tamanho da fila"<<endl;
	cout<<"0 - Sair do programa"<<endl;
	
	while(opcao != "0") {
		if(opcao == "1") {
			cout<<"Digite um numero a ser inserido na fila: "<<endl;
			cin>>numeroInserido;
			inserir(q, numeroInserido);
			if(inserir) {
				cout<<"Inserido com sucesso";
			} else {
				cout<<"Erro ao inserir";
			}			
		}
		
		if(opcao == "2") {
			cout<<"Removendo item..."<<endl;
			remover(q, &numeroInserido);
			if(remover) {
				cout<<"Removido com sucesso";
			} else {
				cout<<"Falha ao remover";
			}			
		}
		
		if(opcao == "3") {
			cout<< "O tamanho da fila é: ";
			tamanho(q);			
		}
	}

	return 0;
}
