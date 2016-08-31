#include<time.h>
#include <stdio.h>
void InsertSort(int arr[], int qtde){
	float start, stop;
	int i, aux, j;
	start = clock();
	for(i=1;i<qtde;i++){
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
	printf("%f", resultado);
	printf("\n");
}
void SelectSort(int arr[], int qtde){
	float start, stop;
  int i, aux, j;
  int menor;
	start = clock();
  for(i = 0;i<qtde;i++){
    menor = i;
    for(j=i+1;j<qtde;j++){
      if(arr[j] < arr[menor])
        menor = j;
    }
    aux = arr[i];
    arr[i] = arr[menor];
    arr[menor] = aux;
  }
	stop = clock();
	float resultado = (stop - start)/1000000;
	printf("%f", resultado);
	printf("\n");
}
void OrderAsc(int vet[], int qtde){
  int i;
  int j;
  int aux;
	float start, stop;
	start = clock();
    for(i = 0;i<qtde;i++){
      for(j = 0; j< qtde -1;j++){
          if(vet[j]> vet[j+1]){
            aux = vet[j];
            vet[j] = vet[j+1];
            vet[j+1] = aux;
          }
      }
    }
		stop = clock();
		float resultado = ((stop - start)/1000000);
		printf("%f", resultado);
		printf("\n");
}
int insertArray(int arr[], int qtde){
	int i;
	int cont = 0;
	for(i=0;i<qtde;i++){
		arr[i] = rand() % qtde;
		cont++;
	}
	return arr[qtde];
	//printf("quantidade %i\n", cont);
}
void Puts(int arr[], int qtde){
   int i;
   for (i=0; i < qtde; i++)
       printf("%d ", arr[i]);
   printf("\n");
}
void Ginyu(int arr[],int aux[], int qtd){
	int i;
	for(i = 0; i<qtd;i++){
		aux[i] = arr[i];
	}
}
int main(){
	int opcao;
	int qtde;
	int arr[100000];
	int arrAux[100000];

	do{
	    printf("|---------------------------------------------------------------|");
			printf("\n|00. Sair");
			printf("\n|01. Quantidade de elementos: 100");
			printf("\n|02. Quantidade de elementos: 1.000");
			printf("\n|03. Quantidade de elementos: 10.000");
			printf("\n|04. Quantidade de elementos: 100.000");
			printf("\n|05. Mostrar a tabela");
			printf("\n|---------------------------------------------------------------|");
			printf("\n|--------------------------------------------------------------: ");
			scanf("%i", &opcao);
			printf("\n");
			system("clear");
			switch(opcao){

			case 1: //inserir
				qtde = 100;
				arr[qtde] = insertArray(arr, qtde);
				Ginyu(arr, arrAux, qtde);
				InsertSort(arr, qtde);
				Ginyu(arr, arrAux, qtde);
				SelectSort(arr, qtde);
				Ginyu(arr, arrAux, qtde);
				OrderAsc(arr, qtde);
				Puts(arrAux, qtde);

				break;

			case 2: //inserir
				qtde = 1000;
				insertArray(arr, qtde);
				SelectSort(arr, qtde);
				OrderAsc(arr, qtde);
				break;

			case 3: //inserir
				qtde = 10000;
				insertArray(arr, qtde);
				SelectSort(arr, qtde);
				OrderAsc(arr, qtde);
				break;

			case 4: //inserir
				qtde = 100000;
				insertArray(arr, qtde);
				SelectSort(arr, qtde);
				OrderAsc(arr, qtde);
				break;


			case 0: //sair
				printf("Ate mais!");
				break;

			default:printf("Valor invalido");
		}

	}while(opcao !=0);

	return 0;
}
