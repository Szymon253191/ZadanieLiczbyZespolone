#ifndef STATYSTYKA_HH
#define STATYSTYKA_HH

struct Statystyka
{
    int ilepop;
    int ilezly;
};

void dodaj_pop (Statystyka & stat);
void dodaj_zla (Statystyka & stat);
void ile_dobrych (Statystyka & stat);
void ile_zlych (Statystyka & stat);
void resetuj (Statystyka & stat);
void Wysw (Statystyka & stat);
#endif
