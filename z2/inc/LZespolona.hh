#ifndef LZESPOLONA_HH
#define LZESPOLONA_HH

/*!
 *  Plik zawiera definicje struktury LZesplona oraz zapowiedzi
 *  przeciazen operatorow arytmetycznych dzialajacych na tej
 *  strukturze.
 */


/*!
 * Modeluje pojecie liczby zespolonej
 */
struct  LZespolona {
  double   re;    /*! Pole repezentuje czesc rzeczywista. */
  double   im;    /*! Pole repezentuje czesc urojona. */
};


/*
 * Dalej powinny pojawic sie zapowiedzi definicji przeciazen operatorow
 */
LZespolona stworz (double re, double im);

LZespolona sprzezenie (LZespolona liczba);
LZespolona modul (LZespolona liczba);

LZespolona  operator + (LZespolona  skl1,  LZespolona  skl2); //dodawanie
LZespolona  operator - (LZespolona  skl1,  LZespolona  skl2); //odjemowanie
LZespolona  operator * (LZespolona  skl1,  LZespolona  skl2); //mnozenie
LZespolona  operator / (LZespolona  skl1,  LZespolona  skl2); //dzielenie
LZespolona  operator / (LZespolona  skl1,  double modul);
bool  operator == (LZespolona wynik, LZespolona odp);
bool  operator != (LZespolona wynik, LZespolona odp);

std::istream & operator >> (std::istream & strm, LZespolona & skl); //wprowadzanie liczby zespolonej
std::ostream & operator << (std::ostream & strm, LZespolona skl);


#endif
