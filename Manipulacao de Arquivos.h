#define MIL 1000
#define DEZMIL 10000
#define CEMMIL 100000

// Realiza a leitura do arquivo de 1000 numeros
void FileRead1000(FILE **arq, int *v,int opms){

    if(opms == 1){
        *arq = fopen("ListaAleatoria-1000.txt","r"); // Abre o arquivo

        int i = 0;
        while(!feof(*arq)){
            fscanf(*arq,"%d", &v[i]); // Realiza a leitura dos valores do arquivo e guarda em um vetor
            i++;
        }

        fclose(*arq); // Fecha o arquivo
    } else if(opms == 2){
        *arq = fopen("ListaQuaseOrdenada-1000.txt","r"); // Abre o arquivo

        int i = 0;
        while(!feof(*arq)){
            fscanf(*arq,"%d", &v[i]); // Realiza a leitura dos valores do arquivo e guarda em um vetor
            i++;
        }

        fclose(*arq); // Fecha o arquivo
    } else if(opms == 3){
        *arq = fopen("ListaInversamenteOrdenada-1000.txt","r"); // Abre o arquivo

        int i = 0;
        while(!feof(*arq)){
            fscanf(*arq,"%d", &v[i]); // Realiza a leitura dos valores do arquivo e guarda em um vetor
            i++;
        }

        fclose(*arq); // Fecha o arquivo
    } else {
        *arq = fopen("ListaOrdenada-1000.txt","r"); // Abre o arquivo

        int i = 0;
        while(!feof(*arq)){
            fscanf(*arq,"%d", &v[i]); // Realiza a leitura dos valores do arquivo e guarda em um vetor
            i++;
        }

        fclose(*arq); // Fecha o arquivo
    }
}

// Realiza a leitura do arquivo de 10000 numeros
void FileRead10000(FILE **arq, int *v,int opms){

    if(opms == 5){
        *arq = fopen("ListaAleatoria-10000.txt","r"); // Abre o arquivo

        int i = 0;
        while(!feof(*arq)){
            fscanf(*arq,"%d", &v[i]); // Realiza a leitura dos valores do arquivo e guarda em um vetor
            i++;
        }

        fclose(*arq); // Fecha o arquivo
    } else if(opms == 6){
        *arq = fopen("ListaQuaseOrdenada-10000.txt","r"); // Abre o arquivo

        int i = 0;
        while(!feof(*arq)){
            fscanf(*arq,"%d", &v[i]); // Realiza a leitura dos valores do arquivo e guarda em um vetor
            i++;
        }

        fclose(*arq); // Fecha o arquivo
    } else if(opms == 7){
        *arq = fopen("ListaInversamenteOrdenada-10000.txt","r"); // Abre o arquivo

        int i = 0;
        while(!feof(*arq)){
            fscanf(*arq,"%d", &v[i]); // Realiza a leitura dos valores do arquivo e guarda em um vetor
            i++;
        }

        fclose(*arq); // Fecha o arquivo
    } else {
        *arq = fopen("ListaOrdenada-10000.txt","r"); // Abre o arquivo

        int i = 0;
        while(!feof(*arq)){
            fscanf(*arq,"%d", &v[i]); // Realiza a leitura dos valores do arquivo e guarda em um vetor
            i++;
        }

        fclose(*arq); // Fecha o arquivo
    }
}

