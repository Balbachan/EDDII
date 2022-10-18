#include <iostream>
#include "node.h"

class AVL {
    private:
        Node *root;
    public:
        AVL() { 
            root = NULL;
        }


        void setRaiz(Node *new_root) {
            root = new_root;
        }

        void insert(int data) {
            if(root == NULL)
                root = new Node(data);
            else    
                insertAux(root, data);
        }

        void insertAux(Node *node, int data) {
            if(data < node -> getData()) {
                if(node -> getLeft() == NULL){
                    Node *new_node = new Node(data);
                    node -> setLeft(new_node);
                }
                else {
                    insertAux(node -> getLeft(), data);
                }
            }
            else if(data > node -> getData()) {
                if(node -> getRight() == NULL) {
                    Node *new_node = new Node(data);
                    node -> setRight(new_node);
                }
                else {
                    insertAux(node -> getRight(), data);
                }
            }
        }


};

