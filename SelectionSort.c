#include <stdlib.h>
#include <stdio.h>

int SelectionSort(int *v, int tam){
  int menor=9999;
  int indice;
  int aux;

  for (size_t j = 0; j < tam; j++) {
    for (size_t i = 0; i < tam; i++) {
      if (v[i] < menor) {
        menor = v[i];
        indice = i;
      }
    }
    printf("%d\n\n %d \n\n",menor, indice );
    aux = v[j];
    v[j]= v[indice];
    v[indice]= v[j];
  }

}



int main(){

  int vetor[10]={7,4,1,8,5,2,0,9,6,3};

  SelectionSort(vetor,10);
  for (size_t i = 0; i < 10; i++){
    printf("%d\n",vetor[i]);
  }

  return 0;
}
