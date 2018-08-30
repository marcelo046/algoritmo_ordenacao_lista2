void ordena(double *lista, int tamanho) {
  int i, j;
  double aux;

  for (i = 0; i < tamanho; i++) {
    for (j = i+1; j < tamanho; j++) {
      if (lista[j] < lista[i]) {
        aux = lista[i];
        lista[i] = lista[j];
        lista[j] = aux;
      }
    }
  }
}

void compararTempos(){
    int *vector_in = 0;
    int *vector_se = 0;
    int *vector_bu = 0;
    double *tempo = 0;
    tempo = (double *)malloc(3*sizeof(double));;
    double tempo_in , tempo_se, tempo_bu;

    vector_in = randomVector(vector_in, 99);
    vector_se = randomVector(vector_se, 99);
    vector_bu = randomVector(vector_bu, 99);

    tempo_in = insertionSort(vector_in, 99, 0, 100);
    tempo_se = selectionSort(vector_se, 99, 0, 100);
    tempo_bu =  bubbleSort(vector_bu, 99, 0 ,100);

    tempo[0] = tempo_in;
    tempo[1] = tempo_se;
    tempo[2] = tempo_bu;

    ordena(tempo,3);

    for(int i = 0; i < 3; i++){
        if(tempo_in == tempo[i]){
            printf("%dº lugar Insertion Sort com: %lf segundos\n",i + 1, tempo[i]);
        }
        else if(tempo_bu == tempo[i]){
            printf("%dº lugar Bubble Sort com: %lf segundos\n",i + 1, tempo[i]);
        }
        else if(tempo_se == tempo[i]){
            printf("%dº lugar Selection Sort com: %lf segundos\n",i, tempo[i]);
        }
    }
    getch();
}