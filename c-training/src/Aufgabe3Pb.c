#include <stdio.h>
#define N 2 /* fuer eine NxN-Matrix */

int main() {
  double matrix[N][N] = {0.0};/* Deklaration der Matrix als 2-dim. Array */
  int zeile, spalte;
  double temp; /* Zwischenspeicher fuer Matrixwert */

  /* Initialisierung mit Benutzereingabe */
  for (int zeile = 0; zeile < N; zeile++){
    for (int spalte = 0; spalte < N; spalte++){
    	printf("Geben Sie bitte das Element [%d],[%d] ein: ", zeile+1, spalte+1);
    	scanf("%lf", &matrix[zeile][spalte]);
    	printf("Eingabe: [%f]\n\n", matrix[zeile][spalte]);
    }
  }


  printf("Normaler Matrix:\n");
  for (zeile = 0; zeile < N; zeile++) {
	  for (spalte = 0; spalte < N; spalte++){
		printf("%.2lf\t", matrix[zeile][spalte] );

	  }
	  printf("\n");

  }

  printf("\nMatrix is transposed...\n");
  zeile = spalte = 0;

  while(zeile < N && spalte < N){
	  while(spalte < N){
		  temp = matrix[zeile][spalte];
		  matrix[zeile][spalte] = matrix[spalte][zeile];
		  matrix[spalte][zeile] = temp;
		  spalte++;
	  }
	  zeile++;
	  spalte = zeile;
  }

  /* Transponierung = Spiegelung an der Hauptdiagonalen */


  printf("\nTransposed Matrix:\n");
  /* Ausgabe der Matrix zeilenweise */
  for (zeile = 0; zeile < N; zeile++) {
    for (spalte = 0; spalte < N; spalte++){
      printf("%.2lf\t", matrix[zeile][spalte] );

    }
    printf("\n");
  }

  return 0;
}
