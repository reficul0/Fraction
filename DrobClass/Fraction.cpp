#include "stdafx.h"
#include "stdlib.h"
#include "Fraction.h"
 
//
//Fraction Fraction::operator++()
//{
//
//		if (dnm)
//		{
//			nm += dnm;
//			return *this;
//		}
//		throw "Wrong fraction";
//	
//}
//Fraction Fraction::operator--()
//{
//	
//		if (dnm)
//		{
//			nm -= dnm;
//			return *this;
//		}
//		throw "Wrong fraction";
//}
//
//Fraction Fraction::operator +(const Fraction &fst)
//{
//	
//		if (ErrorCheck(*this, fst))
//		{
//			Fraction var;
//			if (dnm == fst.dnm)
//			{
//				var.nm = nm + fst.nm;
//				var.dnm = dnm;
//			}
//			else
//			{
//				var.nm = nm * fst.dnm + fst.nm * dnm;
//				var.dnm = dnm * fst.dnm;
//			}
//			return var;
//		}
//		throw "Wrong fraction";
//	
//}
//Fraction Fraction::operator *(const Fraction &fst)
//{
//	try
//	{
//		if (ErrorCheck(*this, fst))
//		{
//			Fraction var;
//			var.nm = nm * fst.nm;
//			var.dnm = dnm * fst.dnm;
//			return var;
//		}
//		throw false;
//	}
//	catch (const bool &b)
//	{
//		puts("Wrang fraction");
//	}
//}
//Fraction Fraction::operator /(const Fraction &fst)
//{
//	try
//	{
//		if (ErrorCheck(*this, fst))
//		{
//			if (fst.nm)
//			{
//				Fraction var;
//				var.nm = nm * fst.dnm;
//				var.dnm = dnm * fst.nm;
//				return var;
//			}
//			else
//				throw 'e';
//		}
//		throw false;
//	}
//	catch (const bool &b)
//	{
//		puts("Wrang fraction");
//	}
//	catch (const char &c)
//	{
//		puts("Division on zero");
//	}
//}
//Fraction Fraction::operator -(const Fraction &fst) 
//{
//	try
//	{
//		if (ErrorCheck(*this, fst))
//		{
//			Fraction var;
//			if (dnm == fst.dnm)
//			{
//				var.nm = nm - fst.nm;
//				var.dnm = dnm;
//			}
//			else
//			{
//				var.nm = nm * fst.dnm - fst.nm * dnm;
//				var.dnm = dnm * fst.dnm;
//			}
//			return var;
//		}
//		throw false;
//	}
//	catch (const bool &b)
//	{
//		puts("Wrang fraction");
//	}
//}
//
//Fraction& Fraction::operator +=(const Fraction &sec)
//{
//	try
//	{
//		if (ErrorCheck(*this, sec))
//		{
//			if (dnm == sec.dnm)
//				nm = sec.nm + nm;
//			else
//			{
//				nm = sec.nm * dnm + nm * sec.dnm;
//				dnm = sec.dnm * dnm;
//			}
//			return *this;
//		}
//		throw false;
//	}
//	catch (const bool &b)
//	{
//		puts("Wrang fraction");
//	}
//}
//Fraction& Fraction::operator *=(const Fraction &sec)
//{
//	try
//	{
//		if (ErrorCheck(*this, sec))
//		{
//			nm = sec.nm * nm;
//			dnm = sec.dnm * dnm;
//			return *this;
//		}
//		throw false;
//	}
//	catch (const bool &b)
//	{
//		puts("Wrong fraction");
//	}
//}
//Fraction& Fraction::operator /=(const Fraction &sec)
//{
//	try
//	{
//		if (ErrorCheck(*this, sec))
//		{
//			if (sec.nm)
//			{
//				nm = nm * sec.dnm;
//				dnm = dnm * sec.nm;
//				return *this;
//			}
//			else
//				throw 'e';
//		}
//		throw false;
//	}
//	catch (const bool &b)
//	{
//		puts("Wrong fraction");
//	}
//	catch (const char &c)
//	{
//		puts("Division on zero");
//	}
//}
//Fraction& Fraction::operator -=(const Fraction &sec) 
//{
//	try 
//	{
//		if (ErrorCheck(*this, sec))
//		{
//			if (dnm == sec.dnm)
//				nm = nm - sec.nm;
//			else
//			{
//				nm = nm * sec.dnm - sec.nm * dnm;
//				dnm = sec.dnm * dnm;
//			}
//			return *this;
//		}
//		throw false;
//	}
//	catch (const bool &b)
//	{
//		puts("Wrong fraction");
//	}
//}

Fraction Fraction::Add(const Fraction &sec)
{
	
		if (ErrorCheck(*this, sec))
		{
			if (dnm == sec.dnm)
			{
				nm = nm + sec.nm;
				dnm = dnm;
			}
			else
			{
				nm = nm * sec.dnm + sec.nm * dnm;
				dnm = dnm * sec.dnm;
			}
			return *this;
		}
		throw "Wrong fraction";
}
Fraction Fraction::Multiply(const Fraction &sec)
{
		if (ErrorCheck(*this, sec))
		{
			nm = nm * sec.nm;
			dnm = dnm * sec.dnm;
			return *this;
		}
		throw "Wrong fraction";
	
}
Fraction Fraction::Division(const Fraction &sec)
{
		if (ErrorCheck(*this, sec))
		{
			if (sec.nm)
			{
				nm = nm * sec.dnm;
				dnm = dnm * sec.nm;
				return *this;
			}
			else
				throw "Division on zero";
		}
		throw "Wrong fraction";
}
Fraction Fraction::Subtraction(const Fraction &sec)
{
		if (ErrorCheck(*this, sec))
		{
			if (dnm == sec.dnm)
			{
				nm = nm - sec.nm;
				dnm = dnm;
			}
			else
			{
				nm = nm * sec.dnm - sec.nm * dnm;
				dnm = dnm * sec.dnm;
			}
			return *this;
		}
		throw "Wrong fraction";
}

void Fraction::Show()
{
	printf("%d/%d\n", nm, dnm);
}
bool Fraction::ErrorCheck(const Fraction &fst, const Fraction &sec)
{
	if (fst.dnm) 
	{
		if (sec.dnm)
			return true;
		return false;
	}
	return false;
}

Fraction::Fraction(int nm, int dnm)
{
	Fraction::nm = nm;
	Fraction::dnm = dnm;
}