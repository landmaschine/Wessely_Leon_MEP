/*Es ist eine Funktion such() zu schreiben, die eine String und ein zu suchendes Zeichen übergeben beklommt.

Die Funktion sucht wie oft das Zeichen im String vorkommt
und gibt die Anzahl wie oft es gefunden wurde und an welcher Stelle es erstmalig gefunden wurde zurück.

 Es ist ein Testprogramm zu schreiben, welches über den
   Menüpunkt a) Vom Benutzer max. 80 Zeichen in das TestArray einliest und zur Kontrolle am Bildschirm ausgibt
und das zu suchende Zeichen vom Benutzer einliest und zur Kontrolle am Bildschirm ausgibt 

   Menüpunkt b) ruft die Funktion mit  mit dem testarray und dem testzeichen auf
 
   Menüpunkt e) Beendet das Test-Programm
*/

#include <stdio.h>
#include <stdlib.h>

int such(char* stringArr, char* zeichen);
int print();

int main() {

    char stringArr[81] = "";
    char zeichen = ' ';
    char eingabe;

    print();

    eingabe = getchar();
    getchar();

    switch (eingabe)
    {
    case 'a':   printf("Eingabe Satz:");
                scanf("%[^\n]80s", stringArr);
                getchar();
                printf("\nEingabe zeichen: ");
                zeichen = getchar();
                getchar();
                printf("Ihr satz: %s\n", stringArr);
                printf("Ihr zeichen: %c", zeichen);
                fflush(stdout);
        break;
    
    
    case 'b': such(stringArr, zeichen);
        break;
    }
}

int such(char* stringArr, char* zeichen) {
    int index = 0;
}

int print() {
    printf("\tMenue\n\n");
    printf("a) Text eingeben. max 80 zeichen!\n");
    printf("b) Funktion aufrufen\n");
    printf("e) Exit\n\n");
}