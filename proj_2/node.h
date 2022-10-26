#ifndef __NODE_H__
#define __NODE_H__

#include <iostream>

class Node {
    private:
        Node *left, *right;
        int data;
        // herdar o nome que está na classe alimentos e os dados também

    public:
        Node(int data) {
            this -> data = data;
            left = NULL;
            right = NULL;  
        }


    int getData() {
        return data;
    }

    Node* getLeft() {
        return left;
    }

    Node* getRight() {
        return right;
    }

    void setData(int new_data) {
        data = new_data;
    }

    void setLeft(Node *node) {
        left = node;
    }

    void setRight(Node *node) {
        right = node;
    }
    
};

#endif