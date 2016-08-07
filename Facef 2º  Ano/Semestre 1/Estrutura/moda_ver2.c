#include<stdio.h>
#include<conio.h>
int main(){
	int vet[5];
	//digita os 5 numeros
	printf("\nDigite 5 numeros: \n");
	int i;
	for (i = 0;i<5;i++){
		scanf("%i", &vet[i]);
	}
	mode(vet);
}
	//comparacao da moda
	void mode(int vet[]){
		int i, j, moda = 0;
		int maior = 0;
		int num_moda = 0;
		int equal[5];
		//add values 0  in vetor equal
		for (i = 0;i<5;i++) {
			equal[i] = 0;
		}
		//check numebers and stores in vetor
		for (i = 0; i<5;i++){
			for( j = i;j<5;j++){
				if (vet[i]==vet[j]){
					equal[i]++;
					
				}
			}
		}
		for (i=0;i<5;i++){
			if (equal[i]> maior){
				moda = i;
				maior = equal[i];
			}
		}
		
		//verifica se existe alguma moda a mais	
		for(i=0;i<5;i++){
			if (equal[i]== maior){
				num_moda++;
			}
		}
		
		//printar valores
		if (num_moda == 1){
			printf("\nModa: %d", vet[moda]);
		}
		else{
			printf("\n nao existe moda");
		
	}
}


