#include <stdio.h>
#define MAX_ZEICHEN 30

int main() {
	char eingabe[MAX_ZEICHEN+1];
	int index, anzahl = 0;

	printf("Bitte geben Sie das Wort ein: ");
	scanf("%s", &eingabe);

	for(int i = 0; i < sizeof(eingabe); i++){
		if(eingabe[i] == 'e'){
			anzahl++;
		}
	}

	printf("\n\nDas Wort '%s'", eingabe);
	printf(" beinhaltet %d mal den Buchstaben 'e'.\n", anzahl);

  return 0;
}
