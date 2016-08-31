#include<time.h>
#include <stdio.h>
#define MAX 20000

void InsertSort(int arr[], int qtd){
	float start, stop;
	int i, aux, j;
	start = clock();
	for(i=1;i<qtd;i++){
		aux = arr[i];
		j = i-1;
		while(j>=0 && arr[j]>aux){
			arr[j+1] = arr[j];
			j = j-1;
		}
		arr[j+1]=aux;
	}
	stop = clock();
	float resultado = (stop - start)/1000000;
	printf("%6.3f", resultado);
	printf("\n");
}

void SelectSort(int arr[], int qtd){
	float start, stop;
  int i, aux, j;
  int menor;
	start = clock();
  for(i = 0;i<qtd;i++){
    menor = i;
    for(j=i+1;j<qtd;j++){
      if(arr[j] < arr[menor])
        menor = j;
    }
    aux = arr[i];
    arr[i] = arr[menor];
    arr[menor] = aux;
  }
	stop = clock();
	float resultado = (stop - start)/1000000;
	printf("%6.3f", resultado);
	printf("\n");
}

void OrderAsc(int vet[], int qtd){
  int i;
  int j;
  int aux;
	float start, stop;
	start = clock();
    for(i = 0;i<qtd;i++){
      for(j = 0; j< qtd -1;j++){
          if(vet[j]> vet[j+1]){
            aux = vet[j];
            vet[j] = vet[j+1];
            vet[j+1] = aux;
          }
      }
    }
		stop = clock();
		float resultado = ((stop - start)/1000000);
		printf("%6.3f", resultado);
		printf("\n");
}

void Puts(int arr[]){
   int i;
   for (i=0; i < qtd; i++)
       //printf("%d ", arr[i]);
   printf("\n");
}

void insertArray(int arr[], int qtd){
	int i;
	int cont = 0;
	for(i=0;i<qtd;i++){
		arr[i] = rand() % qtd;
		cont++;
	}
	printf("quantidade %i\n", cont);
}
/*
int main(){
    int arr[MAX];
		int ops;
		printf("\n\n");

		insertArray(arr);
		printf("SelectSort\n");
    SelectSort(arr);
		insertArray(arr);
		printf("InsertSort\n");
		InsertSort(arr);
		insertArray(arr);
		printf("BubbleSort\n");
		OrderAsc(arr);
*/
int main(){
	int opcao;

	do{
			getch();
    	system("cls");
    	printf("|---------------------------------------------------------------|");
			printf("\n|00. Sair");
			printf("\n|---------------------------------------------------------------|");
			printf("\n|--------------------------------------------------------------: ");
			scanf("%i", &opcao);
			printf("\n");

		switch(opcao){
				case 1: //inserir
				int qtd = 100;
				int arr[100];
				SelectSort(arr, qtd);
				InsertSort(arr, qtd);
				OrderAsc(arr, qtd);
					break;
				case 0: //sair
					printf("Ate mais!");
					break;
				default:printf("Valor invalido");
			}
	}while(opcao !=0);
	getch();
	return 0;
}
