/* Wessely Leon
    1BHEL

    Spezfikation: Summe

  * Das Programm liest zwei Ganze Zahlen von der Console ein,
  * speichert diese und berechnet w Summe der beiden Zahlen .
  * Das Ergebnis der Berechnung wird dem Benutzer am Bildschirm angezeigt.
*/


#include <stdlib.h>
#include <stdio.h>

//Addierer

int main() {

  long zahl1;
  printf("Erste Zahl eingeben: \t");       //Aufforderung der eingeabe
  scanf("%ld", &zahl1);                    //Einlesung und Speicherung der eingegebenen Zahl1

  long zahl2;
  printf("Zweite Zahl eingben: \t");       //Zweite Aufforderung der eingabe
  scanf("%ld", &zahl2);                    //Einlesung und Speicherung der eingegebenen Zahl1

  long summe;
  summe = zahl1 + zahl2;                               //Addierung der Ersten und der Zweiten Zahl
  printf("\nDas Ergebniss ist: %ld\n\n",summe);        //Ergebniss der Addierten Zahlen
  
  return 0;
}