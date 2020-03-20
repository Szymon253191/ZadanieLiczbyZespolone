#include "LZespolona.hh"



/*!
 * Realizuje dodanie dwoch liczb zespolonych.
 * Argumenty:
 *    Skl1 - pierwszy skladnik dodawania,
 *    Skl2 - drugi skladnik dodawania.
 * Zwraca:
 *    Sume dwoch skladnikow przekazanych jako parametry.
 */
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

	wynik.re = Skl1.re - Skl2.re;
	wynik.im = Skl1.im - Skl2.im;
	return wynik;
}

LZespolona  operator * (LZespolona  skl1,  LZespolona  skl2)
{
	LZespolona wynik;

	wynik.re = (skl1.re * skl2.re) - (skl1.im * skl2.im);
	wynim.im = (skl1.re * skl2.im) - (skl1.im * skl2.re);

	return wynik;
}

LZespolona operator / (Lzespolona skl1, LZespolona skl2)
{
	LZespolona wynik;

	wynik.re = ((skl1.re * skl2.re) + (skl1.im * skl2.im)) / ((skl2.re * skl2.re) + (skl2.im * skl2.im));
	wynik.im = ((skl1.im * skl2.re) - (skl1.re * skl2.im)) / ((skl2.re * skl2.re) + (skl2.im * skl2.im));

	return wynik;
}
