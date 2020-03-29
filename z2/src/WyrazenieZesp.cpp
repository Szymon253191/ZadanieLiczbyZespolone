#include "WyrazenieZesp.hh"


/*
 * Tu nalezy zdefiniowac funkcje, ktorych zapowiedzi znajduja sie
 * w pliku naglowkowym.
 */


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

LZespolona Oblicz(WyrazenieZesp  WZ)
{
    switch(WZ.Op)
    {
    case 0:
        return WZ.Arg1 + WZ.Arg2;
        break;
    case 1:
        return WZ.Arg1 - WZ.Arg2;
        break;
    case 2:
        return WZ.Arg1 * WZ.Arg2;
        break;
    case 3:
        return WZ.Arg1 / WZ.Arg2;
        break;
    }
}
