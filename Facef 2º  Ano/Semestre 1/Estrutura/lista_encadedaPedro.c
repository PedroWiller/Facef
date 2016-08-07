#include<stdio.h>
#include<stdlib.h>

struct no{
	int info;
	struct no *prox;
};

void entrar(struct no **lista, int x){
	struct no *p;
	if((p = malloc(sizeof(struct no))) == NULL){
		printf("\nErro de Alocação de memoria:");
	}
	else{
		p->info = x;
		p->prox = *lista;
		*lista = p;
	}
}

void printar(struct no *lista){
	struct no *p;
	p = lista;
	while(p!=NULL){
		printf("%i ", p->info);
		p = p->prox;
	}
}
int quantidade(struct no *lista){
	struct no *p;
	int aux = 0 ;
	p =lista;
	while(p!=NULL){
		p = p->prox;
		aux +=1;
	}
	return aux;
}
int mediaTotal(struct no *lista){
	struct  no *p;
	p = lista;
	int aux = 0,  quant = 0;
	while(p!=NULL){
		quant = p->info + quant;
		p = p->prox;
		aux+=1;
	}
	return quant/aux;
}

main(){
	struct no *inicio = NULL;
	int x;
	int esc;
	do{
		getch();
		printf("\n1 - Entrada de dados");
		printf("\n2 - Printar dados");
		printf("\n3 - Mostrar quantidade de nos");
		printf("\n4 - Media\n");
		scanf("\n %i", &esc);
		system("cls");
		switch(esc){
			case 1:
				printf("\nEntre com valor: \n");
				scanf(" %i", &x);
				entrar(&inicio, x);
				break;
			case 2:
			printar(inicio);
			break;
			case 3:
				printf("\nQuantidade de numeros digitados %i\n", quantidade(inicio));
				break;
			case 4:
				printf("\nMedia: %i", mediaTotal(inicio));		
			default:
			printf("\nValor invalido\n");
			break;
		}
	}while(esc!=0);
}

