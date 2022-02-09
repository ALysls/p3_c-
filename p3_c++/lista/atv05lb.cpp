// crie uma função em c++ que apaga todos os dados
// de uma árvore binária 

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