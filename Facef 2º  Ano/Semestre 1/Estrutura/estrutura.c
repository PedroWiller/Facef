#include <stdio.h>
#include <stdlib.h>
struct no{
	int info;
	struct no *prox;
};

//funcao para inserir elementos em lista 
void inserir(struct no **inicio, int x){
		struct no *p;
		if((p=malloc(sizeof(struct no))) == NULL){
			printf("\nErro de alocação de memoria\n");
		}
		else{
		p->info = x;
		p->prox = *inicio;
		*inicio = p;
		}
	}
//printar lista 
void imprimir(struct no *lista){
	struct no *p;
	p = lista;
	while(p!=NULL){
		printf("%i ", p-> info );
		p = p->prox;
	}
}
//retorna a quantidade de elementos
int retorna(struct no *lista){
	struct no *p;
	 p = lista;
	 int aux = 0;
		while(p!=NULL){
			p =p->prox;
			aux += 1;
		}
		return aux;
	}
//retorna a media de elementos digitados
int rMedia(struct no *lista){
	struct no *p;
	p = lista;
	int media = 0,aux = 0;
	while(p!=NULL){
		media = p->info;
		p = p->prox;
		aux+=1;
	}
	
	return media;
}
//remove o primeiro elemento da lista	
int remover(struct no **inicio){
	int aux;
	struct no *p;
	p = *inicio;
	aux = p->info;
	*inicio = p->prox;
	free(p);
	return aux;
	
}
//funcao para inserir numero  no final da lista
  void fim(struct no *inicio, int num){
  	struct no *p, *novo;
  	p = inicio;
  	while(p->prox!=NULL){
  		p=p->prox;
	  }
	  novo  = malloc(sizeof(struct no));
	  novo->info =  num;
	  novo->prox=NULL;
	  p->prox = novo;
  }
 //// 
 //funcao que remove o ultimo numero e mostra
 int removeMostra(struct no **inicio){
 	struct no *p;
 	int aux = 0;
 	p = *inicio;
 	if(p==NULL){
	 printf("\nLista vazia");
	 }
	 else{
 	if (p->prox == NULL){
 		aux =  p->info;
 		free(p);
 		*inicio = NULL;
	 }
	 else{
	 	while(p->prox->prox!=NULL){
	 		p =p->prox;
		 }
		 aux =p->prox->info;
		 free(p->prox);
		 p->prox = NULL;
	 }
}
	 return aux;
 }
 //fazer uma funcao para encontrar um dado valor
 //caso encontrar mostrar se nao encontrar retornar
 int retornaIgual(struct no *inicio, int x){
 		struct no *p;
 		p = inicio;
 		int retorna;
 		if (p==NULL){
 			printf("\nLista vazia");
		 }
 		while(p!=NULL){
 			if (p->info==x){
 				retorna = 1;
			 }
			 else{
			 	retorna = 0;
			 }
			 p=p->prox;
		 }
		 
		 if (retorna==1){
		 	printf("\nValor %i encontrado", x);
		 }
		 else{
		 	printf("\nValor nao encontrado");
		 }
		 return retorna;
 }
 //inserir um elemento no meio da lista
 int inserirMeio(struct no *inicio, int x){
 	struct no *p;
	struct no *novo;
 	int i = 0;
 	printf("%d", x);
 	p = inicio;
 	if (retorna(inicio) == 1){
 		printf("\nContem apenas 1 elemento na lista");
	 }
	 else{
	 while(p!=NULL){
 		if (p->info==x){
 			break;
		 }
 		p=p->prox; 	
	 }
	 if (p==NULL){
	 	p = inicio;
	 	int auxTamanho = retorna(inicio);
	 	auxTamanho = auxTamanho/2;
	 	for(i = 0;i<auxTamanho-1; i++){
	 		p = p->prox;
	 	}
	 		if ((novo  = malloc(sizeof(struct no)))==NULL){
	 			printf("\nErro de alocação de memoria ");
			 }
			 else{			 				 
	 		novo->info =  x;
	 		printf("\n%d", novo->info);
	 		novo->prox = p->prox;
	 		p->prox = novo;
	 		printf("\nValor inserido");
	 	}
	}
	 else{
	 	printf("\nNumero ja consta na lista");
	 }
}
 
 }
//////
  main(){
 	
	struct no *inicio;
	int i, esc = 0;
	inicio = NULL;
	do{
		printf("\nDados:\n");
		printf("Selecione uma opicao:\n");
		printf("1 - Entrada de dados\n2 - Apresentar\n3 - Mostrar qtd elementos\n4 - Media");
		printf("\n5 - Remover\n6 - Inserir valor no final\n7 - Buscar Valor\n8 - Busca Valor:");
		printf("\n9 - Busca numero, se nao constar na lista inserir no meio:\n->");
		scanf("%i", &esc);
		system("cls");                                                           
		switch(esc){                                                             
			case 1:
				printf("\nDigite um valor\n");
				scanf("%i", &i);
				inserir(&inicio, i);
				break;
			case 2:
				imprimir(inicio);
				break;
			case 3:
				printf("\nNQuantidade de elementos %i", retorna(inicio));
				break;	
			case 4:
				printf("\nMedia de valores: %i", rMedia(inicio));
				break;
			case 5:
			printf("\nNumero removido: %i", remover(&inicio));
			break;
			case 6:
				printf("\nDigite valor para inserir: ");
				scanf("\n%i", &i);
				fim(inicio, i);
				break;
			case 7:
			printf("\nDigite um valor a ser buscado\n");
			scanf("\n%i", &i);
			retornaIgual(inicio, i);
			break;
			case  8:
				printf("\nNumero maior removido %i", removeMostra(&inicio));
				break;
			case 9:
			printf("\nDigite numero a ser persquisado: ");
			scanf("\n%i", &i);
			inserirMeio(inicio, i);
			break;
			default:
			printf("\nCodigo invalido!\n");
			break;
		}
		
	}while(esc!=0);

}
																	
	
