#include <stdio.h>
#include <stdlib.h>

const int N=5; // dimensione massima dell'array

int massimo(int valori[], int dimensione);
int minimo(int valori[], int dimensione);
float media(int valori[], int dimensione);

int main(int argc, char** argv) {
    int i;
    int numeri[N];
    int max, min;
    float med;
    
    printf("Inserisci %d valori interi\n", N);
    for(i=0; i<N; i++) {
        printf("Inserisci il valore di indice %d:", i);
        scanf("%d", &(numeri[i]));
    }
    
    max = massimo(numeri, N);
    min = minimo(numeri, N);
    med = media(numeri, N);
    
    printf("Il valore MASSIMO e' %d.\n", max);
    printf("Il valore MINIMO e' %d.\n", min);
    printf("Il valore MEDIO e' %f.\n", med);
    
    return (EXIT_SUCCESS);
int massimo(int valori[], int dimensione){
	int max = valori[0];
	int i;
	for(i=1; i<dimensione; i++){
	
   		if(max<valori[i])
			{
    			max = valori[i];
    		}
	
}
    return max;
}

int minimo(int valori[], int dimensione){
    int min= valori[0];
	int i;
	for(i=1; i<dimensione; i++){
	
   		if(min>valori[i])
			{
    			min = valori[i];
    		}
	
}
    return min;
}

float media(int valori[], int dimensione){
	
    int conta=1;
    int somma = valori[0];
    int media;
    int i = 1;
    	while(i<dimensione)
			{
				somma=somma+valori[i];
    			i++;
    			conta++;
			}
   	 
    media=somma/conta;
    return media;
}
