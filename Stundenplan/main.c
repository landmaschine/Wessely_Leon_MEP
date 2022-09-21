/*
    Leon Wessely        1Bhel
    
    Spezifikation:
    Es soll der Stundenplan am Consolenfenster angezeigt werden.
*/

//Standard Bibiliotheken werden includiert
#include <stdio.h>
#include <stdlib.h>

//Allgemein
//Datentyp wird deklariert und mit einem Pointer auf die Adresse des definiertem im Stack gezeigt
char *Tage = "   |  Schultage  |";
char *Stunden = "|Schulstunden |  |_______||_______||_______||_______||_______||_______|";
char *Frei = "| Frei  |";

//Schultage
char *Montag = "|  Mo   |";
char *Dienstag = "|  Di   |";
char *Mittwoch = "|  Mi   |";
char *Donnerstag = "|  Do   |";
char *Freitag = "|  Fr   |";
char *Samstag = "|  Sa   |";

//Schulstunden
char *Erste_Stunden = "08:00-08-50 |";
char *Zweite_Stunden = "08:50-09:40 |";
char *Dritte_Studen = "09:50-10:40 |";
char *Vierte_Stunden = "10:50-11:30 |";
char *Fuenfte_Stunden = "11:30-12:20 |";
char *Sechste_Stunden = "12:30-13:20 |";
char *Siebte_Stunden = "13:20-14:10 |";
char *Achte_Stunden = "14:10-15:00 |";
char *Neunte_Stunden = "15:10-16:00 |";
char *Zehnte_Stunden = "16:00-16:50 |";

//Schulfächer
char *Prototypenbau_elektronischer_Systeme = "| PBE_4 |";
char *Hardwareentwicklung = "|  HW   |";
char *Fachspezifische_Softwaretechnik = "| FSST  |";
char *Pause = "| Pause |";
char *Angewandte_Mathematik = "|  AM   |";
char *Geografie_Geschichte_und_politische_Bildung = "|  GGP  |";
char *Deutsch = "|   D   |";
char *Bewegung_und_Sport = "| BESP  |";
char *Englisch = "|   E   |";
char *Soziale_und_personale_Kompetenz = "| SOPK  |";
char *Naturwissenschaften = "|  NW2  |";
char *Ethik = "|  ETH  |";

//Stundenplan
//Programmbeginn
int main() {

    //Wochentage
    //printf für die Ausgabe und "%s" --> Spacings
    //Ein Block = eine Zeile im Stunenplan
    printf("%0s", Tage);
    printf("%11s", Montag);
    printf("%0s", Dienstag);
    printf("%0s", Mittwoch);
    printf("%0s", Donnerstag);
    printf("%0s", Freitag);
    printf("%0s\n", Samstag);

    //Beschreibungen
    printf("%74s\n", Stunden);

    //Erste Stunden
    printf("1. | ");
    printf("%0s", Erste_Stunden);
    printf("%11s", Prototypenbau_elektronischer_Systeme);
    printf("%8s", Hardwareentwicklung);
    printf("%0s", Angewandte_Mathematik);
    printf("%0s", Englisch);
    printf("%0s", Hardwareentwicklung);
    printf("%0s", Angewandte_Mathematik);
    printf("\n");

    //Zweite Stunden
    printf("2. | ");
    printf("%0s", Zweite_Stunden);
    printf("%11s", Prototypenbau_elektronischer_Systeme);
    printf("%0s", Hardwareentwicklung);
    printf("%0s", Angewandte_Mathematik);
    printf("%0s", Englisch);
    printf("%0s", Angewandte_Mathematik);
    printf("%0s", Angewandte_Mathematik);
    printf("\n");

    //Dritte Stunde
    printf("3. | ");
    printf("%0s", Dritte_Studen);
    printf("%11s", Prototypenbau_elektronischer_Systeme);
    printf("%0s", Hardwareentwicklung);
    printf("%0s", Geografie_Geschichte_und_politische_Bildung);
    printf("%0s", Hardwareentwicklung);
    printf("%0s", Angewandte_Mathematik);
    printf("%0s", Angewandte_Mathematik);
    printf("\n");

    //Vierte Stunde
    printf("4. | ");
    printf("%0s", Vierte_Stunden);
    printf("%11s", Prototypenbau_elektronischer_Systeme);
    printf("%0s", Hardwareentwicklung);
    printf("%0s", Geografie_Geschichte_und_politische_Bildung);
    printf("%0s", Hardwareentwicklung);
    printf("%0s", Naturwissenschaften);
    printf("%0s", Angewandte_Mathematik);
    printf("\n");

    //Fünfte Stunde
    printf("5. | ");
    printf("%0s", Fuenfte_Stunden);
    printf("%11s", Pause);
    printf("%0s", Pause);
    printf("%0s", Fachspezifische_Softwaretechnik);
    printf("%0s", Soziale_und_personale_Kompetenz);
    printf("%0s", Pause);
    printf("%0s", Frei);
    printf("\n");

    //Sechste Stunde
    printf("6. | ");
    printf("%0s", Sechste_Stunden);
    printf("%11s", Prototypenbau_elektronischer_Systeme);
    printf("%0s", Pause);
    printf("%0s", Pause);
    printf("%0s", Soziale_und_personale_Kompetenz);
    printf("%0s", Deutsch);
    printf("%0s", Frei);
    printf("\n");

    //Siebte Stunde
    printf("7. | ");
    printf("%0s", Siebte_Stunden);
    printf("%11s", Prototypenbau_elektronischer_Systeme);
    printf("%0s", Fachspezifische_Softwaretechnik);
    printf("%0s", Deutsch);
    printf("%0s", Frei);
    printf("%0s", Naturwissenschaften);
    printf("%0s", Frei);
    printf("\n");

    //Achte Stunde
    printf("8. | ");
    printf("%0s", Achte_Stunden);
    printf("%11s", Prototypenbau_elektronischer_Systeme);
    printf("%0s", Fachspezifische_Softwaretechnik);
    printf("%0s", Deutsch);
    printf("%0s", Frei);
    printf("%0s", Naturwissenschaften);
    printf("%0s", Frei);
    printf("\n");

    //Neunte Stunde
    printf("9. | ");
    printf("%0s", Neunte_Stunden);
    printf("%11s", Prototypenbau_elektronischer_Systeme);
    printf("%0s", Frei);
    printf("%0s", Bewegung_und_Sport);
    printf("%0s", Frei);
    printf("%0s", Ethik);
    printf("%0s", Frei);
    printf("\n");

    //Zehnte Stunde
    printf("10.| ");
    printf("%0s", Zehnte_Stunden);
    printf("%11s", Frei);
    printf("%0s", Frei);
    printf("%0s", Bewegung_und_Sport);
    printf("%0s", Frei);
    printf("%0s", Ethik);
    printf("%0s", Frei);
    printf("\n");
    
    //
    return 0;
}
