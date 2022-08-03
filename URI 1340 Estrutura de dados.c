#include <stdio.h>
#include <stdlib.h>

typedef struct ponteiro{
    struct e *comando_tipo1; 
    struct e *comando_tipo2; 

    int topo;
    int *p; 
}ponteiro;

typedef struct e{
    int n;
    struct e *proximo;
}e;

ponteiro *alocar();
void inserir(ponteiro *ponteiro_x, int n);
void deletar(ponteiro *ponteiro_x, int n);

int pilha, fila, filap;

int main(){
    ponteiro *ponteiro_x;
    int x, i, op, n;

    while(scanf("%d", &x) == 1){
        pilha = 1;
        fila = 1;
        filap = 1;

        ponteiro_x = alocar();

        for(i = 0; i < x; i++){
            scanf("%d %d", &op, &n);

            if(op == 1) inserir(ponteiro_x, n);
            else deletar(ponteiro_x, n);
        }

        if(pilha == 1 && filap == 1 || filap == 1 && fila == 1 || pilha == 1 && fila == 1){
        	
        	printf("not sure\n");
		} 
        
		else if(filap){
				printf("priority queue\n");
			}
		
        else if(fila){
				printf("queue\n");
			}
		
        else if(pilha){
				printf("stack\n");
			}
		
        else 
		printf("impossible\n");

    }

    return 0;
}

ponteiro *alocar(){
    ponteiro *aux;

    aux = (ponteiro*)malloc(sizeof(ponteiro));
    aux->topo = 0;
    aux->p = NULL;
	aux->comando_tipo1 = NULL;
    aux->comando_tipo2 = NULL;
    return aux;
}


void inserir(ponteiro *ponteiro_x, int n){
    e *ep, *en, *aux, *ant;
    int first=1;

    if(filap == 1){
        ep = (e*)malloc(sizeof(e));
        ep->n = n;
        ep->proximo = NULL;

        if(ponteiro_x->comando_tipo1 == NULL) ponteiro_x->comando_tipo1 = ep;
        else{
            aux = ponteiro_x->comando_tipo1;

            while(aux!=NULL){
                if(ep->n > aux->n) break;

                first = 0;
                ant = aux;
                aux = aux->proximo;
            }

            if(first == 1){
                ant = ponteiro_x->comando_tipo1;
                ponteiro_x->comando_tipo1 = ep;
                ep->proximo = ant;
            } 
			
			else{
                ant->proximo = ep;
                ep->proximo = aux;
            }
        }
    }

    if(fila == 1){
        en = (e*)malloc(sizeof(e));
        en->n = n;
        en->proximo = NULL;

        if(ponteiro_x->comando_tipo2 == NULL) ponteiro_x->comando_tipo2 = en;
        else{
            aux = ponteiro_x->comando_tipo2;

            while(aux->proximo != NULL)aux = aux->proximo;

            aux->proximo = en;
        }
    }

    if(pilha==1){
        if(ponteiro_x->topo == 0){
        	ponteiro_x->p = (int*)malloc(sizeof(int));
		} 
        else
        	ponteiro_x->p = (int*)realloc(ponteiro_x->p ,sizeof(int)*(ponteiro_x->topo+1));

        ponteiro_x->p[ponteiro_x->topo] = n;
        ponteiro_x->topo++;
    }
}

void deletar(ponteiro *ponteiro_x, int n){
    e *aux;

    if(ponteiro_x->p != NULL && pilha != 0){
        if(ponteiro_x->p[ponteiro_x->topo-1] == n){
            ponteiro_x->p = (int*)realloc(ponteiro_x->p, sizeof(int)*(ponteiro_x->topo-1));
            ponteiro_x->topo--;
        } else pilha = 0;
    }

    if(ponteiro_x->comando_tipo1 != NULL && filap != 0){
        aux = ponteiro_x->comando_tipo1;

        if(aux->n == n){
            aux = aux->proximo;
            free(ponteiro_x->comando_tipo1);
            ponteiro_x->comando_tipo1 = aux;
        } else filap = 0;
    }

    if(ponteiro_x->comando_tipo2 != NULL && fila != 0){
        aux = ponteiro_x->comando_tipo2;

        if(aux->n == n){
            aux = aux->proximo;
            free(ponteiro_x->comando_tipo2);
            ponteiro_x->comando_tipo2 = aux;
        } else fila = 0;
    }
}