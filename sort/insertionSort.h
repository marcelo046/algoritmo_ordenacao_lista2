
void insertionSort(int *lista, int tamLista) {
    int aux = lista[1];
    int pos_aux = 1;
    int i = 0;

    while(1) {
        i = pos_aux;
        while(aux < lista[i - 1] && i != 0) {
            troca(lista, i, i-1);
            i -= 1;
        }
        //plotGraph(lista, tamLista, "titulo", 500);
        if(pos_aux != tamLista - 1) {
            pos_aux += 1;
            aux = lista[pos_aux];
        }
        else {
            break;
        }

    }
}
