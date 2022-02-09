// código que remove o dado do meio de uma lista simplesmente encadeada
// composta por uma quantidade impar de dados. 

#include <iostream>
using namespace std;

struct dado{
    int key;
    dado * prox;
};

// imprimir lista
void imprimir(dado * lista){

    while (lista != NULL){
        cout << lista -> key << "  ";
        lista = lista -> prox;
    }
}

// remover elemento de uma posição específica
bool removerPos(dado *& lista, int pos){

    int count;

    dado * atual = lista -> prox;
    dado * ant = lista;

    for (count = 1; count < pos; count ++){
        ant = atual;
        atual = atual -> prox;
    }

    ant -> prox = atual -> prox;
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

    removerPos(lista, tam/2);

    cout << "\n\nLista apos remocao do elemento central: \n";
    imprimir(lista);

     
}