void bubbleSort(int *lista, int tamanho){
    int i, j, aux;
    for(i = 1; i < tamanho; i++){
      for(j = 0; j < tamanho - 1; j++){
        if(lista[j] > lista[j + 1]){
            aux = lista[j];
            lista[j] = lista[j + 1];
            lista[j + 1] = aux;
            lista[j+1] = aux;
        }
      }
    }
}
