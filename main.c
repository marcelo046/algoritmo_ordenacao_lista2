#include <stdio.h>
#include <graphics.h>

#include "includes.h"

// para comilar e executar o codigo
// gcc main.c -o saida -lgraph && ./saida

int main(int argc, char const *argv[])
{
  //int gd = DETECT, gm;
  //initgraph(&gd,&gm,NULL);
  int opcao;

  do {
    opcao = menu();
    switch (opcao) {
      case 1:
        //bubble sort
        printf("\nbubble sort\n");
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
