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


LZespolona  operator + (LZespolona  skl1,  LZespolona  skl2); //dodawanie
LZespolona  operator - (LZespolona  skl1,  LZespolona  skl2); //odjemowanie
LZespolona  operator * (LZespolona  skl1,  LZespolona  skl2); //mnozenie
LZespolona  operator / (LZespolona  skl1,  LZespolona  skl2); //dzielenie

std::istream & operator >>(std::istream & strm, LZespolona & skl); //wprowadzanie liczby zespolonej
std::istream & operator <<(std::istream & strm, LZespolona & skl); //wyswietlanie liczby zespolonej

#endif
