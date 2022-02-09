//  Código que apresenta para o usuário e remove cada dado de uma lista duplamente ligada. 
// A remoção deve ser realizada do final da lista para o início. 

#include <iostream>

using namespace std;

struct dado {

    dado * prox;
    dado * ant;
    int key;

};

int main(){
    
    int key = 1;
    dado * lista;
    lista = NULL;
 
    // inserir 5 dados na lista
    for (int i; i < 5; i++){
 
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