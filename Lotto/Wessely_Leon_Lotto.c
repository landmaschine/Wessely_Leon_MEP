/*Lottoziehungsergebnis

       Menü
 a) Lottoziehung (Ziehungsdatum ist vom Benutzer einzugeben)
 b) Gespeicherte Ziehungen anzeigen
 c) Programmende

Menüpunkt a)

1) Lottoziehung: 6 Zufallszahlen zwischen 1 und 45, wobei keine doppelten Zahlen vorkommen dürfen.
2) Die gezogenen Zahlen sollen in einer Text-Datei mit Ziehungsdatum nachhaltig gespeichert werden, in folgender Form (jede Ziehung in einer Zeile):
       Ziehung vom 16.03.2021:  5-36-2-28-3-45
       Ziehung vom 23.03.2021:  8-2-7-39-15-1

Hinweis zu Zufallszahlengenerator: Bilbliothek stdlib.h, Zeit: time.h
  1) starten mit srand((int)time(NULL));
 2) Zufallszahl holen: rand()
 3) Zufallszahl in einen Bereich eingrenzen mit Modulo-Operator: % . . liefert den ganzahligen Rest einer Division
     z.B. x % 45 . .  . Zahlen  zwischen 0 und 44
*/

//includierung von standandard libs
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

//Hauptprogramm
int main()
{
    //variablen
    FILE *fp;
    char zeichen = 0x00;
    char fileende = 0x00;
    int zahl1;
    int zahl2;
    int zahl3;
    int zahl4;
    int zahl5;
    int zahl6;

    int tag = 0;
    int monat = 0;
    int jahr = 0;

    char user;

    while (user != 'c')
    {   
        // Menü
        printf("\tMenue\n");
        printf("a) Lottoziehung\n");
        printf("b) Gespeicherte Ziehung anzeigen\n");
        printf("c) Programmende\n");
        printf("\nIhre Auswahl:\t");

        //Zeichen welches vom user eingegebn wird, wird in user gesepichert
        user = getchar();
        //Enterabfangen
        getchar();

        //switch case für user und menü
        switch (user)
        {
        case 'a':
            // datei wird geöffnet und 
            fp = fopen("/run/media/landmaschine/School/FSST/Wessely_Leon_MEP/Lotto/lotto.ziehung", "a+");

            printf("\n\tGeben Sie den heutigen Tag ein: ");
            scanf("%d", &tag);
            getchar();
            fflush(stdin);
            printf("\tGeben Sie den aktuellen Monat ein: ");
            scanf("%d", &monat);
            fflush(stdin);
            getchar();
            printf("\tGeben Sie das aktuelle Jahr ein: ");
            scanf("%d", &jahr);
            getchar();
            fflush(stdin);

            printf("\n%d/%d/%d\n", tag, monat, jahr);

            fprintf(fp, "Ziehung vom %d.%d.%d:\t", tag, monat, jahr);

            zahl1 = rand() % 44 + 1;
            fprintf(fp, "%d-", zahl1);

            //Alle zahlen werden überpruft ob die gleiche zahl doppelt vor kommt
            do
            {
                zahl2 = rand() % 44 + 1;
            } while (zahl2 == zahl1);
            fprintf(fp, "%d-", zahl2);

            do
            {
                zahl3 = rand() % 44 + 1;
            } while (zahl3 == zahl2 || zahl3 == zahl1);
            fprintf(fp, "%d-", zahl3);

            do
            {
                zahl4 = rand() % 44 + 1;
            } while (zahl4 == zahl3 || zahl4 == zahl2 || zahl4 == zahl1);
            fprintf(fp, "%d-", zahl4);

            do
            {
                zahl5 = rand() % 44 + 1;
            } while (zahl5 == zahl4 || zahl5 == zahl3 || zahl5 == zahl2 || zahl5 == zahl1);
            fprintf(fp, "%d-", zahl5);

            do
            {
                zahl6 = rand() % 44 + 1;
            } while (zahl6 == zahl5 || zahl6 == zahl4 || zahl6 == zahl3 || zahl6 == zahl2 || zahl6 == zahl1);
            fprintf(fp, "%d\n", zahl6);

            //datei wird geschlossen
            fclose(fp);
            break;

        case 'b':
            //datei wird im lesemodus geöffnet
            fp = fopen("/run/media/landmaschine/School/FSST/Wessely_Leon_MEP/Lotto/lotto.ziehung", "r+");

            //Fehlerüberprüfung ob datei vorhanden
            if (fp == NULL)
            {
                printf("Datei konnte nicht geöffnte werden!");
            }
            else
            {

                printf("\nDatei geöffnet!\n");
                //cursor wird zurückgesetzt
                fileende = 0x00;
                //while schleife printed die zeichen in das terminal
                while (fileende != EOF)
                {
                    //Das zeichen, der beim curser ist wird geprinted
                    fileende = fscanf(fp, "%c", &zeichen);
                    printf("%c", zeichen);
                    fflush(stdout);
                }
            }
            //datei wird geschlossen
            fclose(fp);
            fflush(stdout);
            break;
        case 'c':
            //Programm wird geschlossen
            return 0;
            break;
        }
    }
}