#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <graphics.h>

int gd = DETECT, gm;

#include "includes.h"

// para compilar e executar o codigo
// gcc main.c -o saida -lgraph && ./saida

int main(int argc, char const *argv[])
{
  int opcao;

  //initgraph(&gd,&gm,NULL);
  //plotGraph(&a, 1, "graf", 40);
  //closegraph();
  int v[10] = {20,80,40,60,50,100,70,90,30,10};
  do {
    opcao = menu();
    switch (opcao) {
      case 1:
        //bubble sort
        bubbleSort(v, 10, 1);
        //printf("\nbubble sort\n");
        getch();
        break;
      case 2:
        //insertion sort
        printf("\ninsertion sort\n");
        getch();
        break;
      case 3:
        //selection sort
        break;
      case 4:
        //Comparar os tres
        break;
      //case 5:
        //Configuracoes
        //break;
      case 0:
        // sair
        printf("\nTchau\n");
        break;
      default:
        printf("\nopcao invalida!!\n");
        getch();
    }
  } while(opcao);
  //int v[10] = {120,80,40,60,50,100,70,90,30,10};
  //printVector(v, 10);
  //insertionSort(v, 10);
  //plotGraph(v, 10, "titulo", 5000);
  //pausar();
  //getch();
  //closegraph();

  //limparTela();

   return 0;
}
