#include "WyrazenieZesp.hh"


/*
 * Tu nalezy zdefiniowac funkcje, ktorych zapowiedzi znajduja sie
 * w pliku naglowkowym.
 */
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


std::ostream & operator << (std::ostream & strm, WyrazenieZesp & WZ)
{
    char znak;
    strm << WZ.Arg1 << znak << WZ.Arg2;
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

std::istream & operator >> (std::istream & strm, WyrazenieZesp & WZ)
{
    char znak;
    strm >> WZ.Arg1 >> znak >> WZ.Arg2;
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

