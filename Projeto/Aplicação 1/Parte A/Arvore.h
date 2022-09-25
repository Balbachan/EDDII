#ifndef ARVORE_H
#define ARVORE_H

#include <No.h>
#include <iostream>

using namespace std; 

class ArvoreBST {
    private:
    No *raiz;

    public:
    ArvoreBST() {
        raiz = NULL;
    }

    void setRaiz(No *root) {
        raiz = root;
    }

    void inserir(int chave) {
        if(raiz == NULL)
            raiz = new No(chave);
        else 
            inserirAux(raiz, chave);
    }

    void inserirAux(No *no, int chave) {
        if(chave < no -> getChave()) {
            if(no -> getEsq() == NULL) {
                No *novo_no = new No(chave);
                no -> setEsq(novo_no);
            }
            else {
                inserirAux(no -> getEsq(), chave);
            }
        }
        else if(chave > no -> getChave()) {
            if(no -> getDir() == NULL) {
                No *novo_no = new No(chave);
                no -> setDir(novo_no);
            }
        }
        else {
            inserirAux(no -> getDir(), chave);
        }
    }

    No* getRaiz() {
        return raiz;
    }

    void emOrdem(No *no) {
        if(no != NULL) {
            emOrdem(no -> getEsq());
            cout << no -> getChave() << " ";
            emOrdem(no -> getDir());
        }
    }

    void preOrdem(No *no) {
        if(no != NULL) {
            cout << no -> getChave() << " ";
            emOrdem(no -> getEsq());
            emOrdem(no -> getDir());
        }
    }

    void posOrdem(No *no) {
        if(no != NULL) {
            emOrdem(no -> getEsq());
            emOrdem(no -> getDir());
            cout << no -> getChave() << " ";
        }
    }

    No *Pesquisar(int dado, No* no) {
        if (raiz == NULL) return NULL;
            No* atual = no;
        while(atual -> getChave() != dado) {
            if(dado < atual -> getChave())
                atual = atual -> getEsq();
            else 
                atual = atual -> getDir();
            if(atual == NULL)
                return NULL;
        }
        return atual;
    }

};

#endif