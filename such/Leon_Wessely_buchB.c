/*
Spezifikation: Buchstabenbattle
*
* Es ist eine Funktion: buchB() zu schreiben, die
* einen beliebig langen String bekommt, sowie ein Ergebnis-Array welches
* 27 Ergebnisse zurückliefern kann.
* Die Funktion zählt wie oft jeder Buchstabe im String vorkommt,
* und liefert die Anzahl je Buchstabe, sowie die Anzahl aller anderen Zeichen
* die nicht Buchstaben sind, im Ergebnis-Array zurück.
*
* Als Rückgabewert ist die Länge des Strings zurückzuliefern,
* bei Leerstring: 0
*
*  Es ist ein Testprogramm zu schreiben, welches über den
   Menüpunkt a) Vom Benutzer max. 160 Zeichen in ein Array einliest
                und zur Kontrolle am Bildschirm ausgibt
   Menüpunkt b) ruft die Funktion mit dem Test-Array auf und
   gibt das Testarray und danach die zurückgelieferte Anzahl
   der gezählten Buchstaben , sowie den Rückgabewert in der Form :
   *************************************
   Teststring:
   *************************************
   a:  12
   b:   4
   c:   0
   .
   .
   z:   3
   sonstige: 22
   *************************************
   Länge des Strings: 77
   *************************************


   zur Kontrolle aus.

   Menüpunkt e) Beendet das Test-Programm
 * */

#include <stdio.h>
#include <stdlib.h>

int buchB(char *string, int *ergebnissArr);

int main()
{
    int alphabetArr[27] = {};
    char eingabeArr[161] = "";
    int laenge;
    int eingabe;
    int index;

    do
    {

        printf("\tMenue\n\n");
        printf("a) Eingabe. max 160 zeichen!\n");
        printf("b) Fuktionsaufruf\n\n");
        printf("e) Exit\n\n");

        eingabe = getchar();
        getchar();

        switch (eingabe)
        {
        case 'a':
            fflush(stdout);
            scanf("%[^\n]160s", eingabeArr);
            fflush(stdin);

            
            break;
        case 'b':
            laenge = buchB(eingabeArr, alphabetArr);

            for (int i = 0; i < 26; i++)
            {
                char ch = (char)i + 'A';
                printf("%c:%d\n", ch, alphabetArr[i]);
            }
            printf("sonstige:%d\n\n", alphabetArr[26]);
            printf("länge des Strings: %d", laenge);
            alphabetArr[27] = {};
            break;

        case 'e':
            return 0;
            break;
        }
    } while (eingabe != 'e');
    return 0;
}

int buchB(char *string, int *ergebnissArr)
{
    int index = 0;

    while (string[index] != 0x00)
    {
        char ch = string[index];
        if (ch >= 'A' && ch <= 'Z')
        {
            ergebnissArr[ch - 'A']++;
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            ergebnissArr[ch - 'a']++;
        }
        else
        {
            ergebnissArr[26]++;
        }
        index++;
    }
    return index;
}