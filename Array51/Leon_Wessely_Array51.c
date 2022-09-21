/*
 Spezifikation: Array51
 Aufgabe:
 Erweitern Sie das Programm array51 um eine Benutzereingabe
  für alle Felder des  Array in folgender Weise:
  1) der Benutzer wählt ein Feld aus den 51 Feldern aus
  2) Dann liefert er die Zahl die darin gespeichert werden soll
  3) Dann wird er gefragt ob er noch ein Feld beschreiben will,
     Ende der Eingabe mit 'n' oder 'N'
     
  Das Array wird zur Kontrolle der Eingaben zur Gänze am
  Consolen-Fenster an gezeigt
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{	//0) array 51 erzeugen
	int array51[51];
	//Auswahlvariable zum Druchlaufen des Feldes
	// der Indes 0 wähnlt dsas 1. Feld aus
	// index n-1 wählt das n-te Feld aus
	int index =0;
    char user;
	//1) Array initialisieren

	//Zahlen von 1 bis 51 darin speichern
	for(index=0;index<51;index++) {
        array51[index] = index+1;
	}
	//2) Anhalte des Array zur Kontrolle anzeigen
	//Lese-Schleife für das Array immer 10 Zahlen nebeneinander
    while (user != 'n')
    {
        printf("\nDer Inhalt des Arry51 ist:\n");
        for(index=0;index<51;index++) {
        printf("%d\t",array51[index]);

        //Jede 10.Zeile  Zeilenvorschub
        if((index+1)%10 == 0) {
            printf("\n");
        }
    }
	printf("\nHier ist Arrya51 zuende - Schuss und aus:\n");
    printf("Feld auswählen: ");
    scanf("%d", &user);
    printf("Feld %d ausgewählt", array51[user]);

    }
    
	return 0;
}
