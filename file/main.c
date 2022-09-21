#include <stdio.h>


int main() {

    //1) Variablen für das File im Hauptspeicher erzeugen
    //Datentyp: FILE* . . . Pointer to Filer

    FILE* fp;
    char zeichen = 0x00;
    char fileende = 0x00;
    //2) File öffnen = vom permanenten Speicher in den Hauptspeicher
    //mittels der Funktion fopen()
    //2 Parameter: Pfad und Dateiname und modus = r,w,a,r+,w+,a+, und Text oder Binärdatei

    fp = fopen("file.txt", "rt");
    if (fp == NULL)
    {
        printf("Datei nicht vorhanden oder nicht aufmachbar!\n");
    } else {

    
    //3) File Inhalt bearbeiten (lesen/schreiben)
        //Datei zeichenweise lesen und am Konsolenfenster ausgeben
    printf("\nDer Inhalt der Datei: file.txt ist: \n");
    while(fileende != EOF){

        fileende = fscanf(fp, "%", &zeichen);
        printf("%c", zeichen);
        

    }
    printf("\nEnde der Datei: file.txt ist: \n");
    fclose(fp);
    //4) File schließen fclose(FILE*)
    }

    return 0;
}