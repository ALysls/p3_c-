void imprimir(dado * lista){

    dado * aux = lista;
    while (aux != NULL){

        cout << aux -> dado << " - ";
        aux = aux -> prox;
    }
}

void inserir_inicio(dado *& lista, int info){
    
    dado * novo;
    novo = new dado;

    novo -> key = info;
    novo -> prox = NULL;
    novo -> ant = NULL;

    if (lista == NULL){
        lista = novo;
    }

    else{
        novo -> prox = lista;
        lista -> ant = novo;
        lista = novo;
    }
}

void inserir_fim(dado *& lista, int info){

    dado * novo;
    novo = new dado;

    novo -> key = info;
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

int tamanho(dado * lista){
    
    int cont = 0;
    dado*aux = lista;
    
    while(aux != NULL){
        cont++;
        aux = aux -> prox;
    }
    return cont;
}

bool removeDado(dado *&lista)
{
    int info;

    cout << "Informe o dado:";
    cin >> info;

    if(lista == NULL)
    {
        return false;
    }else
    {
        dado *perc = lista;
        dado *aux;
        while((perc != NULL) && (perc->chave != info))
        {   
            aux = perc;
            perc = perc->prox;
        }
        if(perc == NULL)
        {
            return false;
        }else
        {
            if((perc == lista) && (perc->prox == NULL))
            {
                delete lista;
                return true;
            }else if((perc == lista) && (perc->prox != NULL))
            {
                lista = lista->prox;
                perc->prox = NULL;
                delete perc;
                return true;
            }else
            {
                aux->prox = perc->prox;
                delete perc;
                return true;
            }

        }
    }
}