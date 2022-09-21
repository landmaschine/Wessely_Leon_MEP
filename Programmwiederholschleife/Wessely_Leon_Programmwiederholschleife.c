/* Spezifikation: Programmwiederhol-Schleife
 * 1) Das Program soll die Zahlen von 0 bis 100
 *    untereinander am Consolenfenster anzeigen
 * 2) Das Programm soll solange wiederholt werden, bis der
 *    Benutzer das Zeichen 'e' eingibt.
 */


//Includierung der Standard bibiliotheken
#include <stdio.h>
#include <stdlib.h>

//Programmbeginn
int main() {

    //ein Zeichen vom Terminal einlesen.
    printf("\nGeben sie alles außer e ein:\t")
    int x = getchar();

    //Unendliche while schleife
    while(x != 'e')
    {
        //for Schleife die von 0 bis 100 zählt
        for (int i = 0; i <= 100; i++)
        {
            //Ausgeben der Zahl
            printf("%d\n", i);
        }

        x = getchar();
        //Wenn beim Terminal e eingeben wird, wird das Programm gestoppt (abgeschlossen)
        if (x == 'e')
        {
           return 0;
        }
    }
}