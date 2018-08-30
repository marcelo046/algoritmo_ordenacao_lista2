
double bubbleSort(int *lista, int tamanho, int mostrarPassos){
  int i, j, aux;
  time_t startTime, finalTime;

  //int gd = DETECT, gm;
  initgraph(&gd,&gm,NULL);

  startTime = time(NULL);
  for(i = 1; i < tamanho; i++){
    for(j = 0; j < tamanho-1; j++){
      if(lista[j] > lista[j+1]){
        aux = lista[j];
        lista[j] = lista[j+1];
        lista[j+1] = aux;
      }
      if (mostrarPassos) {
        plotGraph(lista, tamanho, "Bubble Sort", 100);
      }
    }
  }
  finalTime = time(NULL);
  closegraph();

  return difftime(finalTime, startTime);
}