// Realiza a leitura do arquivo de 100000 numeros
void FileRead100000(FILE **arq, int *v,int opms){

    if(opms == 9){
        *arq = fopen("ListaAleatoria-100000.txt","r"); // Abre o arquivo

        int i = 0;
        while(!feof(*arq)){
            fscanf(*arq,"%d", &v[i]); // Realiza a leitura dos valores do arquivo e guarda em um vetor
            i++;
        }

        fclose(*arq); // Fecha o arquivo
    } else if(opms == 10){
        *arq = fopen("ListaQuaseOrdenada-100000.txt","r"); // Abre o arquivo

        int i = 0;
        while(!feof(*arq)){
            fscanf(*arq,"%d", &v[i]); // Realiza a leitura dos valores do arquivo e guarda em um vetor
            i++;
        }

        fclose(*arq); // Fecha o arquivo
    } else if(opms == 11){
        *arq = fopen("ListaInversamenteOrdenada-100000.txt","r"); // Abre o arquivo

        int i = 0;
        while(!feof(*arq)){
            fscanf(*arq,"%d", &v[i]); // Realiza a leitura dos valores do arquivo e guarda em um vetor
            i++;
        }

        fclose(*arq); // Fecha o arquivo
    } else {
        *arq = fopen("ListaOrdenada-100000.txt","r"); // Abre o arquivo

        int i = 0;
        while(!feof(*arq)){
            fscanf(*arq,"%d", &v[i]); // Realiza a leitura dos valores do arquivo e guarda em um vetor
            i++;
        }

        fclose(*arq); // Fecha o arquivo
    }
}

