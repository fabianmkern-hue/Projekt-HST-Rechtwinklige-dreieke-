/*
Autor: Reswan und Fabian
Datum: 30.09.2026$
Funktion: Berechnung eines Rechtwinkliges Dreick mit satz des Phytagoras
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

enum Eingabevarianten {Seite, Winkel, Hoehe, Fleache}; //Cases definieren
int main (){
    float Hypothenuse = 0;
    float Kathete1    = 0;
    float Kathete2    = 0;
    float Ankathete   = 0;
    int eingabe       = 0;

    enum Eingabevarianten auswahl;


    printf ("Was willst du berechnen\n"); //Abfrage in welches Case es springen soll
    printf ("0 = Seite\n");
    printf ("1 = Winkel\n");
    printf ("2 = Hoehe\n");
    printf ("3 = Fleache\n");
    scanf  ("%d" &eingabe);

    auswahl = eingabe


    Switch (auswahl){
        case Seite:
            printf("Gebe seiten ein\n");








        case Winkel:
        
        case Hoehe:
        
        case Fleache:



    }
}
