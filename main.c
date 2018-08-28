#include <stdio.h>
#include <graphics.h>

#include "troca.h"
#include "plotGraph.h"
#include "pausar.h"
#include "limparTela.h"
#include "insertionSort.h"
#include "printVector.h"
#include "selectionSort.h"

int main(int argc, char const *argv[])
{
  //XInitThreads();
  //gtk_init(&argc, &argv);

  int gd = DETECT, gm;
  initgraph(&gd,&gm,NULL);

  int v[14] = {120,80,40,60,50,100,70,90,30,10, 5, 4, 60, 45};
  printVector(v, 14);
  insertionSort(v, 14);
  //plotGraph(v, 10, "titulo", 5000);
  //pausar();
  getch();
  closegraph();

  //limparTela();


   return 0;
}
