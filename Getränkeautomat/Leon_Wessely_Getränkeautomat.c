/*Spezifikation Cola-Automat:
 *
 *  1) Mineralwasser    - € 1,20
 *  2) Cola Zero        - € 2,70
 *  3) Fanta		    - € 1,50
 *  4) Eistee		    - € 1,80
 *  5) Kleiner Brauner  - € 1,30
 *  6) Sprite			- € 1,25
 *
 *  Getränkeautomat ausschalten: #
 *
 *  Ihre Getränkewahl: 5
 *
 *  Sie haben Getränk 5) Kleiner Brauner gewählt -€1,30
 *  Bitte werfen Sie Ihre Münzen ein (1€,50c,10c):
 *
 *  Ihr Zahlungsstand ist:     ...    es fehlen noch: ....
 *
 *  Vielen Dank, Retourgeld ist:

Es sind min 6 Getränke zu machen bzw. beliebig viele
Es sind mindestens die 3 Münzen möglich bzw. beliebig mehr.

Es sind folgende Teilschritte als Funktionen auszuführen!
    //1) Menüausgabe
    //2) Getränkeauswahl durchführen
    //3) Zahlung durchführen
    //4) Getränk und Retourgeld liefern
 */

#include <stdio.h>
#include <stdlib.h>

int menueausgabe();           //Menüausgabe-definition für compiler
float getraenkeauswahl();     //Getränkeauswahl-definition für compiler
float zahlung(float preis);   //Zahlung-definition für compiler
int retourgeld(float retour); //Retourgeld-definition für compiler

int main(void)
{
    float preis = 0.0; // Preis des Artikels

    do
    {
        menueausgabe();             //Menüausgabe am Consolenbildschirm
        preis = getraenkeauswahl(); //Getränkeauswahl-funktion die den Preis Üsbergibt

        if (preis > 0)
            retourgeld(zahlung(preis)); //Überspringen falls Beendung oder ungültiger Eingabe

    } while (preis != -2); //Wenn Eingabe gleich # war, wird do-while-Schleife verlassen (Programmbeendung)

    return 0;
}

int menueausgabe()
{
    printf("\n");
    printf("  1) Mineralwasser     - 1,20 €\n"); //Menü
    printf("  2) Cola Zero         - 2,70 €\n");
    printf("  3) Fanta             - 1,50 €\n");
    printf("  4) Eistee            - 1,80 €\n");
    printf("  5) Kleiner Brauner   - 1,30 €\n");
    printf("  6) Sprite            - 1,40 €\n\n");
    printf("  Getränkeautomat ausschalten: # \n\n");
    printf("  Ihre Getränkewahl: ");
    fflush(stdout); //Ausgabe des Menüs
    return 0;
}

float getraenkeauswahl()
{
    char eingabe = 0x00;
    float preis = 0;

    scanf("%c", &eingabe);   //Eingabe
    getchar();               //Enter abfangen 
    fflush(stdin); //Ausgabe des Standard-Inputs

    switch (eingabe) //Auswahl des Artikels
    {
    case '1':
        printf("\nSie haben Getränk 1) Mineralwasser gewählt - 1,20 €"); //Mineralwasser
        printf("\nBitte werfen Sie Ihre Münzen ein (1€, 0,5€, 0,1€): ");
        preis = 1.20;
        break;

    case '2':
        printf("\nSie haben Getränk 2) Cola Zero gewählt - 2,70 €"); //Cola Zero
        printf("\nBitte werfen Sie Ihre Münzen ein (1€, 0,5€, 0,1€): ");
        preis = 2.70;
        break;

    case '3':
        printf("\nSie haben Getränk 3) Fanta gewählt - 1,50 €"); //Fanta
        printf("\nBitte werfen Sie Ihre Münzen ein (1€, 0,5€, 0,1€): ");
        preis = 1.50;
        break;

    case '4':
        printf("\nSie haben Getränk 4) Eistee gewählt - 1,80 €"); //Eistee
        printf("\nBitte werfen Sie Ihre Münzen ein (1€, 0,5€, 0,1€): ");
        preis = 1.80;
        break;

    case '5':
        printf("\nSie haben Getränk 5) Kleiner Brauner gewählt - 1,30 €"); //Kleiner Brauner
        printf("\nBitte werfen Sie Ihre Münzen ein (1€, 0,5€, 0,1€): ");
        preis = 1.30;
        break;

    case '6':
        printf("\nSie haben Getränk 6) Sprite gewählt - 1,40 €"); //Sprite
        printf("\nBitte werfen Sie Ihre Münzen ein (1€, 0,5€, 0,1€): ");
        preis = 1.40;
        break;

    case '#':
        printf("\nCola Automat wird ausgeschalten...");
        preis = -2;
        break; //Automat wird ausgeschaltet

    default:
        printf("  Ungültige Eingabe!\n");
        preis = -1;
        break; //Ungültige Eingabe
    }
    fflush(stdout); //Ausgabe des Standard-Outputs

    return preis;
}

float zahlung(float preis)
{
    float geld_einwurf = 0.0;
    float geld_einwurf_gesamt = 0.0;
    float retour = 0.0;

    do
    {
        scanf("%f", &geld_einwurf); //Geldeinwurf
        fflush(stdin);              //Ausgabe des Standard-Inputs

        //Falls andere Münzen eingeworfen werden, werden diese wieder ausgegeben
        if (geld_einwurf == 1.0f || geld_einwurf == 0.5f || geld_einwurf == 0.1f)
            geld_einwurf_gesamt += geld_einwurf;

        printf("\nIhr Zahlungsstand ist: %1.2f €", geld_einwurf_gesamt); //Zahlungsstand

        retour = preis - geld_einwurf_gesamt; //Retourgeld wird berechnet

        if (retour <= 0) //Wenn Geld-einwurf-gesamt größer als der Preis, dann wird kein Geld mehr benötigt
        {
            printf("\nEs fehlen noch: 0.00 €"); //Ausgabe dieser Info
        }
        else
        {
            printf("\nEs fehlen noch: %1.2f €", retour);                       //Wenn der Preis noch nicht abgedeckt ist, dann fehlt noch Geld
            printf("\n\nBitte werfen Sie Ihre Münzen ein (1€, 0,5€, 0,1€): "); //Aufforderung des Einwurfs des Geldes
        }
        fflush(stdout); //Ausgabe des Standard-Outputs

    } while (retour > 0); //Wenn das eingeworfene Geld größer als der Preis ist, dann wird die Schleife verlassen

    return retour;
}

int retourgeld(float retour)
{
    if (retour < 0)
        retour *= -1; //"Betrag" von des Retourgeldes (falls negativ)

    printf("\n\nVielen Dank, Retourgeld ist: %1.2f €\n", retour); //Ausgabe des Retourgeldes
    fflush(stdout);                                               //Ausgabe des Standard-Outputs

    return 0;
}
