#include <stdio.h>

void bubblesort( int *V, int X){
	int aux , fim, N = X;
	while(fim != 0){	
		for(int i = 0; i < N-1; i++){
			if(V[i] > V[i+1]){
				aux = V[i];
				V[i] = V[i+1];
				V[i+1] = aux;
				fim = i;
			}
		}
		N = N-1;
	}
}


int main() {
    // Write C code here
 int Teste[10] = {9,8,7,6,5,4,3,2,1,0};
    for (int i = 0; i < 10; i++){
        printf("%i",Teste[i]);
    }

    bubblesort(Teste,10);

    printf("\n");

    for (int i = 0; i < 10; i++){
        printf("%i",Teste[i]);
    }
}
