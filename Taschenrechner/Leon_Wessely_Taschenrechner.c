/*
 * Spezifikation: Taschenrechner
 *
 * Das Programm zeigt solange folgende Menüauswahl am Consolenfenster an,
 * bis der Menüpunkt e) Programmende ausgewählt wird.
 *
 *         M e n u e
 *    
 *     a)  Zahlen eingeben
 *     b)  Berechnung wählen
 *     c)  Berechnen    
 *     e)  Programmende
 *    
 * Ihre Auswahl bitte:
 *
 * Der Taschenrechner kann 2 Zahlen speichern und mit Ihnen die Berechnungen
 * Addition(+), Subtraktion(-), Multiplikation(*), Division(/) durchführen.
 * Beim Start des Programmes sind die beiden Zahlen(Kommazahlen) jeweils 0.0 und
 * es ist der Berechnungsoperator + definiert.
 *
 * Bei Auswahl von Menüpunkt:
 *    a) wird der Benutzer gefragt ob er Zahl1 oder Zahl2 eingeben möchte,
 *       danach zur Eingabe der ausgewählten Zahl aufgefordert
 *       die Benutzereingabe gespeichert
 *       und zur Kontrolle die neue gespeicherte Zahl angezeigt
 *       z.B.: Ihre Eingabe war Zahl1: 3.141521
 *      
 *    b) wird der Benutzer zur Eingabe des gewünschten Berechnungsoperators aufgefordert:
 *       Addition(+), Subtraktion(-), Multiplikation(*), Division(/)
 *       Der neu ausgewählte Opertor wird wiederum dem Benutzerangezeigt.
 *       z.B: Benutzer gibt * ein => Sie haben die Operation: Multipliktion ausgewählt
 *       Wird ein anders Zeichen als +,-,*,/ vom Benutzer eingegeben,
 *       ist er mit einer Fehlermeldung daruf aufmerksam zu machen
 *       und der zuletzt gespeicherte Operator bleibt weiterhin ausgewählt und wird dem benutzer angezeigt.
 *       z.B. Fehler: Sie haben keine gültige Operation ausgewählt, daher ist die Operation - definiert
 *      
 *  c) Es wird die Berechnung der beiden Zahlen mit dem ausgewählten Operator durchgeführt
 *     und am Konsolenfenster die Berechnungsformel und Berechnungsergebnis angezeigt
 *     z.B: Wenn noch keine Benutzereingabe erfolgt ist:
 *      0 + 0 = 0
 *      
 *  e) beendet das Programm
 */

// Includierung der standard bibliotheken
#include <stdlib.h>
#include <stdio.h>
#include "TaRe.h"

