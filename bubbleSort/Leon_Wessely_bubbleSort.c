/*a) Es ist eine Funktion such() zu schreiben,
   die eine String und ein zu suchendes Zeichen übergeben bekommt.

   Die Funktion sucht wie oft das Zeichen im String vorkommt
   und gibt die Anzahl wie oft es gefunden wurde und
   an welcher Stelle es erstmalig gefunden wurde zurück.

b) Es ist ein Testprogramm zhu schreiben, das

    - Ein Array of char mit einem Text darin erzeugt
    - Die Funktion  such() mit diesem Array und dem Zeichen 'z' aufruft
    - Den Rückgabewert am Consolenfenster ausgibt
*/

#include <stdlib.h>
#include <stdio.h>

int such(char *string, char suchZ);

int main()
{
    char stringArr[81] = " ";
    char eingabe;
    int ergebniss = 0;
    char zeichen;
    while (1)
    {

        printf("\tMenue\n\n");
        printf("a) Text eingeben. max 80 zeichen!\n");
        printf("z) Funktion aufrufen\n");
        printf("e) Exit\n\n");

        scanf("%c", &eingabe);
        getchar();

        switch (eingabe)
        {
        case 'a':
            printf("Eingabe Satz:");
            scanf("%[^\n]80s", stringArr);
            getchar();
            printf("\nEingabe zeichen: ");
            scanf("%c", &zeichen);
            getchar();

            break;

        case 'z':
            ergebniss = such(stringArr, zeichen);
            printf("%c : %d", zeichen, ergebniss);

        break;

        case 'e':
            return 0;
            break;
        }
    }
}

int such(char *string, char suchZ)
{
    {
        int index = 0;
        char ergebnissArr[26];

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
}