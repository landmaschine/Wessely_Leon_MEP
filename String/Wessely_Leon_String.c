/*
Es ist eine Funktion TextCopy() zu erstellen, die 2 Arrays of char mit 81 Feldern übergeben bekommt und das 1. Array in das 2. Array copiert.
Danach gibt die Funktion die beiden Arrays zur Kontrolle aus.

Ist das 1. Array ein Leerstring wird als Rückgabewert 0 geliefert.
Andernfalls wird die Anzahl der Kopierten Zeichen zurückgeliefert.

Es ist ein Testprogramm zu schreiben, welches über den
   Menüpunkt a) Vom Benutzer max. 80 Zeichen in das 1. Array einliest und zur Kontrolle am BIldschirm ausgibt
   Menüpunkt b) die Funktion mit Test-Arrays aufruft und die übergebenen Arrays vor dem Aufruf zur Kontrolle ausgibt, sowie gelieferten den Rückgabewert ausgibt.
   Menüpunkt e) Beendet das Test-Programm
*/
#include <stdlib.h>
#include <stdio.h>

int textCopy(char arr1[81], char arr2[81]);

int main()
{
    char arr1[81] = " ";
    char arr2[81] = " ";
    char eingabe = 0;

    while (eingabe != 'e')
    {
        printf("a) eingabe\n");
        printf("b) arrays ausgeben\n");
        printf("e) beenden\n\n");
        printf("Ihre eingabe: ");
        eingabe = getchar();
        getchar();

        switch (eingabe)
        {
        case 97:
            scanf("%s", arr1);
            fflush(stdin);
            printf("Array1: %s\n\n", arr1);
            fflush(stdout);
            break;

        case 98:
            printf("%s\n", arr1);
            printf("%s\n", arr2);
            textCopy(arr1, arr2);
            printf("\n\n");
            fflush(stdout);
            break;

        case 101:
            return 0;
            break;
        }
    }
}

int textCopy(char arr1[81], char arr2[81])
{
    char lange = 'a';
    char lange1 = 'a';
    int lauf1 = 0;
    int lauf = 0;

    if (arr1 == 0x00)
    {
        return 0;
    }

    arr2 = arr1;

    while (lange != 0x00)
    {
        lange = arr1[lauf];
        lauf++;
    }
    lauf = lauf - 1;

    while (lange1 != 0x00)
    {
        lange1 = arr2[lauf];
        lauf1++;
    }
    lauf1 = lauf1 - 1;

    printf("%s", arr1);
    printf("\n");
    printf("%s", arr2);

    return 0;
}