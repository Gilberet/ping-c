#include <stdio.h>
#define V 21
#define H 75



void inicio(char campo[V][H], int posicionX, int posicionY,int  inicioJugador,int  finJugador,int  inicioIA,int  finIA);
void borde(char campo[V][H]);
void raquetaIA(char campo[V][H], int inicioIA, int finIA);
void raquetaJuegador(char campo[V][H], int inicioJugador, int finJugador);
void pelota(char campo[V][H], int posisionX, int posisionY);
void leerCampo(char campo[V][H]);

int main()
{
  int positionX, positionY, inicioJugador, finJugador, inicioIA, finIA;
  // crear  matrix campo
  char campo[V][H];

  // posicion inicial
  positionX = 37;
  positionY = 10;

  //inicio jugador
  inicioJugador = 8;
  finJugador = 12;

  // inicio de IA
  inicioIA = 8;
  finIA = 12;


  inicio(campo, positionX, positionY, inicioJugador, finJugador, inicioIA, finIA);
  leerCampo(campo);
  //system("pause");
  
  return 0;
}


void inicio(char campo[V][H], int posicionX, int posicionY,int  inicioJugador,int  finJugador,int  inicioIA,int  finIA)
{
  borde(campo);
  raquetaJuegador(campo, inicioJugador, finJugador);
  raquetaIA(campo, inicioIA, finIA);
}

/**
 * Dibujar Campos 
 */
void borde(char campo[V][H])
{
  int i,j;

  for(i=0; i < V; i++)
  {
    for (j=0; j<V; j++)
    {
      if(i == 0 || i == V - 1)
      {
        campo[i][j] = '-';
      }else if(j = 0 || j == H - 1){
        campo[i][j] = '!';
      }else{
        campo[i][j] = ' ';
      }
    }
  }
}


/**
 * Dibujar Raqueta IA
 */
void raquetaIA(char campo[V][H], int inicioIA, int finIA)
{
  int i,j;

  for(i = inicioIA; i <= finIA; i++){
    for (j = H - 4; j <= H - 3; j++)
    {
      campo[i][j] = '#';
    }

  }
}


/**
 * Dibujar Raqueta Jugador
 */
void raquetaJuegador(char campo[V][H], int inicioJugador, int finJugador)
{
  int i,j;

  for(i = inicioJugador; i <= finJugador; i++){
    for (j = 2; j <= 3; j++)
    {
      campo[i][j] = 'X';
    }

  }
}


/**
 * Dibujar Pelota
 */
void pelota(char campo[V][H], int posisionX, int posisionY)
{
  campo[posisionX][posisionY] = 'O';
}

/**
 * Leer Campo
 */
void leerCampo(char campo[V][H])
{
  int i,j;
  for(i = 0;i<V; i++)
  {
    for(j= 0;j<H;j++)
    {
      printf("%c", campo[i][j]);
    }
    printf("\n");
  }
}












































