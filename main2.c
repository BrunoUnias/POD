#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO_VETOR 1000

int* inicializaVetorRandom() {
    int i;
    int *ret = malloc(sizeof(int) * TAMANHO_VETOR);
    srand(time(NULL));
    for(i = 0; i < TAMANHO_VETOR;i++) {
        ret[i] = rand();
    }
    return ret;
}

int* inicializaVetorOrdenado() {
    int i;
    int *ret = malloc(sizeof(int) * TAMANHO_VETOR);
    for(i = 0; i < TAMANHO_VETOR;i++) {
        ret[i] = i;
    }
    return ret;
}

int* inicializaVetorInvertido() {
    int i;
    int *ret = malloc(sizeof(int) * TAMANHO_VETOR);
    for(i = 0; i < TAMANHO_VETOR;i++) {
        ret[i] = TAMANHO_VETOR - i;
    }
    return ret;
}

void selecitonSort(int vet[], int tam){
	int i, j, min, aux;
	for(i=0; i<tam; i++){
		for(j=i+1; j<tam; j++){
			if(vet[min] > vet[j])
			min = j;
		}
		aux = vet[i];
		vet[i] = vet[min];
		vet[min] = aux;
		
	}
}

void insertionSort(int vet[], int tam) {
    int i,j = 0, aux = 0;
    for(i = 1; i < tam; i++) {
        aux = vet[i];
        j = i - 1;
        while((j >= 0) && (vet[j] > aux)){
            vet[j+1] = vet[j];
            j--;
        }
        vet[j+1] = aux; 
    }
}

void bubbleSort(int vert[], int tam){
	int i,j,aux;
	for(i= tam-1; i>0; i--){
		for(j=0; j<i; j++){
			if(vert[j] > vert[j+1]){
				aux = vert[j];
				vert[j] = vert[j+1];
				vert[j+1] = aux;
			}
		}
	}
}


int main () {
    long int start, end;
    int* v;
    
    printf("InsertionSort: \n");
    v = inicializaVetorRandom();
    start = clock();
    insertionSort(v, TAMANHO_VETOR);
    end = clock();
    free(v);
    printf("\t Random: %ld milisegundos\n", (end - start) / (CLOCKS_PER_SEC / 1000));
    
    v = inicializaVetorOrdenado();
    start = clock();
    insertionSort(v, TAMANHO_VETOR);
    end = clock();
    free(v);
    printf("\t Ordenado: %ld milisegundos\n", (end - start) / (CLOCKS_PER_SEC / 1000));
    
    v = inicializaVetorInvertido();
    start = clock();
    insertionSort(v, TAMANHO_VETOR);
    end = clock();
    free(v);
    printf("\t Invertido: %ld milisegundos\n", (end - start) / (CLOCKS_PER_SEC / 1000));
       
       printf("BubbleSort\n");
   v = inicializaVetorRandom();
    start = clock();
    bubbleSort(v, TAMANHO_VETOR);
    end = clock();
    free(v);
    printf("\t Random: %ld milisegundos\n", (end - start) / (CLOCKS_PER_SEC / 1000));
    
    v = inicializaVetorOrdenado();
    start = clock();
    bubbleSort(v, TAMANHO_VETOR);
    end = clock();
    free(v);
    printf("\t Ordenado: %ld milisegundos\n", (end - start) / (CLOCKS_PER_SEC / 1000));
    
    v = inicializaVetorInvertido();
    start = clock();
    bubbleSort(v, TAMANHO_VETOR);
    end = clock();
    free(v);
    printf("\t Invertido: %ld milisegundos\n", (end - start) / (CLOCKS_PER_SEC / 1000));
    
    
    printf("selectionSort\n");
     v = inicializaVetorRandom();
    start = clock();
    selectionSort(v, TAMANHO_VETOR);
    end = clock();
    free(v);
    printf("\t Random: %ld milisegundos\n", (end - start) / (CLOCKS_PER_SEC / 1000));
    
    v = inicializaVetorOrdenado();
    start = clock();
    selectionSort(v, TAMANHO_VETOR);
    end = clock();
    free(v);
    printf("\t Ordenado: %ld milisegundos\n", (end - start) / (CLOCKS_PER_SEC / 1000));
    
    v = inicializaVetorInvertido();
    start = clock();
    selectionSort(v, TAMANHO_VETOR);
    end = clock();
    free(v);
    printf("\t Invertido: %ld milisegundos\n", (end - start) / (CLOCKS_PER_SEC / 1000));
       
    return 0;
}

/*void BubbleSort(int vert[], int tam){
	int i,j,aux;
	for(i= tam-1; i>0; i--){
		for(j=0; j<i; j++){
			if(vert[j] > vert[j+1]){
				aux = vert[j];
				vert[j] = vert[j+1];
				vert[j+1] = aux;
			}
		}
	}
}*/

/*printf("BubbleSort\n");
 v= inicializaVetorRandom();
 v = inicializaVetorRandom();
    start = clock();
    bubbleSort(v, TAMANHO_VETOR);
    end = clock();
    free(v);
    printf("\t Random: %ld milisegundos\n", (end - start) / (CLOCKS_PER_SEC / 1000));
    
    v = inicializaVetorOrdenado();
    start = clock();
    bubbleSort(v, TAMANHO_VETOR);
    end = clock();
    free(v);
    printf("\t Ordenado: %ld milisegundos\n", (end - start) / (CLOCKS_PER_SEC / 1000));
    
    v = inicializaVetorInvertido();
    start = clock();
    bubbleSort(v, TAMANHO_VETOR);
    end = clock();
    free(v);
    printf("\t Invertido: %ld milisegundos\n", (end - start) / (CLOCKS_PER_SEC / 1000));*/