// Reakiza a gravacao no arquivo
void WriteFile(FILE **arq,long double tempoDecorrido,long int comparacoes,int opmi,int opms){

    if(opms == 1){
        if(opmi == 1){
            *arq = fopen("LA - Bubble Sort com 1000 numeros.txt","a"); // LA = lista aleatoria

            fprintf(*arq,"Bubble Sort : ");                          // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else if(opmi == 2){
            *arq = fopen("LA - Selection Sort com 1000 numeros.txt","a"); // LA = lista aleatoria

            fprintf(*arq,"Selection Sort : ");                       // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else if(opmi == 3){
            *arq = fopen("LA - Insertion Sort com 1000 numeros.txt","a"); // LA = lista aleatoria

            fprintf(*arq,"Insertion Sort : ");                       // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else if(opmi == 4){
            *arq = fopen("LA - Shell Sort com 1000 numeros.txt","a"); // LA = lista aleatoria

            fprintf(*arq,"Shell Sort : ");                           // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else if(opmi == 5){
            *arq = fopen("LA - Quick Sort com 1000 numeros.txt","a"); // LA = lista aleatoria

            fprintf(*arq,"Quick Sort : ");                           // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else {
            *arq = fopen("LA - Merge Sort com 1000 numeros.txt","a"); // LA = lista aleatoria

            fprintf(*arq,"Merge Sort : ");                           // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        }

    } else if(opms == 2){
        if(opmi == 1){
            *arq = fopen("LQO - Bubble Sort com 1000 numeros.txt","a"); // LQO = lista quase ordenada

            fprintf(*arq,"Bubble Sort : ");                          // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else if(opmi == 2){
            *arq = fopen("LQO - Selection Sort com 1000 numeros.txt","a"); // LQO = lista quase ordenada

            fprintf(*arq,"Selection Sort : ");                       // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else if(opmi == 3){
            *arq = fopen("LQO - Insertion Sort com 1000 numeros.txt","a"); // LQO = lista quase ordenada

            fprintf(*arq,"Insertion Sort : ");                       // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else if(opmi == 4){
            *arq = fopen("LQO - Shell Sort com 1000 numeros.txt","a"); // LQO = lista quase ordenada

            fprintf(*arq,"Shell Sort : ");                           // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else if(opmi == 5){
            *arq = fopen("LQO - Quick Sort com 1000 numeros.txt","a"); // LQO = lista quase ordenada

            fprintf(*arq,"Quick Sort : ");                           // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else {
            *arq = fopen("LQO - Merge Sort com 1000 numeros.txt","a"); // LQO = lista quase ordenada

            fprintf(*arq,"Merge Sort : ");                           // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        }
    } else if(opms == 3){
        if(opmi == 1){
            *arq = fopen("LIO - Bubble Sort com 1000 numeros.txt","a"); // LIO = lista inversamente ordenada

            fprintf(*arq,"Bubble Sort : ");                          // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else if(opmi == 2){
            *arq = fopen("LIO - Selection Sort com 1000 numeros.txt","a"); // LIO = lista inversamente ordenada

            fprintf(*arq,"Selection Sort : ");                       // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else if(opmi == 3){
            *arq = fopen("LIO - Insertion Sort com 1000 numeros.txt","a"); // LIO = lista inversamente ordenada

            fprintf(*arq,"Insertion Sort : ");                       // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else if(opmi == 4){
            *arq = fopen("LIO - Shell Sort com 1000 numeros.txt","a"); // LIO = lista inversamente ordenada

            fprintf(*arq,"Shell Sort : ");                           // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else if(opmi == 5){
            *arq = fopen("LIO - Quick Sort com 1000 numeros.txt","a"); // LIO = lista inversamente ordenada

            fprintf(*arq,"Quick Sort : ");                           // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else {
            *arq = fopen("LIO - Merge Sort com 1000 numeros.txt","a"); // LIO = lista inversamente ordenada

            fprintf(*arq,"Merge Sort : ");                           // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        }
    } else if(opms == 4){
        if(opmi == 1){
            *arq = fopen("LO - Bubble Sort com 1000 numeros.txt","a"); // LO = lista ordenada

            fprintf(*arq,"Bubble Sort : ");                          // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else if(opmi == 2){
            *arq = fopen("LO - Selection Sort com 1000 numeros.txt","a"); // LO = lista ordenada

            fprintf(*arq,"Selection Sort : ");                       // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else if(opmi == 3){
            *arq = fopen("LO - Insertion Sort com 1000 numeros.txt","a"); // LO = lista ordenada

            fprintf(*arq,"Insertion Sort : ");                       // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else if(opmi == 4){
            *arq = fopen("LO - Shell Sort com 1000 numeros.txt","a"); // LO = lista ordenada

            fprintf(*arq,"Shell Sort : ");                           // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else if(opmi == 5){
            *arq = fopen("LO - Quick Sort com 1000 numeros.txt","a"); // LO = lista ordenada

            fprintf(*arq,"Quick Sort : ");                           // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else {
            *arq = fopen("LO - Merge Sort com 1000 numeros.txt","a"); // LO = lista ordenada

            fprintf(*arq,"Merge Sort : ");                           // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        }
    } else if(opms == 5){
        if(opmi == 1){
            *arq = fopen("LA - Bubble Sort com 10000 numeros.txt","a"); // LA = lista aleatoria

            fprintf(*arq,"Bubble Sort : ");                          // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else if(opmi == 2){
            *arq = fopen("LA - Selection Sort com 10000 numeros.txt","a"); // LA = lista aleatoria

            fprintf(*arq,"Selection Sort : ");                       // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else if(opmi == 3){
            *arq = fopen("LA - Insertion Sort com 10000 numeros.txt","a"); // LA = lista aleatoria

            fprintf(*arq,"Insertion Sort : ");                       // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else if(opmi == 4){
            *arq = fopen("LA - Shell Sort com 10000 numeros.txt","a"); // LA = lista aleatoria

            fprintf(*arq,"Shell Sort : ");                           // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else if(opmi == 5){
            *arq = fopen("LA - Quick Sort com 10000 numeros.txt","a"); // LA = lista aleatoria

            fprintf(*arq,"Quick Sort : ");                           // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else {
            *arq = fopen("LA - Merge Sort com 10000 numeros.txt","a"); // LA = lista aleatoria

            fprintf(*arq,"Merge Sort : ");                           // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        }
    } else if(opms == 6){
        if(opmi == 1){
            *arq = fopen("LQO - Bubble Sort com 10000 numeros.txt","a"); // LQO = lista quase ordenada

            fprintf(*arq,"Bubble Sort : ");                          // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else if(opmi == 2){
            *arq = fopen("LQO - Selection Sort com 10000 numeros.txt","a"); // LQO = lista quase ordenada

            fprintf(*arq,"Selection Sort : ");                       // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else if(opmi == 3){
            *arq = fopen("LQO - Insertion Sort com 10000 numeros.txt","a"); // LQO = lista quase ordenada

            fprintf(*arq,"Insertion Sort : ");                       // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else if(opmi == 4){
            *arq = fopen("LQO - Shell Sort com 10000 numeros.txt","a"); // LQO = lista quase ordenada

            fprintf(*arq,"Shell Sort : ");                           // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else if(opmi == 5){
            *arq = fopen("LQO - Quick Sort com 10000 numeros.txt","a"); // LQO = lista quase ordenada

            fprintf(*arq,"Quick Sort : ");                           // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else {
            *arq = fopen("LQO - Merge Sort com 10000 numeros.txt","a"); // LQO = lista quase ordenada

            fprintf(*arq,"Merge Sort : ");                           // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        }
    } else if(opms == 7){
        if(opmi == 1){
            *arq = fopen("LIO - Bubble Sort com 10000 numeros.txt","a"); // LIO = lista inversamente ordenada

            fprintf(*arq,"Bubble Sort : ");                          // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else if(opmi == 2){
            *arq = fopen("LIO - Selection Sort com 10000 numeros.txt","a"); // LIO = lista inversamente ordenada

            fprintf(*arq,"Selection Sort : ");                       // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else if(opmi == 3){
            *arq = fopen("LIO - Insertion Sort com 10000 numeros.txt","a"); // LIO = lista inversamente ordenada

            fprintf(*arq,"Insertion Sort : ");                       // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else if(opmi == 4){
            *arq = fopen("LIO - Shell Sort com 10000 numeros.txt","a"); // LIO = lista inversamente ordenada

            fprintf(*arq,"Shell Sort : ");                           // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else if(opmi == 5){
            *arq = fopen("LIO - Quick Sort com 10000 numeros.txt","a"); // LIO = lista inversamente ordenada

            fprintf(*arq,"Quick Sort : ");                           // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else {
            *arq = fopen("LIO - Merge Sort com 10000 numeros.txt","a"); // LIO = lista inversamente ordenada

            fprintf(*arq,"Merge Sort : ");                           // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        }
    } else if(opms == 8){
        if(opmi == 1){
            *arq = fopen("LO - Bubble Sort com 10000 numeros.txt","a"); // LO = lista ordenada

            fprintf(*arq,"Bubble Sort : ");                          // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else if(opmi == 2){
            *arq = fopen("LO - Selection Sort com 10000 numeros.txt","a"); // LO = lista ordenada

            fprintf(*arq,"Selection Sort : ");                       // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else if(opmi == 3){
            *arq = fopen("LO - Insertion Sort com 10000 numeros.txt","a"); // LO = lista ordenada

            fprintf(*arq,"Insertion Sort : ");                       // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else if(opmi == 4){
            *arq = fopen("LO - Shell Sort com 10000 numeros.txt","a"); // LO = lista ordenada

            fprintf(*arq,"Shell Sort : ");                           // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else if(opmi == 5){
            *arq = fopen("LO - Quick Sort com 10000 numeros.txt","a"); // LO = lista ordenada

            fprintf(*arq,"Quick Sort : ");                           // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else {
            *arq = fopen("LO - Merge Sort com 10000 numeros.txt","a"); // LO = lista ordenada

            fprintf(*arq,"Merge Sort : ");                           // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        }
    } else if(opms == 9){
        if(opmi == 1){
            *arq = fopen("LA - Bubble Sort com 100000 numeros.txt","a"); // LA = lista aleatoria

            fprintf(*arq,"Bubble Sort : ");                          // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else if(opmi == 2){
            *arq = fopen("LA - Selection Sort com 100000 numeros.txt","a"); // LA = lista aleatoria

            fprintf(*arq,"Selection Sort : ");                       // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %LLf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else if(opmi == 3){
            *arq = fopen("LA - Insertion Sort com 100000 numeros.txt","a"); // LA = lista aleatoria

            fprintf(*arq,"Insertion Sort : ");                       // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else if(opmi == 4){
            *arq = fopen("LA - Shell Sort com 100000 numeros.txt","a"); // LA = lista aleatoria

            fprintf(*arq,"Shell Sort : ");                           // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else if(opmi == 5){
            *arq = fopen("LA - Quick Sort com 100000 numeros.txt","a"); // LA = lista aleatoria

            fprintf(*arq,"Quick Sort : ");                           // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else {
            *arq = fopen("LA - Merge Sort com 100000 numeros.txt","a"); // LA = lista aleatoria

            fprintf(*arq,"Merge Sort : ");                           // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        }
    } else if(opms == 10){
        if(opmi == 1){
            *arq = fopen("LQO - Bubble Sort com 100000 numeros.txt","a"); // LQO = lista quase ordenada

            fprintf(*arq,"Bubble Sort : ");                          // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else if(opmi == 2){
            *arq = fopen("LQO - Selection Sort com 100000 numeros.txt","a"); // LQO = lista quase ordenada

            fprintf(*arq,"Selection Sort : ");                       // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else if(opmi == 3){
            *arq = fopen("LQO - Insertion Sort com 100000 numeros.txt","a"); // LQO = lista quase ordenada

            fprintf(*arq,"Insertion Sort : ");                       // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else if(opmi == 4){
            *arq = fopen("LQO - Shell Sort com 100000 numeros.txt","a"); // LQO = lista quase ordenada

            fprintf(*arq,"Shell Sort : ");                           // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else if(opmi == 5){
            *arq = fopen("LQO - Quick Sort com 100000 numeros.txt","a"); // LQO = lista quase ordenada

            fprintf(*arq,"Quick Sort : ");                           // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else {
            *arq = fopen("LQO - Merge Sort com 100000 numeros.txt","a"); // LQO = lista quase ordenada

            fprintf(*arq,"Merge Sort : ");                           // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        }
    } else if(opms == 11){
        if(opmi == 1){
            *arq = fopen("LIO - Bubble Sort com 100000 numeros.txt","a"); // LIO = lista inversamente ordenada

            fprintf(*arq,"Bubble Sort : ");                          // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else if(opmi == 2){
            *arq = fopen("LIO - Selection Sort com 100000 numeros.txt","a"); // LIO = lista inversamente ordenada

            fprintf(*arq,"Selection Sort : ");                       // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else if(opmi == 3){
            *arq = fopen("LIO - Insertion Sort com 100000 numeros.txt","a"); // LIO = lista inversamente ordenada

            fprintf(*arq,"Insertion Sort : ");                       // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else if(opmi == 4){
            *arq = fopen("LIO - Shell Sort com 100000 numeros.txt","a"); // LIO = lista inversamente ordenada

            fprintf(*arq,"Shell Sort : ");                           // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else if(opmi == 5){
            *arq = fopen("LIO - Quick Sort com 100000 numeros.txt","a"); // LIO = lista inversamente ordenada

            fprintf(*arq,"Quick Sort : ");                           // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else {
            *arq = fopen("LIO - Merge Sort com 100000 numeros.txt","a"); // LIO = lista inversamente ordenada

            fprintf(*arq,"Merge Sort : ");                           // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        }
    } else {
        if(opmi == 1){
            *arq = fopen("LO - Bubble Sort com 100000 numeros.txt","a"); // LO = lista ordenada

            fprintf(*arq,"Bubble Sort : ");                          // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else if(opmi == 2){
            *arq = fopen("LO - Selection Sort com 100000 numeros.txt","a"); // LO = lista ordenada

            fprintf(*arq,"Selection Sort : ");                       // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else if(opmi == 3){
            *arq = fopen("LO - Insertion Sort com 100000 numeros.txt","a"); // LO = lista ordenada

            fprintf(*arq,"Insertion Sort : ");                       // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else if(opmi == 4){
            *arq = fopen("LO - Shell Sort com 100000 numeros.txt","a"); // LO = lista ordenada

            fprintf(*arq,"Shell Sort : ");                           // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else if(opmi == 5){
            *arq = fopen("LO - Quick Sort com 100000 numeros.txt","a"); // LO = lista ordenada

            fprintf(*arq,"Quick Sort : ");                           // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        } else {
            *arq = fopen("LO - Merge Sort com 100000 numeros.txt","a"); // LO = lista ordenada

            fprintf(*arq,"Merge Sort : ");                           // Nome do método de ordenação
            fprintf(*arq,"Tempo decorrido : %Lf  ",tempoDecorrido); // Grava o tempo decorrido no arquivo
            fprintf(*arq,"Comparações : %lld\n",comparacoes);        // Grava o numero de comparações no arquivo

            fclose(*arq);
        }
    }
}
