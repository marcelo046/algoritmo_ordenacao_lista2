# algoritmo_ordenacao_lista2

//Alunos: Marcelo Araujo dos Santos     16/0035481
//        nome                            xxxxxxxxxx


Para rodar o programa deve-se instalar a biblioteca graphics.h

*//////*   Como instalar a biblioteca graphics.h usando SDL   *//////*

Primeiro, deixe baixando um arquivo compactado (link abaixo)
http://download.savannah.gnu.org/releases/libgraph/libgraph-1.0.2.tar.gz


Instale build-essential executando no terminal
- sudo apt-get install build-essential

Instale outros pacotes com o comando abaixo
- sudo apt-get install libsdl-image1.2 libsdl-image1.2-dev guile-1.8 \
  guile-1.8-dev libsdl1.2debian libart-2.0-dev libaudiofile-dev \
  libesd0-dev libdirectfb-dev libdirectfb-extra libfreetype6-dev \
  libxext-dev x11proto-xext-dev libfreetype6 libaa1 libaa1-dev \
  libslang2-dev libasound2 libasound2-dev*

Agora extraia o arquivo que foi baixado 'libgraph-1.0.2.tar.gz'.

Entre na pasta do arquivo e rode esses comandos pelo terminal
- ./configure
- make
- sudo make install
- sudo cp /usr/local/lib/libgraph.* /usr/lib


Agora, para rodar o programa, baixe o projeto com o comando
- git clone https://github.com/marcelo046/algoritmo_ordenacao_lista2
Entre na pasta do projeto com
- cd algoritmo_ordenacao_lista2
Compile o programa com
- gcc main.c -o saida -lgraph

E finalmente execute o programa com
- ./saida



Para aprender mais sobre a biblioteca graphics.h
https://www.programmingsimplified.com/c/graphics.h
