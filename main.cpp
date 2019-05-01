#include <iostream>
#include <fstream>
#include <cstdlib>
#include <stdio.h>

using namespace std;

string imie, nazwisko;
int nr_tel;

int main()
{
    fstream plik;
    plik.open("dane.txt", ios::in); // otworz plik / nazwa pliku na dysku / tryb otwarcia input/output stream in - odczytaj dane z pliku
    if (plik.good()==false);
    {
        cout << "Plik nie istnieje.";
        exit(0);
    }

    string linia;
    int nr_linii=1;
    while(getline(plik,linia))
    {
        switch(nr_linii)
        {
            case 1: imie = linia; break;
            case 2: nazwisko = linia; break;
            case 3: nr_tel = atoi(linia.c_str()); break; // konwersja string > int, funkcja atoi [i = integer]
        }
        nr_linii++;
    }

    plik.close();

    cout << imie << endl; // wyswietl imie z pliku
    cout << nazwisko << endl; // wyswietl nazwisko z pliku
    cout << nr_tel << endl; // wyswietl nr telefonu z pliku

    getchar();getchar();

    return 0;
}
