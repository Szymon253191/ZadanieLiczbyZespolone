#include "Statystyka.hh"

void dodaj_pop (Statystyka & stat)
{
    stat.ilepop++;
}

void dodaj_zla (Statystyka & stat)
{
    stat.ilezly++;
}

int ile_dobrych (Statystyka & stat)
{
    return stat.ilepop;
}

int ile_zlych (Statystyka & stat)
{
    return stat.ilezly;
}

void resetuj (Statystyka & stat)
{
    stat.ilepop = 0;
    stat.ilezly = 0;
}

void Wysw (Statystyka & stat)
{
    std::cout << "Ilosc pytan: " << stat.ilepop + stat.ilezly << "\n Procent poprawnych odpowiedzi: " << stat.p * 100 / (stat.ilepop + stat.ilezly);
}
