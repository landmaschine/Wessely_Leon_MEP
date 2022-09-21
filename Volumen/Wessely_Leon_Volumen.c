/*  Leon Wessely        1Bhel

    Spezifiaktion: Volumen

    Es ist das Volumen eines Quaders zu berechenen:
    Die Seitenlängen sind in cm vom Benutzer einzugeben.
    Das Volumen ist in Kubikmeter in der Console auszugeben.
*/

//includierung von den standard bibiliotheken
#include <stdlib.h>
#include <stdio.h>

//beginn vom Programm
int main() {
    
    //Deklaration von leange im datenformat int
    int laenge = 0;

    //Aufforderung der eingabe von der länge in cm
    printf("Geben Sie die Leange des Quaders in cm an:\t");

    //Einlesung und Speicherung der eingegebenen länge
    scanf("%d", &laenge);                                       


    //deklaration von breite im datenformat int
    int breite = 0;

    //Aufforderung der eingabe von der breite in cm
    printf("Geben Sie die Breite des Quaders in cm an:\t"); 

    //Einlesung und Speicherung der eingegebenen breite
    scanf("%d", &breite);

    //Deklaration der hoehe im datenformat int                                     
    int hoehe = 0;

    //Aufforderung der eingabe von der höhe in cm
    printf("Geben Sie die  Hoehe des Quaders in cm an:\t");

    //Einlesung und Speicherung der eingegebenen höhe
    scanf("%d", &hoehe);

    //Berechnung des quaders in cm³
    float summe_cm = laenge * breite * hoehe;   
    
    //Umrechnung des quaders von cm³ zu m³
    float summe_m = summe_cm / 1000000;

    //Ergebniss wird in m³ ausgegeben
    printf("\nDas Volumen vom dem Quader betraegt:\t%.6fm³\n\n", summe_m);


    //Gebe null zurück wenn keine fehler im code drinnen sind
    return 0;
}