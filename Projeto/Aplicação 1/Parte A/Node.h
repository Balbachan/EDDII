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

#ifndef NODE_H_
#define NODE_H_

#include <iostream>
#include <string>
#include "Alimentos.h"

using namespace std;

class Node
{
private:
	Node *left, *right;
	string key;
	Alimentos dados;

public:
	Node(string key, Alimentos dados_alimentos)
	{
		this->key = key;
		this->dados = dados_alimentos;
		this->left = nullptr;
		this->right = nullptr;
	}

	// getters & setters
	string getKey() { return this->key; }
	void setKey(string key) { this->key = key; }

	Alimentos getDados() { return this->dados; }

	Node *getLeft() { return this->left; }
	void setLeft(Node *left) { this->left = left; }

	Node *getRight() { return this->right; }
	void setRight(Node *right) { this->right = right; }
};

#endif