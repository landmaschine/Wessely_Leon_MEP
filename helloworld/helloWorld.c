/*
    Spezifikation; Summe

    Das Programm soll vom benutzer über tastatur 2 Ganze zahlen einleisen,
    davon die Summe berechnen und als Ergebenis am Consolen-Bildschirm
    ausgegeben werden.
*/


#include<stdio.h>
#include <stdlib.h>

//strg+alt+n = compile

int main ()
{   //1)Speicher für die 2 Ganzen Zahlen bereitstellen
    //Deklaration (Erzeugen) einer Variable: Datentyp namen;
    //Datentyp für eine Ganze Zahl: int oder long
        int zahl1;
        //Schreibenin eine Variable: Zuweisungsoperator =
        //Der Zuweisungsoprator nimmt den Ausdruck rechts, arbeitet in ab bis es einen Wert ergibt.
        //und schreibt diesen Wert in den Speicherplatz der Variable links von ihm.

        zahl1 = 10;//initialisiern = zum ersten mal einen Wert hineinschreiben
        int zahl2 = 20;  //Deklaration + Initialiesieren ot der zahl 0
        int ergebnis = 0;
        //Kontrollausgabe der Speicher inhalte
        //lesen des Inhaltes einer Variable durch Schreieben des Namens der variable
        printf("\n Der Inhalt von Zahl 1 ist: %d ",zahl1);
        printf("\n Der Inhalt von Zahl 2 ist: %d ",zahl2);
        printf("\n Der Inhalt von ergebnis ist: %d ",ergebnis);
        //2) 2 Zahlen vom Benutzer über Tastatur einlesen
            //2.1) Den Benutzer zur Eingabe der 2 Zahlen auffordern
            //2.2) 1. Zahl einlesen und Speichern
            //2.3) 2. Zahl einlesen und Speichern
        //3) Die Summe berechnen
        ergebnis = zahl1 + zahl2;
        // Das Ergebnis der Berechnung am Consolen-Bildschirm ausgeben
        printf("\nDie Summe von %d + %d ist: %d ",zahl1,zahl2,ergebnis);

        return 0;

}