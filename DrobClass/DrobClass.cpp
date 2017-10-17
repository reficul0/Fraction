// DrobClass.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Fraction.h"
#include <stdio.h>


int main()
{
	try {
		Fraction a(3, 1), b(3, 1);
		a.Add(b);
		a.Division(b);
		Fraction err(0, 0);
		a.Add(err);//Здась срабоатет throw
	}
	catch (const char* str)
	{
		puts(str);
	}

	int fore = 4;
}