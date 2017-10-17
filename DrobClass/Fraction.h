#pragma once
#ifndef _FRACTION_H_
#define _FRACTION_H_



class Fraction
{
public:
	/*Fraction operator ++();
	Fraction operator --();
	
	

	Fraction operator +(const Fraction&);
	Fraction operator *(const Fraction&);
	Fraction operator /(const Fraction&);
	Fraction operator -(const Fraction&);

	Fraction& operator +=(const Fraction&);
	Fraction& operator *=(const Fraction&);
	Fraction& operator /=(const Fraction&);
	Fraction& operator -=(const Fraction&);*/

	Fraction Add(const Fraction&);
	Fraction Multiply(const Fraction&);
	Fraction Division(const Fraction&);
	Fraction Subtraction(const Fraction&);

	void Show();
	bool ErrorCheck(const Fraction&, const Fraction&);
	void PutsError(const bool &b)
	{	
		if (b)
		{
			puts("Wrong fractoin");
			return;
		}
		puts("Division on zero");
	}


	Fraction(int nm = 0, int dnm = 1);
	~Fraction() {}

	int nm, dnm;
};

#endif // !_FRACTION_H_