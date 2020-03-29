#include "LZespolona.hh"

/*!
 * Realizuje dodanie dwoch liczb zespolonych.
 * Argumenty:
 *    Skl1 - pierwszy skladnik dodawania,
 *    Skl2 - drugi skladnik dodawania.
 * Zwraca:
 *    Sume dwoch skladnikow przekazanych jako parametry.
 */
LZespolona stworz (double re, double im)
{
    LZespolona nowa;
    nowa.re = re;
    nowa.im = im;
    return nowa;
}



 LZespolona Sprzezenie(LZespolona liczba)
{
    LZespolona wynik;
    wynik.im = liczba.im * (-1);
    return wynik;
}

LZespolona Modul (LZespolona liczba)
{
    double modul;
    modul = (liczba.re * liczba.re) + (liczba.im * liczba.im);
    return modul;
}



LZespolona  operator + (LZespolona  skl1,  LZespolona  skl2)
{
  LZespolona  wynik;

  wynik.re = skl1.re + skl2.re;
  wynik.im = skl1.im + skl2.im;
  return wynik;
}

LZespolona  operator - (LZespolona  skl1,  LZespolona  skl2)
{
	LZespolona wynik;

	wynik.re = skl1.re - skl2.re;
	wynik.im = skl1.im - skl2.im;
	return wynik;
}

LZespolona  operator * (LZespolona  skl1,  LZespolona  skl2)
{
	LZespolona wynik;

	wynik.re = (skl1.re * skl2.re) - (skl1.im * skl2.im);
	wynim.im = (skl1.re * skl2.im) - (skl1.im * skl2.re);

	return wynik;
}

LZespolona operator / (LZespolona skl1, double modul)
{
    LZespolona wynik;
    wynik.re = skl1.re / modul;
    wynik.im = skl1.im / modul;
    return wynik;
}

LZespolona operator / (Lzespolona skl1, LZespolona skl2)
{
	LZespolona wynik;
	LZespolona sprzezenie = Sprzezenie(skl2);
	LZespolona licznik = skl1 * sprzezenie;
	double modul;
	modul = Modul(skl2);
	wynik = licznik / modul;
    return wynik;
}

bool operator == (LZespolona wynik, LZespolona odp)
{
    if(odp.re == wynik.re && odp.im == odp.im)
    return true;
}

bool operator != (LZespolona wynik, LZespolona odp)
{
    return !(odp == wynik);
}



std::istream & operator >> (std::istream & strm, LZespolona & skl)
{
    char znak;
    strm >> znak;
    if (znak != '(') strm.setstate(std::ios::failbit);
    strm >> skl.re >> skl.im >> znak;
    if (znak != 'i') strm.setstate(std::ios::failbit);
    strm >> znak;
    if (znak != ')') strm.setstate(std::ios::failbit);
    return strm;
}

std::ostream & operator << (std::ostream & strm, LZespolona skl)
{
    std::cout << '(' << skl.re << std::showpos << skl.im << std::noshowpos << 'i)';
    return strm;
}

