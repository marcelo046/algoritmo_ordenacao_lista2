#ifndef PLOTGRAPH
#define PLOTGRAPH

//#define DIST_TO_RIGHT_SIDE 20

#define ROP 2 // radius of point (raio do ponto)
#define LEFT 20
#define TOP 40
#define RIGHT 610
#define BOTTOM 400

// valor maximo dos pontos é 360

void plotGraph(int *vector, int n, char *title, int minisec) {
  int x, dbp = RIGHT/n;
  cleardevice(); // apaga tela do grafico
  outtextxy(LEFT + 250, TOP-20, title);
  rectangle(LEFT, TOP, RIGHT, BOTTOM);
  for (x = 0; x < n; x++) {
    circle(x*dbp+LEFT, BOTTOM-vector[x], ROP);
  }
  delay(minisec);
}

#endif
