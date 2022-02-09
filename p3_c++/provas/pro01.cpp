// código que remove todos os dados de uma lista simplesmente ligada.

#include <iostream>
using namespace std;

struct dado{
    int key;
    dado * prox;
};

void removerInicio(dado *& lista){
	
	if (lista -> prox == NULL)
		cout << "\n\nLista vazia!";
	
    else{
		dado * aux = lista;
        lista = lista -> prox;
        aux -> prox = NULL;
        delete aux;
    }
}

void imprimir(dado * lista){

    while (lista != NULL){
        cout << lista -> key << "  ";
        lista = lista -> prox;
    }
}

int main(){

    int key;
    int tam = 5;
    dado * lista;
    lista = NULL;

    for (int i = 0; i < tam; i++){

        cout << "Insira um numero: "; cin >> key;
        
        dado * novo;
        novo = new dado;
        novo -> key = key;
        novo -> prox = NULL;

        if (lista == NULL){
            lista = novo;
        }

        else{
            dado * perc = lista;
            
            while(perc -> prox != NULL){
                perc = perc -> prox;
            }
            perc -> prox = novo;
        }   

    }
    
    cout << "\nLista original: \n";
    imprimir(lista);

    for (int i = 0; i < tam; i++){
        removerFim(lista);
    }

}

// Código que imprime os dados de uma lista duplamente ligada do final para o início. 


#include <iostream>
using namespace std;

struct dado{
    
    int key;
    dado * prox;
    dado * ant;
    
};

dado * inicio;
dado * fim;
int key;

int main(){

    // inserir dados no fim da lista
    for (int i = 0; i < 5; i++){
        
        cout << "Insira um dado na lista: "; cin >> key;

        dado * novo;
        novo = new dado;
        novo -> key = key;

        if (inicio == NULL){
            inicio = novo;
            fim = novo;
        }

        else{
            dado * atual;
            atual = fim;
            novo -> ant = atual;
            novo -> prox = novo;
            fim = novo;
        }

    }

    // imprimir a lista inversa
    
    dado * atual;
    atual = fim;

    cout << "\nLista inversa: ";
    
    while(atual){
        cout << atual -> key << "  ";
        atual = atual -> ant;
    }
}

