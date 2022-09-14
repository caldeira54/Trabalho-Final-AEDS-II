#include <iostream>

using namespace std;

// Mostra o nome da função escolhida no menu inicial
void MethodName(int opmi){
    if(opmi == 1){
        cout << "Bubble Sort";
    } else if(opmi == 2){
        cout << "Selection Sort";
    } else if(opmi == 3){
        cout << "Insertion Sort";
    } else if(opmi == 4){
        cout << "Shell Sort";
    } else if(opmi == 5){
        cout << "Quick Sort";
    } else {
        cout << "Merge Sort";
    }
}

void ImprimeVetor(int *v,int tamanho){
    for(int i = 0;i < tamanho;i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

// Mantém os dados no arquivo
void keepFile1000(FILE ** arq,int opmi,int *thousand,int op){

    long long int comparacoes = 0;
    clock_t inicial,final;
    long double qtddclock,tempoDecorrido;

    FileRead1000(arq,thousand,op);
    if(opmi == 1){
        comparacoes = 0;
        tempoDecorrido = 0;
        inicial = clock();  // Inicio da contagem dos clocks

        BubbleSort(thousand,MIL,&comparacoes);// Ordena os numeros do arquivo

        final = clock();  // Final da contagem dos clocks
        qtddclock = final - inicial;  // Cálcula o tempo de execução da função
        tempoDecorrido = qtddclock / CLOCKS_PER_SEC;  // Transforma os clocks em segundos

        ImprimeVetor(thousand,MIL); // Imprime os números que estão no vetor
        cout << "Tempo decorrido : " << tempoDecorrido << endl;
        cout << "Comparacoes : " << comparacoes << endl;

        WriteFile(arq,tempoDecorrido,comparacoes,opmi,op); // Realiza a gravação no arquivo

    } else if(opmi == 2) {
        comparacoes = 0;
        inicial = clock();  // Inicio da contagem dos clocks

        SelectionSort(thousand,MIL,&comparacoes);// Ordena os numeros do arquivo

        final = clock();  // Final da contagem dos clocks
        qtddclock = final - inicial;  // Cálcula o tempo de execução da função
        tempoDecorrido = qtddclock / CLOCKS_PER_SEC;  // Transforma os clocks em segundos

        ImprimeVetor(thousand,MIL); // Imprime os números que estão no vetor
        WriteFile(arq,tempoDecorrido,comparacoes,opmi,op); // Realiza a gravação no arquivo
        cout << "Tempo decorrido : " << tempoDecorrido << endl;
        cout << "Comparacoes : " << comparacoes << endl;
    } else if(opmi == 3) {
        comparacoes = 0;
        inicial = clock();  // Inicio da contagem dos clocks

        InsertionSort(thousand,MIL,&comparacoes);// Ordena os numeros do arquivo

        final = clock();  // Final da contagem dos clocks
        qtddclock = final - inicial;  // Cálcula o tempo de execução da função
        tempoDecorrido = qtddclock / CLOCKS_PER_SEC;  // Transforma os clocks em segundos

        ImprimeVetor(thousand,MIL); // Imprime os números que estão no vetor
        WriteFile(arq,tempoDecorrido,comparacoes,opmi,op); // Realiza a gravação no arquivo
        cout << "Tempo decorrido : " << tempoDecorrido << endl;
        cout << "Comparacoes : " << comparacoes << endl;

    } else if(opmi == 4) {
        comparacoes = 0;
        inicial = clock();  // Inicio da contagem dos clocks

        ShellSort(thousand,MIL,&comparacoes);// Ordena os numeros do arquivo

        final = clock();  // Final da contagem dos clocks
        qtddclock = final - inicial;  // Cálcula o tempo de execução da função
        tempoDecorrido = qtddclock / CLOCKS_PER_SEC;  // Transforma os clocks em segundos

        ImprimeVetor(thousand,MIL); // Imprime os números que estão no vetor
        WriteFile(arq,tempoDecorrido,comparacoes,opmi,op); // Realiza a gravação no arquivo
        cout << "Tempo decorrido : " << tempoDecorrido << endl;
        cout << "Comparacoes : " << comparacoes << endl;

    } else if(opmi == 5) {
        comparacoes = 0;

        inicial = clock();  // Inicio da contagem dos clocks

        QuickSort(thousand,0,MIL,&comparacoes);// Ordena os numeros do arquivo

        final = clock();  // Final da contagem dos clocks
        qtddclock = final - inicial;  // Cálcula o tempo de execução da função
        tempoDecorrido = qtddclock / CLOCKS_PER_SEC;  // Transforma os clocks em segundos

        ImprimeVetor(thousand,MIL); // Imprime os números que estão no vetor
        cout << "Tempo decorrido : " << tempoDecorrido << endl;
        cout << "Comparacoes : " << comparacoes << endl;
        WriteFile(arq,tempoDecorrido,comparacoes,opmi,op); // Realiza a gravação no arquivo

    } else {
        comparacoes = 0;
        inicial = clock();  // Inicio da contagem dos clocks

        MergeSort(thousand,0,MIL,&comparacoes);// Ordena os numeros do arquivo

        final = clock();  // Final da contagem dos clocks
        qtddclock = final - inicial;  // Cálcula o tempo de execução da função
        tempoDecorrido = qtddclock / CLOCKS_PER_SEC;  // Transforma os clocks em segundos

        ImprimeVetor(thousand,MIL); // Imprime os números que estão no vetor
        WriteFile(arq,tempoDecorrido,comparacoes,opmi,op); // Realiza a gravação no arquivo

        cout << "Tempo decorrido : " << tempoDecorrido << endl;
        cout << "Comparacoes : " << comparacoes << endl;
    }
}

// Define o nome do arquivo para guardar os dados
void keepFile10000(FILE ** arq,int opmi,int *ten_thousand,int op){

    long long int comparacoes = 0;
    clock_t inicial,final;
    long double qtddclock,tempoDecorrido;

    FileRead10000(arq,ten_thousand,op);
    if(opmi == 1){
        comparacoes = 0;
        inicial = clock();  // Inicio da contagem dos clocks

        BubbleSort(ten_thousand,DEZMIL,&comparacoes);// Ordena os numeros do arquivo

        final = clock();  // Final da contagem dos clocks
        qtddclock = final - inicial;  // Cálcula o tempo de execução da função
        tempoDecorrido = qtddclock / CLOCKS_PER_SEC;  // Transforma os clocks em segundos

        ImprimeVetor(ten_thousand,DEZMIL); // Imprime os números que estão no vetor
        cout << "Tempo decorrido : " << tempoDecorrido << endl;
        cout << "Comparacoes : " << comparacoes << endl;

        WriteFile(arq,tempoDecorrido,comparacoes,opmi,op); // Realiza a gravação no arquivo

    } else if(opmi == 2) {
        comparacoes = 0;
        inicial = clock();  // Inicio da contagem dos clocks

        SelectionSort(ten_thousand,DEZMIL,&comparacoes);// Ordena os numeros do arquivo

        final = clock();  // Final da contagem dos clocks
        qtddclock = final - inicial;  // Cálcula o tempo de execução da função
        tempoDecorrido = qtddclock / CLOCKS_PER_SEC;  // Transforma os clocks em segundos

        ImprimeVetor(ten_thousand,DEZMIL); // Imprime os números que estão no vetor
        WriteFile(arq,tempoDecorrido,comparacoes,opmi,op); // Realiza a gravação no arquivo
        cout << "Tempo decorrido : " << tempoDecorrido << endl;
        cout << "Comparacoes : " << comparacoes << endl;
    } else if(opmi == 3) {
        comparacoes = 0;

        inicial = clock();  // Inicio da contagem dos clocks

        InsertionSort(ten_thousand,DEZMIL,&comparacoes);// Ordena os numeros do arquivo

        final = clock();  // Final da contagem dos clocks
        qtddclock = final - inicial;  // Cálcula o tempo de execução da função
        tempoDecorrido = qtddclock / CLOCKS_PER_SEC;  // Transforma os clocks em segundos

        ImprimeVetor(ten_thousand,DEZMIL); // Imprime os números que estão no vetor
        WriteFile(arq,tempoDecorrido,comparacoes,opmi,op); // Realiza a gravação no arquivo
        cout << "Tempo decorrido : " << tempoDecorrido << endl;
        cout << "Comparacoes : " << comparacoes << endl;

    } else if(opmi == 4) {
        comparacoes = 0;
        inicial = clock();  // Inicio da contagem dos clocks

        ShellSort(ten_thousand,DEZMIL,&comparacoes);// Ordena os numeros do arquivo

        final = clock();  // Final da contagem dos clocks
        qtddclock = final - inicial;  // Cálcula o tempo de execução da função
        tempoDecorrido = qtddclock / CLOCKS_PER_SEC;  // Transforma os clocks em segundos

        ImprimeVetor(ten_thousand,DEZMIL); // Imprime os números que estão no vetor
        WriteFile(arq,tempoDecorrido,comparacoes,opmi,op); // Realiza a gravação no arquivo
        cout << "Tempo decorrido : " << tempoDecorrido << endl;
        cout << "Comparacoes : " << comparacoes << endl;
    } else if(opmi == 5) {
        comparacoes = 0;

        inicial = clock();  // Inicio da contagem dos clocks

        QuickSort(ten_thousand,0,DEZMIL,&comparacoes);// Ordena os numeros do arquivo

        final = clock();  // Final da contagem dos clocks
        qtddclock = final - inicial;  // Cálcula o tempo de execução da função
        tempoDecorrido = qtddclock / CLOCKS_PER_SEC;  // Transforma os clocks em segundos

        ImprimeVetor(ten_thousand,DEZMIL); // Imprime os números que estão no vetor
        cout << "Tempo decorrido : " << tempoDecorrido << endl;
        cout << "Comparacoes : " << comparacoes << endl;

        WriteFile(arq,tempoDecorrido,comparacoes,opmi,op); // Realiza a gravação no arquivo

    } else {
        comparacoes = 0;
        inicial = clock();  // Inicio da contagem dos clocks

        MergeSort(ten_thousand,0,DEZMIL,&comparacoes);// Ordena os numeros do arquivo

        final = clock();  // Final da contagem dos clocks
        qtddclock = final - inicial;  // Cálcula o tempo de execução da função
        tempoDecorrido = qtddclock / CLOCKS_PER_SEC;  // Transforma os clocks em segundos

        WriteFile(arq,tempoDecorrido,comparacoes,opmi,op); // Realiza a gravação no arquivo
        ImprimeVetor(ten_thousand,DEZMIL); // Imprime os números que estão no vetor
        cout << "Tempo decorrido : " << tempoDecorrido << endl;
        cout << "Comparacoes : " << comparacoes << endl;
    }
}

// Guarda os dados no arquivo
void keepFile100000(FILE ** arq,int opmi,int *hundred_thousand,int op){

    long long int comparacoes = 0;
    clock_t inicial,final;
    long double qtddclock,tempoDecorrido;

    FileRead100000(arq,hundred_thousand,op);
    if(opmi == 1){
        comparacoes = 0;
        inicial = clock();  // Inicio da contagem dos clocks

        BubbleSort(hundred_thousand,CEMMIL,&comparacoes);// Ordena os numeros do arquivo

        final = clock();  // Final da contagem dos clocks
        qtddclock = final - inicial;  // Cálcula o tempo de execução da função
        tempoDecorrido = qtddclock / CLOCKS_PER_SEC;  // Transforma os clocks em segundos

        ImprimeVetor(hundred_thousand,CEMMIL); // Imprime os números que estão no vetor
        cout << "Tempo decorrido : " << tempoDecorrido << endl;
        cout << "Comparacoes : " << comparacoes << endl;

        WriteFile(arq,tempoDecorrido,comparacoes,opmi,op); // Realiza a gravação no arquivo

    } else if(opmi == 2) {
        comparacoes = 0;
        inicial = clock();  // Inicio da contagem dos clocks

        SelectionSort(hundred_thousand,CEMMIL,&comparacoes);// Ordena os numeros do arquivo

        final = clock();  // Final da contagem dos clocks
        qtddclock = final - inicial;  // Cálcula o tempo de execução da função
        tempoDecorrido = qtddclock / CLOCKS_PER_SEC;  // Transforma os clocks em segundos

        ImprimeVetor(hundred_thousand,CEMMIL); // Imprime os números que estão no vetor
        WriteFile(arq,tempoDecorrido,comparacoes,opmi,op); // Realiza a gravação no arquivo
        cout << "Tempo decorrido : " << tempoDecorrido << endl;
        cout << "Comparacoes : " << comparacoes << endl;
    } else if(opmi == 3) {
        comparacoes = 0;

        inicial = clock();  // Inicio da contagem dos clocks

        InsertionSort(hundred_thousand,CEMMIL,&comparacoes);// Ordena os numeros do arquivo

        final = clock();  // Final da contagem dos clocks
        qtddclock = final - inicial;  // Cálcula o tempo de execução da função
        tempoDecorrido = qtddclock / CLOCKS_PER_SEC;  // Transforma os clocks em segundos

        WriteFile(arq,tempoDecorrido,comparacoes,opmi,op); // Realiza a gravação no arquivo
        ImprimeVetor(hundred_thousand,CEMMIL); // Imprime os números que estão no vetor
        cout << "Tempo decorrido : " << tempoDecorrido << endl;
        cout << "Comparacoes : " << comparacoes << endl;

    } else if(opmi == 4) {
        comparacoes = 0;
        inicial = clock();  // Inicio da contagem dos clocks

        ShellSort(hundred_thousand,CEMMIL,&comparacoes);// Ordena os numeros do arquivo

        final = clock();  // Final da contagem dos clocks
        qtddclock = final - inicial;  // Cálcula o tempo de execução da função
        tempoDecorrido = qtddclock / CLOCKS_PER_SEC;  // Transforma os clocks em segundos

        WriteFile(arq,tempoDecorrido,comparacoes,opmi,op); // Realiza a gravação no arquivo
        ImprimeVetor(hundred_thousand,CEMMIL); // Imprime os números que estão no vetor
        cout << "Tempo decorrido : " << tempoDecorrido << endl;
        cout << "Comparacoes : " << comparacoes << endl;
    } else if(opmi == 5) {
        comparacoes = 0;

        inicial = clock();  // Inicio da contagem dos clocks

        QuickSort(hundred_thousand,0,CEMMIL,&comparacoes);// Ordena os numeros do arquivo

        final = clock();  // Final da contagem dos clocks
        qtddclock = final - inicial;  // Cálcula o tempo de execução da função
        tempoDecorrido = qtddclock / CLOCKS_PER_SEC;  // Transforma os clocks em segundos

        ImprimeVetor(hundred_thousand,CEMMIL); // Imprime os números que estão no vetor
        cout << "Tempo decorrido : " << tempoDecorrido << endl;
        cout << "Comparacoes : " << comparacoes << endl;
        WriteFile(arq,tempoDecorrido,comparacoes,opmi,op); // Realiza a gravação no arquivo

    } else {
        comparacoes = 0;
        inicial = clock();  // Inicio da contagem dos clocks

        MergeSort(hundred_thousand,0,CEMMIL,&comparacoes); // Ordena os numeros do arquivo

        final = clock();  // Final da contagem dos clocks
        qtddclock = final - inicial;  // Cálcula o tempo de execução da função
        tempoDecorrido = qtddclock / CLOCKS_PER_SEC;  // Transforma os clocks em segundos

        ImprimeVetor(hundred_thousand,CEMMIL); // Imprime os números que estão no vetor
        WriteFile(arq,tempoDecorrido,comparacoes,opmi,op); // Realiza a gravação no arquivo

        cout << "Tempo decorrido : " << tempoDecorrido << endl;
        cout << "Comparacoes : " << comparacoes << endl;
    }
}
