#include <iostream>
#include <time.h>
#include <windows.h>
#include "Metodos de Ordenacao.h"
#include "Manipulacao de Arquivos.h"
#include "Resultado Final.h"

using namespace std;

void MenuSecundario(FILE **arq,int opmi);
void LimpaTela();

int main(){

    setlocale(LC_ALL,"Portuguese");
    FILE *arq;
    int op;

    do{

        cout << "********* Menu Inicial *********" << endl;
        cout << "*\t 1- Bubble Sort        *" << endl;
        cout << "*\t 2- Selection Sort     *" << endl;
        cout << "*\t 3- Insertion Sort     *" << endl;
        cout << "*\t 4- Shell Sort         *" << endl;
        cout << "*\t 5- Quick Sort         *" << endl;
        cout << "*\t 6- Merge Sort         *" << endl;
        cout << "*\t 7- Sair               *" << endl;
        cout << "********************************" << endl;
        cout << "Escolha uma opção e tecle ENTER : ";
        cin >> op;
        LimpaTela();

        switch(op){
            case 1:
                MenuSecundario(&arq,op);
                break;
            case 2:
                MenuSecundario(&arq,op);
                break;
            case 3:
                MenuSecundario(&arq,op);
                break;
            case 4:
                MenuSecundario(&arq,op);
                break;
            case 5:
                MenuSecundario(&arq,op);
                break;
            case 6:
                MenuSecundario(&arq,op);
                break;
            case 7:
                break;
            default:
                cout << "Opcao invalida, tente novamente." << endl;
                Sleep(2000);
                LimpaTela();
                break;
        }

    }while(op != 7);

    return 0;
}

void LimpaTela(){
    system("cls");
}

void MenuSecundario(FILE **arq,int opmi){

    int op;
    int thousand[MIL]; // Vetor de tamanho 1000
    int ten_thousand[DEZMIL]; // Vetor de tamanho 10000
    int hundred_thousand[CEMMIL]; // Vetor de tamanho 100000

    MethodName(opmi);
    Sleep(1000);
    LimpaTela();
    do{
        cout << "************************ Menu Secundário ************************" << endl;
        cout << "*\t 1- Lista Aleatória com 1000 numeros                    *" << endl;
        cout << "*\t 2- Lista Quase Ordenada com 1000 numeros               *" << endl;
        cout << "*\t 3- Lista Inversamente Ordenada com 1000 numeros        *" << endl;
        cout << "*\t 4- Lista Ordenada com 1000 numeros                     *" << endl;
        cout << "*\t 5- Lista Aleatória com 10000 numeros                   *" << endl;
        cout << "*\t 6- Lista Quase Ordenada com 10000 numeros              *" << endl;
        cout << "*\t 7- Lista Inversamente Ordenada com 10000 numeros       *" << endl;
        cout << "*\t 8- Lista Ordenada com 10000 numeros                    *" << endl;
        cout << "*\t 9- Lista Aleatória com 100000 numeros                  *" << endl;
        cout << "*\t 10- Lista Quase Ordenada com 100000 numeros            *" << endl;
        cout << "*\t 11- Lista Inversamente Ordenada com 100000 numeros     *" << endl;
        cout << "*\t 12- Lista Ordenada com 100000 numeros                  *" << endl;
        cout << "*\t 13- Voltar ao Menu Inicial                             *" << endl;
        cout << "*****************************************************************" << endl;
        cout << "Escolha uma opção e tecle ENTER : ";
        cin >> op;
        LimpaTela();

        switch(op){
            /// Lista Aleatória com 1000 números
            case 1:
                keepFile1000(arq,opmi,thousand,op);
                MethodName(opmi);
                cout << " Lista Aleatória com 1000 numeros" << endl;
                break;
            /// Lista Quase Ordenada com 1000 números
            case 2:
                keepFile1000(arq,opmi,thousand,op);
                MethodName(opmi);
                cout << " Lista Quase Ordenada com 1000 numeros" << endl;
                break;
            /// Lista Inversamente Ordenada com 1000 números
            case 3:
                keepFile1000(arq,opmi,thousand,op);
                MethodName(opmi);
                cout << " Lista Inversamente Ordenada com 1000 numeros" << endl;
                break;
            /// Lista Ordenada com 1000 números
            case 4:
                keepFile1000(arq,opmi,thousand,op);
                MethodName(opmi);
                cout << " Lista Ordenada com 1000 numeros" << endl;
                break;
            /// Lista Aleatória com 10000 números
            case 5:
                keepFile10000(arq,opmi,ten_thousand,op);
                MethodName(opmi);
                cout << " Lista Aleatória com 10000 numeros" << endl;
                break;
            /// Lista Quase Ordenada com 10000 números
            case 6:
                keepFile10000(arq,opmi,ten_thousand,op);
                MethodName(opmi);
                cout << " Lista Quase Ordenada com 10000 numeros" << endl;
                break;
            /// Lista Inversamente Ordenada com 10000 números
            case 7:
                keepFile10000(arq,opmi,ten_thousand,op);
                MethodName(opmi);
                cout << " Lista Inversamente Ornenada com 10000 numeros" << endl;
                break;
            /// Lista Ordenada com 10000 números
            case 8:
                keepFile10000(arq,opmi,ten_thousand,op);
                MethodName(opmi);
                cout << " Lista Ordenada com 10000 numeros" << endl;
                break;
            /// Lista Aleatória com 100000 números
            case 9:
                keepFile100000(arq,opmi,hundred_thousand,op);
                MethodName(opmi);
                cout << " Lista Aleatória com 100000 numeros" << endl;
                break;
            /// Lista Quase Ordenada com 100000 números
            case 10:
                keepFile100000(arq,opmi,hundred_thousand,op);
                MethodName(opmi);
                cout << " Lista Quase Ordenada com 100000 numeros" << endl;
                break;
            /// Lista Inversamente Ordenada com 10000 números
            case 11:
                keepFile100000(arq,opmi,hundred_thousand,op);
                MethodName(opmi);
                cout << " Lista Inversamente Ordenada com 100000 numeros" << endl;
                break;
            /// Lista Ordenada com 10000 números
            case 12:
                keepFile100000(arq,opmi,hundred_thousand,op);
                MethodName(opmi);
                cout << " Lista Ordenada com 100000 numeros" << endl;
                break;
            /// Volta ao menu principal
            case 13:
                break;
            default:
                cout << "Opção inválida! Tente novamente.";
                Sleep(2000);
                LimpaTela();
                break;
        }
    }while(op != 13);
}
