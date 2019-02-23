#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void create(float vetor[10][10]);
void printar(float vetor[10][10]);

int main ()
{
  float vetorClasse1[10][10];
  float vetorClasse2[10][10];
  float vetorClasse3[10][10];
  float vetorClasse4[10][10];
  float vetorClasse5[10][10];
  
  float *Ponteiro[10][10];
  float *Ponteiro1[10][10];
  float *Ponteiro2[10][10];
  
  Ponteiro[10][10] = &vetorClasse1[10][10];
  populaClasse(Ponteiro[10][10]);
  
  Ponteiro[10][10] = &vetorClasse2[10][10];
  populaClasse(Ponteiro[10][10]);
  
  Ponteiro[10][10] = &vetorClasse3[10][10];
  populaClasse(Ponteiro[10][10]);
  
  Ponteiro[10][10] = &vetorClasse4[10][10];
  populaClasse(Ponteiro[10][10]);
  
  Ponteiro[10][10] = &vetorClasse5[10][10];
  populaClasse(Ponteiro[10][10]);
  
  printar(&vetorClasse1);
}


void populaClasse(float vetor[10][10]){
  int i, j, a = 5.0;
  for(i = 0 ; i <= 10 ; i++)
  {
    for(j = 0 ; j <= 10 ; j++)
    {
      vetor[i][j] = (((float)rand()/(float)(RAND_MAX)) * a);
    }
  }
}

void printar(float vetor[10][10])
{
  int i, j;
  for(i = 0 ; i <= 10 ; i++)
    {
      for(j = 0 ; j <= 10 ; j++)
      {
        printf ("[%d][%d]=%0.1f ", i, j,vetor[ i ][ j ]);
      }
      printf("\n");
    }
}