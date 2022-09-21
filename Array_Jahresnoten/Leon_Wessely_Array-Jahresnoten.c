/*
Es ist ein Programm zu schreiben, welches ein Zahlen-array für 10 Teilnoten pro Schüler mit 0 initialisiert und am Bildschirm anzeigt.
Danach wird der Schüler gefragt 10 Teilnoten einzugeben.
Nach Eingabe der 10 Teilnoten wird der Notendurchschnitt berechnet und am Bildschirm ausgegeben.

Die Ausgabe des Arrays-Inhaltes ist mittels einer Funktion: arrayOut() zu realisieren.
Programmwiederholung, Ende mit: e
*/

#include <stdlib.h>
#include <stdio.h>

// Funktions deklaration
void arrayOut(int arr[10]);

int main()
{
    int arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int eingabe = 1;
    int i = 0;
    float summe = 0;
    float durchschnitt = 0;

    // Schleife für das Programm
    while (eingabe != 'e')
    {
        printf("\na) Notendurchschnitt berechnen\n");
        printf("e) programmende\n\n");
        printf("Ihre auswahl: ");
        scanf("%c", &eingabe);
        getchar();

        switch (eingabe)
        {
        // ascii 97 für a
        case 97:
            // Array wird ausgegeben
            arrayOut(arr);
            // for schleife damit das Array beschrieben werden kann und wird
            for (i = 0; i < 10; i++)
            {
                printf("Ihre eingabe: ");
                // eingabe vom user wird gespeichert
                scanf("%d", &eingabe);
                // Enter abfangen
                getchar();
                // Wenn die zahl zwischen 0 und 6 ist, ist sie gültig
                if (eingabe > 0 && eingabe < 6)
                {
                    // Array wird beschrieben
                    arr[i] = eingabe;
                }
                // Bei einer ungültigen eingabe wird eine fehlermeldung dem user gegeben
                else
                {
                    printf(" Ungültige eingabe! \n Bitte eine Note zwischen 1 - 5\n\n");
                    // Damit das die Schleife nicht weiter durch das array geht wird die schleifen variable um eins zurückgestzt
                    i = i - 1;
                }
            }
            // Array wird addiert und in die Variable summe gespeichert
            for (int i = 0; i < 10; i++)
            {
                summe = summe + arr[i];
            }

            // Der durchschnitt wird erechnet und als kommazahl angegeben
            durchschnitt = summe / 10;
            printf("Der Notendurchschnitt ist: %0.1f\n", durchschnitt);
            // Summe wird zurückgestzt
            summe = 0;
            break;

        // ascii zeichen für e
        case 101:
            return 0;
            break;
        }
    }
    return 0;
}

// Funktionen und deren code

// Funktion damit das Array ausgegeben wird
void arrayOut(int arr[10])
{
    for (int i = 1; i < 11; i++)
    {
        int a = arr[i - 1];

        if (i == 10)
        {
            printf("Schüler %d :", i);
            printf("%d\n", a);
        }
        else
        {
            printf("Schüler %d  :", i);
            printf("%d\n", a);
        }
    }
    printf(" \n");
}