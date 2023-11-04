#include <stdio.h>
#define N 2 /* fuer eine NxN-Matrix */

int main() {

  double matrix[N][N]; /* Deklaration der Matrix als 2-dim. Array */
  double skalar;
  int zeile, spalte = 0;

  /* Initialisierung */
  printf("Bitte geben Sie den Skalar: ");
  scanf("%lf", &skalar);

  printf("Bitte geben sie die Elemente von Matrix ein.\n");

  for(int i = 0; i < N*N; i++){
	  if(i < N){
		  zeile = 0;
		  spalte = i;
	  } else {
		  zeile = i/N;
		  spalte = i%N;
	  }
	  printf("Element in [%d]\t[%d]:", zeile, spalte);
	  scanf("%lf", &matrix[zeile][spalte]);
  }

  printf("\nDer eingegebende Matrix sieht so aus:\n");
  zeile = spalte = 0;
  for(int j = 0; j < N*N; j++){
	  if(j < N){
		  zeile = 0;
		  spalte = j;
	  } else {
		  zeile = j/N;
		  spalte = j%N;
	  }
	  printf("%f\t", matrix[zeile][spalte]);
	  if(spalte == N-1){
		  printf("\n");
	  }
  }

  zeile = spalte = 0;
  /* Multiplikation mit Skalar */
  for(int k = 0; k < N*N; k++){
	  if(k < N){
		  zeile = 0;
		  spalte = k;
	  } else {
		  zeile = k/N;
		  spalte = k%N;
	  }
	  matrix[zeile][spalte] = skalar*(matrix[zeile][spalte]);
  }


  /* Ausgabe der Matrix zeilenweise */

  printf("\nMit dem Skalar multiplizierte Matrix sieht so aus:\n");
  zeile = spalte = 0;
  for(int j = 0; j < N*N; j++){
	if(j < N){
	  zeile = 0;
	  spalte = j;
	} else {
	  zeile = j/N;
	  spalte = j%N;
	}
	  printf("%f\t", matrix[zeile][spalte]);
	  if(spalte == N-1){
		  printf("\n");
	  }
	}



  return 0;
}
