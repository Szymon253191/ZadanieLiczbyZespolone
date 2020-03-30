#include <iostream>
#include "BazaTestu.hh"
#include "Statustyka.hh"
using namespace std;




int main(int argc, char **argv)
{
    Statystyka staty;
    Statystyka resetuj(staty)

  if (argc < 2) {
    cout << endl;
    cout << " Brak opcji okreslajacej rodzaj testu." << endl;
    cout << " Dopuszczalne nazwy to:  latwy, trudny." << endl;
    cout << endl;
    return 1;
  }


  BazaTestu   BazaT = { nullptr, 0, 0 };

  if (InicjalizujTest(&BazaT,argv[1]) == false) {
    cerr << " Inicjalizacja testu nie powiodla sie." << endl;
    return 1;
  }



  cout << endl;
  cout << " Start testu arytmetyki zespolonej: " << argv[1] << endl;
  cout << endl;

  WyrazenieZesp   WyrZ_PytanieTestowe;
  bool czy_poprawna;
  while (PobierzNastpnePytanie(&BazaT,&WyrZ_PytanieTestowe)) {
    cout << " Oblicz: ";
    cout << WyrZ_PytanieTestowe << endl;
    LZespolona skl;
    cout << " Podaj odpowiedz: ";
    cin >> skl;
    pop_tech = cin.good();
    if (!pop_tech)
    {
        cout << "Blednie zapisana liczba zespolona. Wprowadz wynik ponownie: ";
        cin.clear();
        cin >> skl;
        pop_tech = cin.good();
    }
    if (pop_tech)
    {
        if(skl == Oblicz(WyrZ_PytanieTestowe))
        {
            dodaj_pop(staty);
            cout << "Dobra odpowiedz \n";
        }
        else
        {
            int a = 3;
            while (a > 0)
            {
                a--;
                cout << "Bledna odpowiedz. Sprobuj ponownie: ";
                cin >> skl;
                if (skl == Oblicz(WyrZ_PytanieTestowe))
                {
                    dodaj_pop(staty);
                    cout << "Dobra odpowiedz \n";
                    a = 0;
                    break;
                }

            }
            if (!skl == Oblicz(WyrZ_PytanieTestowe))
            {
                dodaj_zla(staty);
                cout << "Bledna odpowiedz. Kolejne pytanie: ";
            }
        }

    }

  }


  cout << endl;
  cout << " Koniec testu" << endl;
  cout << endl;
    Wysw(staty);
}
