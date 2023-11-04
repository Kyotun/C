#include <stdio.h>
#define pi 3.14


int main()
{
    // Variablendeklaration
    float r, u, a;

    // Einlesen des Radius
    printf("Geben Sie bitte den Radius ein: ");
    // --- ToDo: hier den Radius einlesen
    scanf("%f", &r);

    // Pruefen, ob Eingabe sinnvoll
    // --- ToDo: falls nein, Ausgabe von "Eingabe nicht sinnvoll"
    if(r <= 0){
    	printf("Eingabe ist nich sinnvoll.\n");
    }else {
        u = 2*pi*r;
        a = pi*r*r;
        printf("Umfang: %f\n",u);
        printf("Fleache: %f\n",a);

    }



    // --- ToDo: falls ja, Berechnung von Flaeche und Umfang und Ausgabe
}
