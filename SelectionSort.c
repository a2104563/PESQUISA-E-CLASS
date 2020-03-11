#include <stdlib.h>
#include <stdio.h>

int SelectionSort(int *v, int tam){
  int menor;
  int aux;

  for (size_t j = 0; j < tam; j++) {
    menor=j;
    for (size_t i = j; i < tam; i++) {
      if (v[menor] > v[i]) {
        menor = i;
      }
    }
    if(j != menor)
    aux = v[j];
    v[j]= v[menor];
    v[menor]= aux;
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
