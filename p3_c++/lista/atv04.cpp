// Código que imprime os dados de uma lista duplamente ligada do final para o início. 

#include <iostream>

using namespace std;

struct dado{
    
    int key;
    dado * prox;
    dado * ant;
};


int main(){
    
    int key;
    dado * lista;
    lista = NULL;
 
    // inserir 5 dados na lista
    for (int i = 0; i < 5; i++){
       
        cout << "Insira um dado na lista: "; cin >> key;
 
        dado * novo;
        novo = new dado;

        novo -> key = key;
        novo -> prox = NULL;
        novo -> ant = NULL;

        if (lista == NULL){
            lista = novo;
        }

        else{
            dado * perc = lista;
            
            while (perc -> prox != NULL){
                perc = perc -> prox;
            }

            perc -> prox = novo;
            novo -> ant = perc;
        }
    }

    dado * aux = lista;
    while (aux != NULL){

        cout << aux -> key << " - ";
        aux = aux -> prox;
    }
}


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




