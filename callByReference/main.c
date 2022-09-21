/*
 ============================================================================
 Name        : CalByReference-StringCopy.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 *Spezifikation: Funktion StringCopy
 * Die Funktion soll einen beliebig großen String in einen anderen Kopieren
 * Rückgabewert: Anzahl der kopierten Zeichen wenn die Kopie erfolgreich war
 *               0 wenn ein Leerstring übergeben wurde
 *
 *  Es ist ein Testprogramm zu schreiben, welches über den
   Menüpunkt a) Vom Benutzer max. 80 Zeichen in das 1. Array einliest und zur Kontrolle am Bildschirm ausgibt
   Menüpunkt b) die Funktion mit Test-Arrays aufruft und die übergebenen Arrays vor dem Aufruf zur Kontrolle ausgibt,
                sowie den gelieferten  Rückgabewert ausgibt.
                und die beiden Arrays zur Kontrolle ausgibt

   Menüpunkt e) Beendet das Test-Programm
 *
 */

#include <stdio.h>
#include <stdlib.h>
//Funktionsdeklaration StringCopy
int stringCopy(char* quelle, char* ziel);
//Testprogramm
int main(void)
{ //Deklaration der beiden arrays
	char str1[81] = "";
	char str2[81] = "BlaBlaBla...";
	char auswahl=0x00;
	do
	{
		//Menüausgabe
		printf("\n\t\t M e n ü \n");
		printf("\n\ta) Texteingabe");
		printf("\n\tb) Funktionsaufruf");
		printf("\n\te) Programmende");
		printf("\n\nIhre Auswahl:");
		//Menüauswahl
		fflush(stdout);
		auswahl = getchar();
        getchar();
		fflush(stdin);
		switch(auswahl)
		{	case 'a'://a) Benutzereingabe
						fflush(stdout);
						scanf("%[^\n]80s",str1);
                        getchar();
						fflush(stdin);
						break;
			case 'b'://b) Funktionsaufruf
					//Testausgabe der beiden Strings
					printf("\nStr1: %s\nstr2: %s\n",str1,str2);
					//Ausgabe RG-Wert und Testausgabe der beiden Strings
					printf("\nRückgabewert: %d",stringCopy(str1,str2));//Funktionsaufruf
					printf("\nStr1: %s\nstr2: %s\n",str1,str2);
					break;
			case 'e':break;
		}
	}while(auswahl != 'e'); //ROGRAMMWIEDERHOLSCHLEIFE ENDE
	return EXIT_SUCCESS;
}

//Funktionsdefinition
int stringCopy(char* quelle, char* ziel)
{ 	int index =0;
	//Wenn 1.Zeichen String-Ende ist
	if(quelle[index] == 0x00)
	{   ziel[index] = quelle[index];
		return 0;
	}
	else
	{  //1Zeichen von  Quelle auf Ziel kopieren solange nicht String-Ende erreicht
		while(quelle[index] != 0x00) //oder '\0'
		{	ziel[index] = quelle[index];
			index++;
		}
		return index; //RG: Anzahl der kopierten Zeichen
	}


}
