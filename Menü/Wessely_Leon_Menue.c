/*

Spezifikation: Menü

 *  das Programm soll folgendes Menü am Consolenfenster anzeigen
 *  und den Benutzer einen Menüpunkt auswählen lassen.
 *  
 *            M e n ü
 *            
 *     a) Konfiguration
 *     b) Spiel starten
 *     c) Score anzeigen
 *     
 *     e) Programmende
 *     
 * Ihre Auswahl Bitte:
 *
 *  Die Auswahl ist auszuwerten und der ausgewählte Menüpunkt
 *  soll am Consolenfenster folgendermaßen angezeigt werden:
 *  " Es wurde Menüpunkt x ausgewählt" und danach wird wieder
 *  das Menü angezeigt zur nächsten Auswahl.
 *  
 *  Ende der Menüpunktanzeige und Auswahl(Programmende) mit
 *  Auswahl Menüpunkt e
 *  
 *  Wurde kein gültiger Menüpunkt ausgewählt, soll dies dem Benutzer
 *  mit der Meldung: "Kein gültiger Menüpunkt ausgewählt" angezeigt werden.
 
 */

// includierung der standard bibliotheken
#include <stdlib.h>
#include <stdio.h>


// Programm anfang
int main() {

    // benutzerAuswahl wird der wert 0 zugewiesen
    int benutzerAuswahl = 0x00;

    // Unendliche Schleife     
    while(benutzerAuswahl != 'e') {

        // Ausgabe des Menüs
        printf("\n\n\tM e n ü\n\n");
        printf("a) Konfiguration\n");
        printf("b) Spiel Starten\n");
        printf("c) Score anzeigen\n\n");
        printf("e) Programmende\n\n");
        printf("Ihre auswahl bitte:");

        // fragt tastatur ab
        benutzerAuswahl = getchar();

        // Enter abfangen
        getchar();

        // Switch case
        switch(benutzerAuswahl) {
            
            // Intentional fall through (Kenne nur den englischen begriff dafür), anstatt 3 mal printf, nur einmal printf
            case 'a' : printf("Es wurde Menüpunkt a ausgewählt\n"); break;
            case 'b' : printf("Es wurde Menüpunkt b ausgewählt\n"); break;
            case 'c' : printf("Es wurde Menüpunkt c ausgewählt\n"); break;

            // wenn e gedrückt wird, wird das Programm geschlossen
            case 'e' :
                return 0; break;
            
            // wenn eine ungültige option gedrückt wird, gib den default wert zurück
            default :
                printf("Kein gültiger Menüpunkt ausgewählt"); 
        }
                
    }
        
}