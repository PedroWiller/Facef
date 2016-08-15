
#include <stdio.h>

void InsertSort(int arr[], int n){
	int i, aux, j;
	for(i=1;i<n;i++){
		aux = arr[i];
		j = i-1;
		while(j>=0 && arr[j]>aux){
			arr[j+1] = arr[j];
			j = j-1;
		}
		arr[j+1]=aux;
	}
}

void Puts(int arr[], int n)
{
   int i;
   for (i=0; i < n; i++)
       printf("%d ", arr[i]);
   printf("\n");
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6, 2, 14, 205, 192, 22};
    int n = sizeof(arr)/sizeof(arr[0]);

    InsertSort(arr, n);
    Puts(arr, n);

    return 0;
}
