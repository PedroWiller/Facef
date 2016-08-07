#include<stdio.h>
int main(){
	
	int vet[10];
	int vet2[10];
	int i;
	for(i=0;i<10;i++){
		vet2[i]= 2+ i;
 	}
	for(i=0;i<10;i++){
		vet[i]= 0;
 	}
	
	for(i=0;i<10;i++){
		if (vet2[i]%2==0){
			vet[i]++;
		}
	}
	for(i=0;i<10;i++){
		printf("\n%d", vet[i]);
	}
	return 0;
}
