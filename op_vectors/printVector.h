void printVector(int *lista, int tamLista) {
  int i;
  printf("Vetor: [");
  for ( i = 0; i < tamLista; i++) {
    printf("%d, ", lista[i]);
  }
  printf("]\n");
}
