/*
S p e z i f i k a t i o n : Schatzsuche

         M e n u

    a) Suche starten
    b) Schätze konfigurieren
    c) Schatzkisten-Inhalt anzeigen

    e) Suche(Programm) beeenden

 Ihre Auswahl:

Menüpunkt a) gewählt-Schatzsuche startet:
   
  Suchgebiet Initialisieren :

   Suchgebietgröße-Default: 30x30 mit noch nicht abgesucht (*)
   versteckte Schätze (ebenfalls 30x30 Versteckmöglichkeiten defaultmäßig)
   kein Schatz 'Blank' Wertvoller Schatz '€'  NormalerSchatz '$'.
   Defaultmäßig 30x30 Suchfelder sollen   6x € und 12x$
  1 €-Schatz ist 100€ Wert, 1$ Schatz ist 10€ Wert

   Es ist nur die Hälfte der Suchfelder als Suchanzahl möglich. d.h. bei 30x30 Suchfeldern=900 max. 450 Suchen möglich bzw. wenn alle Schätze gefunden sind

 Die Ausgabe des Suchfeldes des soll mittels einer Funktion erfolgen

  Suche start:
          1) Ausgabe des Suchfeldesert

   Es ist nur die Hälfte der Suchfelder als Suchanzahl möglich. d.h. bei 30x30 Suchfeldern=900 max. 450 Suchen möglich bzw. wenn alle Schätze gefunden sind

 Die Ausgabe des Suchfeldes des soll mittels einer Funktion erfolgen

  Suche start:
          1) Ausgabe des Suchfeldes
          2) Benutzer 
          2) Benutzer wird um Eingabe der Zeilen-Nr und Spalten-Nr des Schürf-Feldes aufgefordert.
          3)  Eingabe wird auf einen darunter möglicherweise versteckten Schatz geprüft.
          Fall 1: es ist kein Schatz im ausgewählten Suchfeld vorhanden
                      d.h.Suchfeld wird mit einem Punkt überschrieben
                             und das Suchen geht weiter
          Fall 2: es ist ein Schatz im ausgewählten Suchfeld verhanden:   100€ für einen €-Schatz, 10€ für einen $-Schatz in die Schatzkiste

Suchende: 1) Wenn 50% der Suchfelder abgesucht wurden
                    2) Wenn der letzte  Schatz gefunden wurde - superbonus: +300€

Menüpunkt b) gewählt- Spiel-Konfigurieren:

     Untermenü in dem der Benutzer
        a) die Suchfeldgröße definiereren (Zeilen und Spalten extra) kann
       b) die Anzahl der €-Schätze und $-Schätze festlegen kann

Menüpunkt c) zeigt den Inhalt der Schatzkiste in € an:   Ist bei Programm start 0€

  Mit Programmwiederholung = zurück zum Menü
*/



#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int schatzVersteckrndm();

int main() {
    char eingabe;
    char suchfeld[30][30][2] = " ";
    char keinSchatz = " ";
    char schatz = "$";
    char wertvollerSchatz = "€";

    while (eingabe != 'e')
    {
        printf("\tMenue\n\n");
        printf("a) Suche Starten\n");
        printf("b) Schätze Konfigurieren\n");
        printf("c) Schatzkisten-Inhalt anzeigen\n\n");
        printf("e) Suche(Programm) beenden\n");
        eingabe = getchar();
        getchar();

        switch (eingabe)
        {
        case 'a': 
            break;
        
        case 'b': 
            break;
        
        case 'c': 
            break;
        
        case 'e': return 0;
            break;
        }
    }
}