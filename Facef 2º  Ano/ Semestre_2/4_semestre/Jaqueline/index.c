#include<stdio.h>

void Post(int vet[], int *p, int x) {
  vet[*p] = x;
  *p = *p + 1;
}

void Print(int vet[], int p) {
  int i;
  printf("Alert print\n");
  for (i = 0; i<p ;i++){
    printf("%i - ", vet[i]);
  }
}

void Order(int vet[], int p){
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

int main() {
    int vetPrincipal[5];
    int esc;
    int val = 0;
    int cont = 0;

    do {
      printf("\n================================================\n");
      printf("1 - Inserir\n");
      printf("2 - Print\n");
      printf("3 - Ordenar\n");
      printf(">>>");
      scanf("%i", &esc);
      printf("\n");
      printf("================================================\n");

      switch (esc) {
        case 1:
          printf("Digite um numero");
          scanf("%i", &val);
          Post(vetPrincipal, &cont, val);
          break;
        case 2:
          Print(vetPrincipal, cont);
          break;
        case 3:
          Order(vetPrincipal, cont);
          break;
        case 0:
          printf("Saindo...\n");
          break;
        default:
          printf("Error");

      }
    } while(esc!=0);
  return 0;
}
