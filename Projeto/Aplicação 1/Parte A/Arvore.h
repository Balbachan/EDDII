/*
    Faculdade de Computação e Informática
    Estrutura de Dados II
    Professor: Jean M. Laine
    Aplicação 1 (Parte A e B)
    Aplicação que ajuda a controlar as calorias e a perda de peso
    Alunos:
        - Diego Guedes de Moraes (32148127)
        - Erick Cauã Ferreira Gomes (32116251)
        - Laura C. Balbachan dos Santos (32173008)
        - Pedro Moreno Campos (32172656)
*/

#ifndef ARVORE_H
#define ARVORE_H

#include <iostream>
#include "Node.h"

using namespace std;

class binarySearchTree
{
private:
	Node *source;

public:
	binarySearchTree()
	{
		source = nullptr;
	}

	//******************************************************************
	void insert(Alimentos key)
	{
		if (source == nullptr)		// verifica se a ?rvore est? vazia
			source = new Node(key); // cria um novo n?
		else
			insertAux(source, key);
	}

	void insertAux(Node *node, Alimentos key)
	{
		// se for menor, ent?o insere ? esquerda
		if (key.getKey() < node->getKey())
		{
			// verifica se a esquerda ? nulo
			if (node->getLeft() == nullptr)
			{
				Node *newNode = new Node(key);
				node->setLeft(newNode); // seta o novo_no ? esquerda
			}
			else
			{
				// sen?o, continua percorrendo recursivamente
				insertAux(node->getLeft(), key);
			}
		}
		// se for maior, ent?o insere ? direita
		else if (key.getKey() > node->getKey())
		{
			// verifica se a direita ? nulo
			if (node->getRight() == nullptr)
			{
				Node *newNode = new Node(key);
				node->setRight(newNode); // seta o novo_no ? direita
			}
			else
			{
				// sen?o, continua percorrendo recursivamente
				insertAux(node->getRight(), key);
			}
		}
		// se for igual, n?o vai inserir
		// n?o pode existir 2 chaves iguais
	}

	Node *getSource() { return this->source; }

	// Inorder-Tree-Walk(x)
	void inOrder(Node *node)
	{
		if (node != nullptr)
		{
			inOrder(node->getLeft());
			cout << node->getKey() << " ";
			inOrder(node->getRight());
		}
	}

	// // preorder-Tree-Walk(x)
	// void preOrder(Node *node)
	// {
	// 	if (node != nullptr)
	// 	{
	// 		cout << node->getKey() << " ";
	// 		preOrder(node->getLeft());
	// 		preOrder(node->getRight());
	// 	}
	// }

	// // posorder-Tree-Walk(x)
	// void posOrder(Node *node)
	// {
	// 	if (node != nullptr)
	// 	{
	// 		posOrder(node->getLeft());
	// 		posOrder(node->getRight());
	// 		cout << node->getKey() << " ";
	// 	}
	// }

	// ATIVIDADES 1

	// Tree-Search(x,k)
	// pesquisarRec(string chave)
	// Node *recursiveSearch(Node *node, string key)
	// {
	// 	if (node == nullptr)
	// 	{
	// 		cout << "\nNão foi achado!";
	// 		return node;
	// 	}
	// 	if (key == node->getKey())
	// 	{
	// 		cout << "\nSucesso!";
	// 		return node;
	// 	}

	// 	if (key < node->getKey())
	// 		return recursiveSearch(node->getLeft(), key);
	// 	else
	// 		return recursiveSearch(node->getRight(), key);
	// }

	// iterative-Tree-Search(x,k)
	// pesquisarIter(string chave)
	// Node *iterativeSearch(Node *node, string key)
	// {
	// 	while (node != nullptr)
	// 	{
	// 		if (node->getKey() == key)
	// 		{
	// 			cout << "\nAchado!";
	// 			return node;
	// 		}

	// 		if (key < node->getKey())
	// 			node = node->getLeft();
	// 		else
	// 			node = node->getRight();
	// 	}

	// 	return node;
	// }

//ITEM 6 - PARTE A:
//modificação método de busca baseado em 
//busca iterativa
//**********************************

