#include <stdlib.h>
#include <iostream>
#include <fstream>

#include "node.h"
#include "avltree.h"

using namespace std;
void readFile(string nameFile);

int main()
{
    int option;

    readFile("test.csv");


    do {
		cout << "\n\n"
             << "**************** MENU ****************\n"
             << "               AVL tree               \n"
			 << "Insira a opção desejada: "
			 << "\n ---- 1: Inserir"
			 << "\n ---- 2: Imprimir em ordem"
			 << "\n ---- 3: Imprimir em Pré-ordem"
			 << "\n ---- 4: Imprimir em Pós-ordem"
			 << "\n ---- 5: Pesquisa recursiva"
			 << "\n ---- 6: Pesquisa iterativa"
			 << "\n ---- 7: Quantidade de nós"
			 << "\n ---- 8: Altura da árvore"
			 << "\n ---- 9: Nó mínimo"
			 << "\n ----10: Nó máximo"
			 << "\n ----11: Imprimir Folhas em ordem crescente"
			 << "\n ----12: Deletar de Folhas"
			 << "\n ---- 0: Sair do programa\n"
			 << "\n***********************************"
			 << "\n-> ";

    cin >> option; 
    
    switch (option)
    {
    case 0:
        return 0;
        break;
    
    case 1:
        cout << "Opção de inserção";
        break;

    case 2:
        return 0;
        break;

    case 3:
        return 0;
        break;
    
    default:
        cout << "Opção inválida.\n";
        break;
    }

    return 0;

} while(option != 0);
}

void readFile(string nameFile) {
    ifstream csvFile;

    csvFile.open(nameFile);

    if(csvFile.is_open()) {
        while(!csvFile.eof()) {
            string line;
            getline(csvFile, line, ';');
            cout << line << endl;
        }
    }
    else {
        cout << "Erro ao abrir o arquivo.";
    }
}