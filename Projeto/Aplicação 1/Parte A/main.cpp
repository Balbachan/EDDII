// /*
//     Faculdade de Computação e Informática
//     Estrutura de Dados II
//     Professor: Jean M. Laine
//     Aplicação 1 (Parte A e B)
//     Aplicação que ajuda a controlar as calorias e a perda de peso
//     Alunos:
//         - Diego Guedes de Moraes (32148127)
//         - Erick Cauã Ferreira Gomes (32116251)
//         - Laura C. Balbachan dos Santos (32173008)
//         - Pedro Moreno Campos (32172656)
// */

#include <iostream>
#include "Arvore.h"
#include "leituraCSV.h"

#include <locale.h>

using namespace std;

int main(int argc, char *argv[])
{
    binarySearchTree *tree = new binarySearchTree();

    leituraCSV(tree);

    cout << "\n Imprimindo em ordem...";
    tree->inOrder(tree->getSource());

    // int option, x;
    // cout << ("\nTestando o TAD BST (Elementos do tipo int)\n");

    // do
    // {
    // 	cout << "\n\n"
    // 		 << "\n***********************************"
    // 		 << "\n\tMenu - Arvore BST\n"
    // 		 << "\nEntre com a opcao:"
    // 		 << "\n ----1: Inserir"
    // 		 << "\n ----2: Imprimir em ordem"
    // 		 << "\n ----3: Imprimir em Pré-ordem"
    // 		 << "\n ----4: Imprimir em Pós-ordem"
    // 		 << "\n ----5: Pesquisa recursiva"
    // 		 << "\n ----6: Pesquisa iterativa"
    // 		 << "\n ----7: Quantidade de nós"
    // 		 << "\n ----8: Altura da Árvore"
    // 		 << "\n ----9: No mínimo"
    // 		 << "\n ----10: No máximo"
    // 		 << "\n ----11: Imprimir Folhas em ordem crescente"
    // 		 << "\n ----12: Deletar de Folhas"
    // 		 << "\n ----0: Sair do programa\n"
    // 		 << "\n***********************************"
    // 		 << "\n-> ";
    // 	cin >> option;

    // 	switch (option)
    // 	{
    // 	case 1:
    // 	{
    // 		cout << "\n Informe o valor (int) -> ";
    // 		cin >> x;
    // 		tree.insert(x);
    // 		break;
    // 	}
    // 	case 2:
    // 	{
    // 		cout << "\n Imprimindo em ordem...";
    // 		tree.inOrder(tree.getSource());
    // 		break;
    // 	}
    // 	case 3:
    // 	{
    // 		cout << "\n Imprimindo em pr�-ordem...";
    // 		tree.preOrder(tree.getSource());
    // 		break;
    // 	}
    // 	case 4:
    // 	{
    // 		cout << "\n Imprimindo em p�s-ordem...";
    // 		tree.posOrder(tree.getSource());
    // 		break;
    // 	}
    // 	case 5:
    // 	{
    // 		int key;
    // 		cout << "Insira a chave para pesquisar recursivamente \n";
    // 		cin >> key;
    // 		cout << "\n Pesquisando recursivamente...";

    // 		tree.recursiveSearch(tree.getSource(), key);

    // 		break;
    // 	}
    // 	case 6:
    // 	{
    // 		int key;
    // 		cout << "Insira a chave para pesquisar iterativamente \n";
    // 		cin >> key;
    // 		cout << "\n Pesquisando iterativamente...";

    // 		tree.iterativeSearch(tree.getSource(), key);

    // 		break;
    // 	}
    // 	case 7:
    // 	{
    // 		break;
    // 	}
    // 	case 8:
    // 	{
    // 		cout << tree.treeHeight(tree.getSource());
    // 		break;
    // 	}
    // 	case 9:
    // 	{
    // 		cout << tree.minimumNode()->getKey();
    // 		break;
    // 	}
    // 	case 10:
    // 	{
    // 		cout << tree.maximumNode()->getKey();
    // 		break;
    // 	}
    // 	case 11:
    // 	{
    // 		tree.keyLeafs(tree.getSource());
    // 		break;
    // 	}
    // 	case 12:
    // 	{
    // 		int key;
    // 		cout << "Insira a chave para deletar \n";
    // 		cin >> key;
    // 		cout << "\n Deletando chave...";

    // 		tree.deleteLeaf(key);
    // 		break;
    // 	}

    // 	case 0:
    // 	{
    // 		cout << "Saindo do programa \n";
    // 		break;
    // 	}

    // 	default:
    // 		cout << "\n Opcao invalida! \n\n\n";
    // 	} // fim switch
    // } while (option != 0);

    return 0;
}