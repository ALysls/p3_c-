// código  que insere 5 dados em uma pilha e remove 2 dados de uma pilha. 
// As informações dos dados devem ser solicitadas ao usuário.


#include <iostream>
 
using namespace std;
 
// criação do struct
struct dado{
    int key;
    dado * prox;
};
 
 
int main(){
 
    int key, i;
    dado * pilha;
    pilha = NULL;
 
    // inserir 5 dados na pilha
    for (int i = 0; i < 5; i++){
       
        cout << "Insira um dado na pilha: "; cin >> key;
 
        dado * novo;
        novo = new dado;
        novo -> key = key;
        novo -> prox = pilha;
 
        if (pilha == NULL){
            pilha = novo;
        }
 
        else{
            novo -> prox = pilha;
            pilha = novo;
        }
    }
 
    // deletar 3 dados da pilha
    for (int i = 0; i < 3; i++){
       
        if (pilha == NULL){
        cout << "Pilha vazia!";
        }
 
        else{
            dado * aux;
            aux = pilha;
            pilha = pilha -> prox;
            aux -> prox = NULL;
            delete aux;
        }
 
    }
 
}
