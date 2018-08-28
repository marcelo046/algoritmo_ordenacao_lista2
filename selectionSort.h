
void selectionSort(int *lista, int tamLista) {
  int i, j;
  for (i = 0; i < tamLista; i++) {
    for (j = i+1; j < tamLista; j++) {
      if (lista[j] < lista[i]) {
        troca(lista, i, j);
      }
    }
  }
}