// Programm beginn3
int main()
{
    // Variablen die benötigt werden
    char benutzerWahl = 0x00;
    char benutzerZahlWahl = 0x00;
    float zahl1 = 0;
    float zahl2 = 0;
    float ergebniss;
    char rechenOperator = '+';
    int i = 0;

    // While schleife damit das programm sich erst schließt wenn e gedrückt wirt
    while (benutzerWahl != 'e')
    {
        // Erstes Menü aufs Terminal geprintet
        printf("\n-------- M e n u e --------\n\n");
        printf("  a) Zahlen eingeben\n");
        printf("  b) Berechnung wählen\n");
        printf("  c) Berechnen\n");
        printf("  e) Programmende\n");
        printf("\nIhre Auswahl bitte:\t");

        // Keyboard wird abgefragt und in benutzerWahl gespeichert
        benutzerWahl = getchar();

        // Enter abfangen
        getchar();

        // Switch case fürs erste Menü
        switch (benutzerWahl)
        {

        // Wenn in benutzerWahl das zeichen a steht wird dieses case ausgeführt
        case 'a':

            // Untermenü wird geprintet
            printf("\n   ---Zahl Auswahl Menü---\n\n");
            printf("      1) Eingabe der ersten Zahl\n");
            printf("      2) Eingabe der zweiten Zahl\n");
            printf("\n   Ihre Auswahl\t");

            // keyboard abfrage
            benutzerZahlWahl = getchar();

            // enter abfangen
            getchar();

            // Zahlenwahl untermenü switch case, damit man die zahl auswählen kann welche man zuerst einegeben will
            switch (benutzerZahlWahl)
            {

            // Case 1 für die erste Zahl
            case '1':
                printf("\nGeben Sie Zahl 1 ein:\t");
                scanf("%f", &zahl1);
                getchar();
                printf("Sie haben Zahl 1: %f eingegeben\n", zahl1);
                break;

            // Case 2 für die zweite zahl
            case '2':
                printf("\nGeben Sie Zahl 2 ein:\t");
                scanf("%f", &zahl2);
                getchar();
                printf("Sie haben Zahl 2: %f eingegeben\n", zahl2);
                break;

            // Wenn nichts zutrifft dann kommt man wieder in das Hauptmenü
            default:
                break;
            }

            break;

        // Bei case b bekommt man das Rechnungsoptions menü
        case 'b':
            printf("\n---Rechenoperator Menü---\n\n");
            printf("     Addition (+)\n");
            printf("     Subtraktion (-)\n");
            printf("     Multiplikation (*)\n");
            printf("     Division (/)\n");
            printf("\nIhre Auswahl:\t");

            // Der vordefinierte operator wird in eine variable gespeichert damit, falls ein falscher operator ausgewählt ist,
            // der zuvor ausgewählte operator noch ausgewählt bleibt
            char alterOperator = rechenOperator;

            // Keyboard wird nach operator abgefragt
            rechenOperator = getchar();

            // Enter abfangen
            getchar();

            // switch case für die reachen operatoren
            switch (rechenOperator)
            {

            // wenn + eingegeben wird, bekommt die Variable rechenOperator den operator +
            case '+':
                rechenOperator = '+';
                printf("Sie haben die Operation: Addition ausgewählt\n");
                break;

            // wenn - eingegeben wird, bekommt die Variable rechenOperator den operator -
            case '-':
                rechenOperator = '-';
                printf("Sie haben die Operation: Subtrahieren ausgewählt\n");
                break;

            // wenn * eingegeben wird, bekommt die Variable rechenOperator den operator *
            case '*':
                rechenOperator = '*';
                printf("Sie haben die Operation: Multiplikation ausgewählt\n");
                break;

            // wenn / eingegeben wird, bekommt die Variable rechenOperator den operator +/
            case '/':
                rechenOperator = '/';
                printf("Sie haben die Operation: Dividieren ausgewählt\n");
                break;

            // wenn ein nicht gültiger operator eingegeben wird, bekommt die Variable rechenOperator den vorherigen operator wieder zugwewiesen
            default:
                rechenOperator = alterOperator;
                printf("Sie haben keine gültige Operation ausgewählt!\n");
                printf("Der Opertor bleibt: %c\n", rechenOperator);
                break;
            }
            break;

        // Bei case c wird berechnet, mit den voreingegebenen zahlen und operator
        case 'c':
            switch (rechenOperator)
            {
            case '+':
                ergebniss = addieren(zahl1, zahl2);
                printf("\nBerechnungsformel und Ergebniss:\t");
                printf("%f + %f = %f\n", zahl1, zahl2, ergebniss);
                break;

            case '-':
                ergebniss = subtrahieren(zahl1, zahl2);
                printf("\nBerechnungsformel und Ergebniss:\t");
                printf("%f - %f = %f\n", zahl1, zahl2, ergebniss);
                break;
            case '*':
                ergebniss = multiplizieren(zahl1, zahl2);
                printf("\nBerechnungsformel und Ergebniss:\t");
                printf("%f * %f = %f\n", zahl1, zahl2, ergebniss);
                break;
            case '/':

                // wenn beide zahlen 0 sind ist die division möglich
                if (zahl1 != 0 && zahl2 != 0)
                {
                    ergebniss = dividieren(zahl1, zahl2);
                    printf("\nBerechnungsformel und Ergebniss:\t");
                    printf("%f / %f = %f\n", zahl1, zahl2, ergebniss);
                    break;
                }
                else
                {
                    printf("\nDivision durch 0 nicht möglich!\n");
                }

            // nach dem berechnet wurde kommt man wieder in das Hauptmenü
            default:
                break;
            }

        // nach dem das Programm durch gerannt ist, kommt man wieder in das Hauptmenü
        default:
            break;
        }
    }
}