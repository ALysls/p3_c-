// que cria e conecta três dados tipo struct. 
// As informações devem ser solicitados ao usuário.

#include <iostream>
using namespace std;
 
struct dado{
    int num;
    dado * prox;
};
 
int main(){
 
    int num;
    dado * pont;
    pont = NULL;
 
    for (int i = 0; i < 3; i++){
        cout << "Insira um numero: "; cin >> num;
 
        dado * novo;
        novo = new dado;
        novo -> num = num;
        novo -> prox = pont;
	  pont = novo;	
    }
}
