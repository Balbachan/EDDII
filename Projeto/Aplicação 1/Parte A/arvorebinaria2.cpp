#include <iostream>
using namespace std;

//defini��o do n�
class No
{
private:
    No *esq, *dir;
    int chave;

public:
    No(int chave)
    {
        this->chave = chave;
        esq = NULL;
        dir = NULL;
    }

    // fun��es getters e setters
    int getChave()
    {
        return chave;
    }

    No* getEsq()
    {
        return esq;
    }

    No* getDir()
    {
        return dir;
    }

    void setEsq(No *no)
    {
        esq = no;
    }

    void setDir(No *no)
    {
        dir = no;
    }
    
    void setChave(int k)
    {
        chave = k;
    }
};


class ArvoreBST
{
private:
    No *raiz;

public:
    ArvoreBST()
    {
        raiz = NULL;
    }
    
    void setRaiz(No* root){
        raiz = root;
    }


    void inserir(int chave)
    {
        if(raiz == NULL) 
            raiz = new No(chave); 
        else
            inserirAux(raiz, chave);
    }

    void inserirAux(No *no, int chave)
    {
        // se for menor, ent�o insere na sub-�rvore � esquerda
        if(chave < no->getChave())
        {
            // verifica se n�o tem filho a esquerda: achou local de inser��o 
            if(no->getEsq() == NULL)
            {
                No *novo_no = new No(chave);
                no->setEsq(novo_no); // add o novo_no � esquerda do n� atual
            }
            else
            {
                // sen�o, continua percorrendo recursivamente para esquerda
                inserirAux(no->getEsq(), chave);
            }
        }
        // se for maior, ent�o insere na sub-�rvore � direita
        else if(chave > no->getChave())
        {
            // verifica se n�o tem filho a direita: achou local de inser��o
            if(no->getDir() == NULL)
            {
                No *novo_no = new No(chave);
                no->setDir(novo_no); // add o novo_no � direita do n� atual
            }
            else
            {
                // sen�o, continua percorrendo recursivamente para direita
                inserirAux(no->getDir(), chave);
            }
        }
        // se a chave for igual a alguma presente na �rvore, n�o vamos inserir
        // n�o pode existir 2 chaves iguais na nossa BST
    }


    No* getRaiz()
    {
        return raiz;
    }

    void emOrdem(No* no)
    {
        if(no != NULL)
        {
            emOrdem(no->getEsq());
            cout << no->getChave() << " ";
            emOrdem(no->getDir());
        }
    }

    void preOrdem(No* no)
    {
        if(no != NULL)
        {
            cout << no->getChave() << " ";
            preOrdem(no->getEsq());
            preOrdem(no->getDir());
        }
    }

    void posOrdem(No* no)
    {
        if(no != NULL)
        {
            posOrdem(no->getEsq());
            posOrdem(no->getDir());
            cout << no->getChave() << " ";

        }
    }

    //versao iterativa
    No *Pesquisar(int dado, No* no)
    {
        if (raiz == NULL) return NULL; //arvore vazia
        No* atual = no;  // cria ptr aux (atual) e comeca a procurar
        while (atual->getChave() != dado)
        {
            if(dado < atual->getChave() )
                atual = atual->getEsq(); // caminha para esquerda
            else
                atual = atual->getDir(); // caminha para direita
            if (atual == NULL)
                return NULL; // encontrou uma folha e nao encontrou a chave
        }
        return atual; //encontrou o dado
    }

    //versao recursiva
    No *PesquisarRec (No* r, int k)
    {
        if (r == NULL || r->getChave() == k)
            return r;
        if (r->getChave() > k)
            return PesquisarRec(r->getEsq(), k);
        else
            return PesquisarRec(r->getDir(), k);
    }

    //versao recursiva
    //Uma �rvore n�o vazia tem 1 n� raiz + x n�s na sub-�rvore � esq + y n�s na sub-�rvore � dir
    int contarNos(No* atual)
    {
        if(atual == NULL)  return 0;
        else return ( 1 + contarNos(atual->getEsq()) + contarNos(atual->getDir()));
    }


    //versao recursiva
    int altura(No* atual)
    {
        if(atual == NULL)
            return -1; //�rvore ou sub-�rvore vazia: altura = -1
        else
        {
            if(atual->getEsq() == NULL && atual->getDir() == NULL)
                return 0; //�vore com apenas 1 n�, altura = 0
            else
            {//altura da �rvore � a altura da sub-�rvore de maior altura
                if (altura(atual->getEsq()) > altura(atual->getDir()))
                    return ( 1 + altura(atual->getEsq()) );
                else
                    return ( 1 + altura(atual->getDir()) );
            }
        }
    }
    
