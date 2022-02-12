struct dado {
    int key;
    dado * right;
    dado * left;
}

bool buscaVerImp (dado * arv, int info){

    // verificando se tem informação na árvore par fazer a busca
    if (arv == NULL){        
        return false;
    }

// todo dado á esquerda da árvore é maior do que; todo dado a direita da árvore é <= que 
    
    // árvore tem informação que está sendo verificada é igual a que está sendo buscada
    else if (arv -> key == info){  
        cout << arv -> key << " ";
        return true;
    }

    // se a info não for = a info que está sendo buscada, tem que percorrer a árvore
    // utilizando a recursividade
    else if (info > arv -> key){      // dado na subárvore direita, pesquisa vai ser no lado direito
        cout << arv -> key << " ";
        return buscaVerImp(arv -> right, info);
    }

    else if (info < arv -> key){    // busca na esquerda
        cout << arv -> key << " ";
        return buscaVerImp(arv -> left, info);
    }
}

void imprimeOrdem (dado * arv){

    if (arv != NULL){

        // utilizando recursividade
        imprimeOrdem(arv -> left);  // imprime os dados da esquerda
        
        cout << arv -> key << "-"; // imprimir a chave raiz

        imprimeOrdem(arv -> right); // imprimie subarv dir
            
    } 
}

void imprimePreOrdem (dado * arv){

    if (arv != NULL){

        cout << arv-> key << "-";

        imprimePreOrdem(arv -> left);

        imprimePreOrdem(arv -> right);
    }
}

void imprimePosOrdem (dado * arv){

    if (arv != NULL){

        imprimePosOrdem(arv -> left);

        imprimeOrdem(arv -> right);

        cout << arv -> key << "-";
    }
}

// função de busca e verificação
bool buscaVerifica (dado * arv, int key){
    
    if (arv == NULL){     // verificando se o apontador é nulo (arv vazia)
       return false;
    }
    
    else if (arv -> key == key){     // verificando se encontou o dado que estamos buscando
        return true;
    }
    
    else if (arv -> key > key){     // se o dado não for encontrado e o dado for maior que a chave, busca na direita
       return buscaVerifica(arv -> right, key);     
    }
    
    else if (arv -> key < key){     // se o dado não for encontrado e o dado for maior que a chave, busca na esquerda
        return buscaVerifica(arv -> left, key);
    }
}

// busca de verificação e retorno de um ponteiro
dado * buscaRetorna (dado * arv, int key){
    
//     if ((arv == NULL) || (arv -> key == key)){     // reescrevendo as 2 primeiras condições em uma só 
//         return arv;
//     }
    
    if (arv == NULL){     // poderia retornar o arv pois ele é igual a NULL
        return NULL;
    }
    
    else if (arv -> key == key){
        return arv;     // retorna o ponteiro que está apontado para o dado verificado
    }
    
    else if (arv -> key > key){     // fazendo a busca na direita usando recursividade
        return buscaRetorna(arv -> right, key);     
    }
    
    else if (arv -> key < key){     // fazendo a busca na esquerda usando recursividade
        return buscaRetorna(arv -> left, key);
    }
    
}

// retorna um ponteiro p/ o maior elemento da árvore
dado * maior (dado * arv){
    
    if (arv -> right != NULL){     // se o dado a direita do nó verificado não for igual a NULL, a busca continua indo p/ direita
        return maior(arv -> right);
    }
    
    else {     // vai ser o maior dado, pois não tem nenhum outro dado a sua direita
        return arv;
    }
}

// remover dados da árvore
bool remover (dado *& arv, string key){     // como um dado vai ser removido, tem que passar como referencia
    if (arv == NULL){
        return false;     // ela não tem informação
    }
    
    else if (key < a -> key){     // chave buscada é menor do que a chave verificada
        return remover(arv -> left, key);
    }
    
    else if (key > arv -> key){     // chave buscada é maior que a verificada
        return remover(arv -> right, key);
    }
    
    else {
        if ((arv -> left == NULL) && (arv -> right == NULL)){}
    }
}


