// código que insere 4 dados em uma pilha e remove todos os dados. 
// Antes de remover cada dado da pilha, apresentar as informações do dado ao usuário.

// #include <iostream>

// using namespace std;

// // criação do struct
// struct dado{
//     int key;
//     dado * prox;
// };

// // imprimir os valores da pilha
// void imprimir(dado * pilha){

//     while(pilha != NULL){

//         cout << pilha -> key << "\n";
//         pilha = pilha -> prox;
        
//     }
   
// }

// int main(){

//     int key, i;
//     dado * pilha;
//     pilha = NULL;

//     // inserir 5 dados na pilha
//     for (int i = 0; i < 4; i++){
        
//         cout << "Insira um dado na pilha: "; cin >> key;

//         dado * novo;
//         novo = new dado;
//         novo -> key = key;
//         novo -> prox = pilha;

//         if (pilha == NULL){
//             pilha = novo;
//         }

//         else{
//             novo -> prox = pilha;
//             pilha = novo;
//         }
//     }
    
//     cout << "\nPilha antes da remocao: \n";
//     imprimir(pilha);

//     // deletar a pilha
//     for (int i = 0; i < 5; i++){

        

//         if (pilha == NULL){
//             cout << "Pilha vazia!";
//         }

//         else{
//             dado * aux;
//             aux = pilha;
//             pilha = pilha -> prox;
//             aux -> prox = NULL;
//             delete aux;
            
//             cout << "\nPilha:\n";
//             imprimir(pilha);
            
        
//         }

//     }

// }



// código que insere 6 dados em uma fila e remove 3. 
// As informações dos dados devem ser solicitadas ao usuário.


#include <iostream>

using namespace std;

struct dado{
    int key;
    dado * prox;
};


void imprimir(dado * lista){

    while (lista != NULL){
        cout << lista -> key << "-";
        lista = lista -> prox;
    }
}

bool remover_inicio(dado *& lista){
    if (lista == NULL){
        return false;
    }

    else{
        dado * aux;
        aux = lista;
        lista = lista -> prox;
        aux -> prox = NULL;
        delete aux;
        return true;
    }
}

int main(){

    int key, i;
    dado * fila;
    fila = NULL;

    for (i = 0; i < 6; i++){
        
        cout << "Insira um numero: "; cin >> key;

        dado * novo;
        novo = new dado;
        novo -> key = key;
        novo -> prox = NULL;

        if (fila == NULL){
            fila = novo;
        }

        else{
            novo -> prox = fila;
            fila = novo;
        }   
    }
    
    cout << "\nFila original: \n";
    imprimir(fila);


    for (i = 0; i < 3; i++){
        remover_inicio(fila);
    }

    cout << "\n\nFila modificada: \n";
    imprimir(fila);

     
}