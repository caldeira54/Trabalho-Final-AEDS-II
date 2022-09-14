void BubbleSort(int lista[],int tamanho,long long int *comparacoes){

    int troca,aux;

    for(int i = 0;i < tamanho - 1;i++){
        troca = 0;
        for(int j = 1;j < tamanho - i;j++){
            if(lista[j] < lista[j - 1]){
                aux = lista[j];
                lista[j] = lista[j - 1];
                lista[j - 1] = aux;
                troca = 1;
                (*comparacoes)++;
            } else {
                (*comparacoes)++;
            }
        }
        if(troca == 0){
            return;
        }
    }
}

void InsertionSort(int *v,int n,long long int *comparacoes){

    int i = 0,j = 1,aux = 0;

    while(j < n){
        aux = v[j];
        i = j - 1;
        (*comparacoes)++;
        while(i >= 0 && v[i] > aux){
            v[i + 1] = v[i];
            i--;
            (*comparacoes)++;
        }
        v[i + 1] = aux;
        j++;
    }
}

void Intercala(int lista[],int inicio,int meio,int fim,long long int *comparacoes){

    int *listaAux = (int *)malloc(sizeof(int) * (fim + 1));
    int i,j;

    for(i = inicio;i <= meio;i++){
        listaAux[i] = lista[i];
    }
    for(j = meio + 1;j <= fim;j++){
        listaAux[fim + meio + 1 - j] = lista[j];
    }

    i = inicio;
    j = fim;

    for(int k = inicio;k <= fim;k++){
        (*comparacoes)++;
        if(listaAux[i] <= listaAux[j]){
            lista[k] = listaAux[i];
            i++;
        } else {
            lista[k] = listaAux[j];
            j--;
        }
    }
    free(listaAux);
}

void MergeSort(int lista[],int inicio,int fim,long long int *comparacoes){

    int meio;

    if(inicio < fim){
        meio = (inicio + fim) / 2;
        MergeSort(lista,inicio,meio,comparacoes);
        MergeSort(lista,meio + 1,fim,comparacoes);
        Intercala(lista,inicio,meio,fim,comparacoes);
        (*comparacoes)++;
    }
}

void QuickSort(int lista[],int esq,int dir,long long int *comparacoes){

    int temp, i = esq,j = dir;
    int pivo = lista[(esq + dir) / 2];

    while(i <= j){
        while(lista[i] < pivo){
            i++;
        }
        while(lista[j] > pivo){
            j--;
        }
        (*comparacoes)++;
        if(i <= j){
            temp = lista[i];
            lista[i] = lista[j];
            lista[j] = temp;
            i++;
            j--;
        }
    }
    (*comparacoes)++;
    if(esq < j){
        QuickSort(lista,esq,j,comparacoes);
    }
    if(i < dir){
        QuickSort(lista,i,dir,comparacoes);
    }
}

void SelectionSort(int lista[],int n,long long int *comparacoes){

    int min,aux;

    for(int i = 0;i < n;i++){
        min = i;
        for(int j = i + 1;j < n;j++){
            if(lista[j] < lista[min]){
                min = j;
                (*comparacoes)++;
            } else {
                (*comparacoes)++;
            }
        }
        aux = lista[i];
        lista[i] = lista[min];
        lista[min] = aux;
    }
}

void ShellSort(int *vet, int size,long long int *comparacoes){
    int i, j, value;

    int h = 1;
    while(h < size) {
        h = 3*h+1;
    }

    while (h > 0){
        for(i = h; i < size; i++) {
            value = vet[i];
            j = i;
            while (j > h-1 && value <= vet[j - h]) {
                vet[j] = vet[j - h];
                j = j - h;
                (*comparacoes)++;
            }
            vet[j] = value;
            (*comparacoes)++;
        }
        h = h/3;
        (*comparacoes)++;
    }
}
