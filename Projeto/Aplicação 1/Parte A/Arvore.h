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
	void insert(int key)
	{
		if (source == nullptr)		// verifica se a ?rvore est? vazia
			source = new Node(key); // cria um novo n?
		else
			insertAux(source, key);
	}

	void insertAux(Node *node, int key)
	{
		// se for menor, ent?o insere ? esquerda
		if (key < node->getKey())
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
		else if (key > node->getKey())
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

	// preorder-Tree-Walk(x)
	void preOrder(Node *node)
	{
		if (node != nullptr)
		{
			cout << node->getKey() << " ";
			preOrder(node->getLeft());
			preOrder(node->getRight());
		}
	}

	// posorder-Tree-Walk(x)
	void posOrder(Node *node)
	{
		if (node != nullptr)
		{
			posOrder(node->getLeft());
			posOrder(node->getRight());
			cout << node->getKey() << " ";
		}
	}

	// ATIVIDADES 1

	// Tree-Search(x,k)
	// pesquisarRec(int chave)
	Node *recursiveSearch(Node *node, int key)
	{
		if (node == nullptr)
		{
			cout << "\nN�o foi achado!";
			return node;
		}
		if (key == node->getKey())
		{
			cout << "\nSucesso!";
			return node;
		}

		if (key < node->getKey())
			return recursiveSearch(node->getLeft(), key);
		else
			return recursiveSearch(node->getRight(), key);
	}

	// iterative-Tree-Search(x,k)
	// pesquisarIter(int chave)
	Node *iterativeSearch(Node *node, int key)
	{
		while (node != nullptr)
		{
			if (node->getKey() == key)
			{
				cout << "\nAchado!";
				return node;
			}

			if (key < node->getKey())
				node = node->getLeft();
			else
				node = node->getRight();
		}

		return node;
	}

	void auxOrder(Node *node)
	{
		if (node != nullptr)
		{
			auxOrder(node->getLeft());
			auxOrder(node->getRight());
		}
	}

	// alturaBST()
	int treeHeight(Node *node)
	{
		if (node == nullptr)
			return -1;
		else
		{
			int left = treeHeight(node->getLeft());
			int right = treeHeight(node->getRight());
			if (left > right)
				return left + 1;
			else
				return right + 1;
		}
	}

	// Tree-Minimum(x)
	// min()
	Node *minimumNode()
	{
		Node *node = this->source;
		while (node->getLeft() != nullptr)
			node = node->getLeft();
		return node;
	}

	// Tree-Maximum(x)
	// max()
	Node *maximumNode()
	{
		Node *node = this->source;
		while (node->getRight() != nullptr)
			node = node->getRight();
		return node;
	}

	// folhas()
	void keyLeafs(Node *node)
	{
		if (node != nullptr)
		{
			keyLeafs(node->getLeft());
			keyLeafs(node->getRight());
			if (node->getLeft() == nullptr && node->getRight() == nullptr)
			{
				cout << node->getKey() << " ";
			}
		}
	}

	// removerFolha(int chave)
	Node *deleteLeaf(int key)
	{
		Node *node;
		node = iterativeSearch(this->source, key);

		if (node->getLeft() == nullptr && node->getRight() == nullptr) // � uma folha
		{
			delete node;
			node = nullptr;
			cout << "\nDeletado!";
			return node;
		}
		else
		{
			cout << "\nN�o � uma folha";
			return node;
		}
	}
};
