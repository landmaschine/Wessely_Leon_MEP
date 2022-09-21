/*
* Spezifikation: Buchstabenbattle
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
 */

#include <stdio.h>

int main() {
    
    //String für die Zeichenkette die durchsucht werden soll
    char strInput[160];
    
    //var in der das aktuelle Zeichen steht
    char zeichen;
    //var für dein
    char zeichenDez;
    //var für die benutzereingabe
    char eingabe = 0x00;
    //var für die länge des strings, wird auch als index verwendet
    int laenge = 0;
    
    //while schleife in der das Programm läuft
    while(eingabe != 'e'){
        int zeichenCount[27] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        printf("\nM E N U E\n\n\ta) String eingabe\n\tb) Funktionsaufruf\n\n\te) Programmende\n\nIhre Eingabe: ");
        
        //Usereingabe
        scanf("%c", &eingabe);
        fflush(stdin);
        
        //switch case für menufunktion
        switch(eingabe){
                
                //wenn a) wird String von User eingegeben
            case 'a':
                
                scanf("%s", strInput);
                printf("Sie gaben ein: %s", strInput);
                
            break;
                
                
                //Funktionsaufruf
            case 'b':
                
                //Erstes zeichen von Zeichenkette wird in var zeichen kopiert
                zeichen = strInput[laenge];
                
                //wird solange ausgeführt bis string nicht zu ende ist
                while(zeichen != 0x00){
                   
                    //das gelesene zeichen wird -97 gerechnet (da ascii 97 a ist und ich somit 0 für a also das erste feld des array bek0mme)
                    zeichenDez = zeichen - 97;
                    
                    //wenn es ein sonstiges zeichen ist, wird das array im "sonstiges" feld erhört
                    if(zeichenDez < 0 || zeichenDez > 26){
                        zeichenCount[26]++;
                        //sonst wird das zu dem Buchstaben passende Feld erhöt
                    }else{
                        zeichenCount[zeichenDez]++;
                    }
                    
                    //var laenge wird erhöt um durch das Array durchzuzählen, also als index
                    laenge++;
                    //Zeichen von Zeiechenkette wird in var zeichen kopiert
                    zeichen = strInput[laenge];
                    
                    
                }
                //ausgabe der einzelnen buchstaben und anzahlen
                printf("*************************************\n");
                printf("Teststring: \n");
                printf("*************************************\n");
                int i;
                for(i = 0; i < 26; i++){
                    printf("%c:  %d\n", i + 97, zeichenCount[i]);
                }
                printf("sonstige: %d\n", zeichenCount[26]);
                printf("*************************************\n");
                printf("Laenge des Strings: %d\n", laenge);
                printf("*************************************\n");
                laenge = 0;
                
            break;
             
                
                //wenn e) greift while-bedingung am anfang nicht mehr, programm beendet sich
            case 'e': break;
            
                
        }
    }
    
    return 0;
}
