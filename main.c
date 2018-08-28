#include <stdio.h>
#include <graphics.h>

#include "plotGraph.h"


int main()
{



   int v[10] = {0,80,30,60,50,360,70,90,80,100};
   plotGraph(v, 10, "titulo");


   delay(5000);
   
   return 0;
}
