#include "WyrazenieZesp.hh"


/*
 * Tu nalezy zdefiniowac funkcje, ktorych zapowiedzi znajduja sie
 * w pliku naglowkowym.
 */
LZespolona Oblicz(WyrazenieZesp  WZ)
{
    strm>>WZ.Arg1>>WZ.Op>>WZ.Arg2
    switch(WZ.Op)
    {
    case 0: WZ.Arg1.re //
    case 1:            // dzialania jak
    case 2:            // w LZespolona.cpp ??
    case 3:            //
    }
}

std::istream & operator >> (std::istream & strm, WyrazenieZesp & WZ)
{
    char znak;
    strm >> WZ.Arg1 >> znak >> WZ.Arg2;
    switch(znak)
    {
    case '+': WZ.Op = Dodaj;
        break;
    case '-': WZ.Op = Odejmij;
        break;
    case '*': WZ.Op = Mnoz;
        break;
    case '/': WZ.Op = Dziel;
        break;
    }
    return strm;
}
