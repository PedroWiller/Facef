#include "stdio.h"

void Post(int vet[], int *p){
  int i;
  int vetor = 5;
  for(i = 0;i<=5;i++){
    vet[i] = vetor;
    vetor --;
    *p = *p + 1;
  }
}

void OrderAsc(int vet[], int p){
  int i;
  int j;
  int tmp = 0;
    for(i = 0;i<p;i++){
      for(j = 0; j< p -1;j++){
          if(vet[j]> vet[j+1]){
            tmp = vet[j];
            vet[j] = vet[j+1];
            vet[j+1] = tmp;
          }
      }
    }
}

void InsertSort(int vet[], int p){
  int i, j, tmp;
  for(i = 1;i<p;i++){
    j = i;
    while(j > 0 && vet[j-1] > vet[j]){
      tmp = vet[j];
      vet[j] = vet[j - 1];
      vet[j-1] = tmp;
      j--;
    }
  }
}

void Print(int vet[]){
  int i;
  for (i = 0; i <= 5; i++) {
    printf("%i - ", vet[i]);
  }
}

int main() {
  int array[5];
  int p;
  Post(array, &p);
  system("clear");
  printf("----------------------------");
  printf("\n");
  Print(array);
  printf("\n");
  InsertSort(array, p);
  Print(array);
  printf("\n");
  printf("----------------------------");
  printf("\n");
  return 0;
}
