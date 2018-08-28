#ifndef PLOTGRAPH
#define PLOTGRAPH


//#define DIST_TO_RIGHT_SIDE 20
#define DBP 10 // distance between points
#define ROP 3 // radius of point (raio do ponto)
#define LEFT 20
#define TOP 40
#define RIGHT 600
#define BOTTOM 400

// valor maximo dos pontos é 360

void plotGraph(int *points, int n, char *title, int minisec) {
  int gd = DETECT, gm;
  initgraph(&gd,&gm,NULL);

  int x;
  cleardevice(); // apaga tela do grafico
  outtextxy(LEFT + 250, TOP-20, title);
  rectangle(LEFT, TOP, RIGHT, BOTTOM);
  for (x = 0; x < n; x++) {
    circle(x*DBP+LEFT, BOTTOM-points[x], ROP);
  }
  delay(minisec);
}



#endif
