// código que insere um dado no meio de uma lista simplesmente ligada composta por uma quantidade par de dados.
// O dado a inserir deve ser informado pelo usuário. 

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

//  inserir o dado em uma posição específica
bool inserirPos(dado *& lista, int tam, int info, int pos){
    
    if (pos > tam + 1){
        return false;
    }

    else{
        dado * novo = new dado;
        novo -> key = info;
        novo -> prox = NULL;

        if (pos == 1){
            novo -> prox = lista;
            lista = novo;
        }

        else if (pos == tam + 1){
            
            dado * perc = lista;

            while(perc -> prox != NULL){
                perc = perc -> prox;
            }
            
            perc -> prox = novo;
        }

        else{
            dado * perc = lista;
            int cont = 1;
            
            while (cont != pos - 1){
                perc = perc -> prox;
                cont++;
            }

            novo -> prox = perc -> prox;
            perc -> prox = novo;
        }

        return true;
    }
}


int main(){

    int key = 1;
    int tam = 6;
    dado * lista;
    lista = NULL;

    for (int i = 0; i < tam; i++){

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

        key++;
    }
    
    cout << "\nLista original: \n";
    imprimir(lista);

    cout << "\n\nInsira um numero: "; cin >> key;
    inserirPos(lista, 6, key, tam/2 + 1);

    cout << "\n\nLista modificada: \n";
    imprimir(lista);

     
}