#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <string>

using namespace std;

class Node 
{
	private:
		Node *left, *right;
		string key;

	public:
		Node(string key)
		{
			this->key = key;
			this->left = nullptr;
			this->right = nullptr;
		}

		// getters & setters
		string getKey() { return this->key; }
		void setKey(string key) { this->key = key; }

		Node *getLeft() { return this->left; }
		void setLeft(Node *left) { this->left = left; }
		
		Node *getRight() { return this->right; }
		void setRight(Node *right) { this->right = right; }
};

#endif 