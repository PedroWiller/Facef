#include<stdio.h>
#include<conio.h>

//void moda( int vet[]);

int main(void){
    
    int vetor[5];
	int i ;   
	
	printf("Informe 5 numeros: ");
	for(i=0;i<5;i++){
		scanf("%i", &vetor[i]);
	} 

    moda(vetor);

	return 0;

}

void moda(int vet[]){
	
	int i= 0;
	int j= 0;
	int maior= 0;
	int moda= 0;
	int igual[5];	
    int numero_modas = 0;
    
    
	//zera o vetor que ira armazenar os valores iguais 
	for(i=0; i < 5; i++){
            igual[i]=0;
        }
        
        
	//armazena os valores iguais 
	for(i=0; i < 5; i++){
            for(j=i; j < 5; j++){
                if(vet[i] == vet[j]){
                    igual[i] ++; 
                }
            }
    }
    
    
    //verifica qual numero se repete mais, usando os numeros armazenados no for anterior
    for(i=0; i < 5; i++){
            if( igual[i] > maior ){
                moda=i;
                maior=igual[i];
            }
    }
    
    
    //verifica se existe mais de uma moda
    
	for(i=0; i < 5; i++){
        if( igual[i] == maior ){
            numero_modas++;
        }
    }
    
        
    if( numero_modas == 1){
    		printf("O valor da moda e: %i\n", vet[moda]);
            
        }
        else
            printf("Moda nao existe.");
    }