	float principalSearch(Node *node, Alimentos key)
	{

		while (node != nullptr)
		{
			if (node->getKey() == key.getKey())
			{
				         
         		int option = 1;

				while (option != 0){
				cout<<"\n\nQual informação deseja?\n"
				<< "\n1. calories"
				<< "\n2. caloriesFromFat"
				<< "\n3.  totalFatG"
				<< "\n4. totalfatDV"
				<< "\n5. sodiumG"
				<< "\n6. sodiumDV"
				<< "\n7. potassiumG"
				<< "\n8. potassiumDV"
				<< "\n9. totalCarbG"
				<< "\n10. totalCarbDV"
				<< "\n11. dietaryFiberG"
				<< "\n12. dietaryFiberDV"
				<< "\n13. sugars"
				<< "\n14. protein"
				<< "\n15. vitaminA"
				<< "\n16. vitaminC"
				<< "\n17. calcium"
				<< "\n18. iron"
				<< "\n19. saturatedDV"
				<< "\n20. saturatedMG"
				<< "\n21. cholesterolDV"
				<< "\n22. cholesterolMG"
				<< "\n23. foodType"
				<< endl;
					cin >> option;
					switch(option){
						case 1:{return(key.getCalories());break;}
						case 2:{return(key.getCaloriesFromFat());break;}
						case 3:{return(key.getTotalFatG());break;}
						case 4:{return(key.getTotalFatDV());break;}
						case 5:{return(key.getSodiumG());break;}
						case 6:{return(key.getSodiumDV());break;}
						case 7:{return(key.getPotassiumG());break;}
						case 8:{return(key.getPotassiumDV());break;}
						case 9:{return(key.getTotalCarbG());break;}
						case 10:{return(key.getTotalCarbDV());break;}
						case 11:{return(key.getDietaryFiberG());break;}
						case 12:{return(key.getDietaryFiberDV());break;}
						case 13:{return(key.getSugars());break;}
						case 14:{return(key.getProtein());break;}
						case 15:{return(key.getVitaminA());break;}
						case 16:{return(key.getVitaminC());break;}
						case 17:{return(key.getCalcium());break;}
						case 18:{return(key.getIron());break;}
						case 19:{return(key.getSaturatedDV());break;}
						case 20:{return(key.getSaturatedMG());break;}
						case 21:{return(key.getCholesterDV());break;}
						case 22:{return(key.getCholesterMG());break;}
						case 23:{return(key.getFoodType());break;}
						case 0:{break;}
				}
			}

			if (key.getKey() < node->getKey())
				node = node->getLeft();
			else
				node = node->getRight();
		}

		return key.getFoodType();
		}
	}
//**********************************

	void auxOrder(Node *node){
		if (node != nullptr){
			auxOrder(node->getLeft());
			auxOrder(node->getRight());
		}
	}

	// // qdeNos()
	// int nodeCounter(Node *node)
	// {
	// 	if (node == nullptr)
	// 		return 0;
	// 	else return(nodeCounter(node->getLeft()) + nodeCounter(node->getRight()) + 1);
	// }

	// // alturaBST()
	// int treeHeight(Node *node)
	// {
	// 	if (node == nullptr)
	// 		return -1;
	// 	else
	// 	{
	// 		int left = treeHeight(node->getLeft());
	// 		int right = treeHeight(node->getRight());
	// 		if (left > right)
	// 			return left + 1;
	// 		else
	// 			return right + 1;
	// 	}
	// }

	// // Tree-Minimum(x)
	// // min()
	// Node *minimumNode()
	// {
	// 	Node *node = this->source;
	// 	while (node->getLeft() != nullptr)
	// 		node = node->getLeft();
	// 	return node;
	// }

	// // Tree-Maximum(x)
	// // max()
	// Node *maximumNode()
	// {
	// 	Node *node = this->source;
	// 	while (node->getRight() != nullptr)
	// 		node = node->getRight();
	// 	return node;
	// }

	// // folhas()
	// void keyLeafs(Node *node)
	// {
	// 	if (node != nullptr)
	// 	{
	// 		keyLeafs(node->getLeft());
	// 		keyLeafs(node->getRight());
	// 		if (node->getLeft() == nullptr && node->getRight() == nullptr)
	// 		{
	// 			cout << node->getKey() << " ";
	// 		}
	// 	}
	// }

	// // removerFolha(string chave)
	// Node *deleteLeaf(string key)
	// {
	// 	Node *node;
	// 	node = iterativeSearch(this->source, key);

	// 	if (node->getLeft() == nullptr && node->getRight() == nullptr) // é uma folha
	// 	{
	// 		delete node;
	// 		node = nullptr;
	// 		cout << "\nDeletado!";
	// 		return node;
	// 	}
	// 	else
	// 	{
	// 		cout << "\nNão é uma folha";
	// 		return node;
	// 	}
	// }
};

#endif