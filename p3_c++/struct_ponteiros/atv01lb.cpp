// código que utilizando uma estrutura de repetição apaga 5 dados tipo struct de um conjunto de dados 
// composto por 8 dados tipo struct conectados. 
// As informações dos dados tipo struct devem ser solicitadas ao usuário. 
// Cada dado struct deve armazenar nome e idade de uma cidade.


#include <iostream>
using namespace std;
 
struct cidade{
    string nome;
    int idade;
    cidade * prox;
};
 
void mostrar_cidade(cidade *ptr);
 
int main(){
 
    string nome;
    int idade;
    cidade * pnt;
    pnt = NULL;
 
    for (int i = 0; i < 8; i++){
       
        cout << "Nome da cidade: "; cin >> nome;
        cout << "Idade da cidade: "; cin >> idade;
 
        cidade * novo;
        novo = new cidade;
        novo -> nome = nome;
        novo -> idade = idade;
        novo -> prox = pnt;
        pnt = novo;
       
    }
 
    cidade * p;
 
    for (int i = 0; i < 5; i++){
 
        p = pnt;
        pnt = pnt -> prox;
        p -> prox = NULL;
        delete p;
 
    }
 