	//vers�o A
    No *excluir(No* t, int key){
        
        //Arvore t � vazia
        if (t == NULL) 
            return t;
        
        if (key < t->getChave())
            t->setEsq(excluir(t->getEsq(),key));
        else
            if (key > t->getChave())
                t->setDir(excluir(t->getDir(),key));
        
        //encontramos o n� a ser removido
        else{ 
            //Caso1: o no a ser excluido nao tem filhos
            if (t->getEsq() == NULL && t->getDir() == NULL){
            	delete(t);
                return NULL; //faz o pai apontar para NULL e o n� n�o faz mais parte da BST	
			}            	
            else 
                //Caso2: tem apenas um filho, a esquerda ou a direita
                if (t->getEsq() == NULL){
                    No* temp = t->getDir();
                    delete(t);
                    return temp; //Faz o pai apontar para o �nico filho do n�
                }
                else 
                    if  (t->getDir() == NULL){
                        No* temp = t->getEsq();
                        delete(t);
                        return temp; //Faz o pai apontar para o �nico filho do n�
                    }
            
            //Caso3: o no a ser excluido tem 2 filhos. Vamos escolher o menor dos maiores
            //para substituir o no que sera removido. Sucessor = menor no na sub-arvore da direita
            
            No* temp = findMin(t->getDir()); 
            
            //Copia a chave do sucessor para o no que esta sendo removido
            t->setChave(temp->getChave());
            
            //Remove da arvore o sucessor!
            t->setDir(excluir(t->getDir(),temp->getChave()));
        }
        
        //retorna a raiz da arvore
        return t;
        
    }


    int folhas(No *atual)
    {
        if(atual == NULL) return 0;
        if(atual->getEsq() == NULL && atual->getDir() == NULL) return 1;
        return folhas(atual->getEsq()) + folhas(atual->getDir());
    }

	//iterativo
    int min()
    {
        No *atual = raiz;
        No *anterior = NULL;
        while (atual != NULL)
        {
            anterior = atual;
            atual = atual->getEsq();
        }
        return anterior->getChave();
    }

	//iterativo
    int max()
    {
        No *atual = raiz;
        No *anterior = NULL;
        while (atual != NULL)
        {
            anterior = atual;
            atual = atual->getDir();
        }
        return anterior->getChave();
    }

	//recursivo
    No* findMin(No* t)
    {
        if(t == NULL)
            return NULL;
        else if(t->getEsq() == NULL)
            return t;
        else
            return findMin(t->getEsq());
    }

	//recursivo
    No* findMax(No* t) {
        if(t == NULL)
            return NULL;
        else if(t->getDir() == NULL)
            return t;
        else
            return findMax(t->getDir());
    }

  
    void infs(No* r)
    {
        No* aux;
        cout << "\nInformacoes gerais da arvore: \n";
        cout << "\n Altura da arvore: " << altura(raiz);
        cout << "\n Quantidade de folhas: " << folhas(raiz);
        cout << "\n Quantidade de Nos: " << contarNos(raiz);
        if (raiz != NULL )    // se arvore nao esta vazia
        {           
            aux = findMin(r);
            cout << "\n Valor minimo: " << aux->getChave();            
            aux = findMax(r);
            cout << "\n Valor maximo: " << aux->getChave();
        }
    }

    
    //print2D
    void print()
	{
  		print(raiz, 0);
	}

	void print(No *no, int space)
	{
  		if (no != NULL)
  		{	
    		print(no->getDir(), space + 5);
    		for (int k = 0; k < space; ++k) 
				cout << " ";
    		cout << no->getChave() << "\n";
    		print(no->getEsq(), space + 5);
  		}
	}
    
            
};

int main(int argc, char *argv[])
{
    ArvoreBST arv;
    int opcao, x;
    cout << ("\n***** Testando o TAD BST (Elementos do tipo int) ***** \n");

    do
    {
        cout << "\n\n";
        cout << "\n__________________________________________";        
        cout << "\n\n\t   Menu - Arvore BST\n";
        cout << "\n__________________________________________";
        cout << "\n";
        cout << "\n ----1: Inserir";
        cout << "\n ----2: Excluir";
        cout << "\n ----3: Pesquisar";
        cout << "\n ----4: Imprimir em ordem";
        cout << "\n ----5: Qde de nos";
        cout << "\n ----6: Altura";
        cout << "\n ----7: Imprimir 2D";
        cout << "\n ----8: Informacoes";
        cout << "\n ----9: Sair do programa\n";        
        cout << "\nOp: ";
        cin >> opcao;
        cout << "\n\n";
        switch(opcao)
        {
        case 1:
        {
            cout << "\n Informe o valor (int) -> ";
            cin >> x;
            arv.inserir(x);
            break;
        }
        case 2:
        {
            cout << "\n Informe o valor (int) -> ";
            cin >> x;
            No* resp = arv.excluir(arv.getRaiz(),x);
            arv.setRaiz(resp);
            if (resp != NULL)
            	cout << "Raiz: " << resp->getChave() << endl;
            else
            	cout << "A arvore esta vazia!" << endl;
            break;
        }
        case 3:
        {
            cout << "\n Informe o valor da chave (int) -> ";
            cin >> x;
            //No *ret = arv.Pesquisar(x,arv.getRaiz());
            No *ret = arv.PesquisarRec(arv.getRaiz(),x);
            if (ret == NULL)
            {
                cout << "\n Chave nao encontrada! ";
            }
            else
            {
                cout << "\n Chave encontrada! ";
            }
            break;
        }
        case 4:
        {
            cout << "Percorrendo em ordem...\n";
            arv.emOrdem(arv.getRaiz());
            break;
        }
        case 5:
        {
            cout << "Qde de nos: " << arv.contarNos(arv.getRaiz());
            break;
        }
        case 6:
        {
            cout << "Altura da Arvore: " << arv.altura(arv.getRaiz());
            break;
        }
        case 7:
        {
        	arv.print();
                       
            break;
        }
        case 8:
        {
            arv.infs(arv.getRaiz());
            break;
        }
        default:
            if (opcao != 9)
                cout << "\n Opcao invalida! \n\n\n";
        } // fim switch
    }
    while(opcao != 9);

    return 0;
}