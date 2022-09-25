#ifndef NO.H
#define NO.H

#include <iostream>

class No {
    private:
    No *esq, *dir;
    int chave;

    public: 
    No (int chave) {
        this -> chave = chave;
        esq = NULL;
        dir = NULL;
    }

    // Getters ---------------------------------
    int getChave() {
        return chave;
    }

    No* getEsq() {
        return esq;
    }

    No* getDir() {
        return dir;
    }

    // Setters ---------------------------------
    void setEsq(No *no) {
        esq = no;
    }

    void setDir(No *no) {
        dir = no;
    }

    void setChave(int k) {
        chave = k;
    }

};

#endif