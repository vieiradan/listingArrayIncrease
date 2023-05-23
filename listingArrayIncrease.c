#include <stdio.h>

int main() {

  int vet[5];
  int i, j, aux;

  for(i=0; i<5; i++) {
    printf("Enter number [%i]: ", i+1);
    scanf("%i", &vet[i]);
  }

  for(i=0; i<4; i++) {
    for(j=i+1; j<5; j++) {
      if(vet[i] > vet[j]) {
        aux = vet[i];
        vet[i] = vet[j];
        vet[j] = aux;
      }
    }
  } 
  printf("\nOrderning numbers [Increasing]\n");

  for(i=0; i<5; i++) {
    printf("\nNumber [%i]: %i", i+1, vet[i]);
  }
}
