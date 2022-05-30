#pragma once
#include <iostream>


using namespace std;
class Fraction
{
private:
	int nom;
	int denom;
	int integer;
public:
	Fraction(int nom, int denom)
	{
		this->nom = nom;
		this->denom = denom;
	}
	Fraction  minusF(Fraction& f1)
	{
		int nom1 = nom * f1.denom - f1.nom*denom;
		int denom1 = denom * f1.denom;
		Fraction  f2(nom1, denom1);
	
		return   f2;
	}
	Fraction  divisionF(Fraction& f1)
	{
		int nom1 = nom * f1.denom ;
		int denom1 = denom * f1.nom;
		Fraction  f2(nom1, denom1);

		return   f2;
	}
	void integerF()
	{
		int a = nom % denom;
		if (a != 0&& (nom-a)!=0)
		{
			integer = (nom - a) / denom;
			nom = a;
			int b = maxDivider(nom, denom);
			if (b > 1)
			{
				nom = nom / b;
				denom= denom /b;
			}
			if (integer < 0)nom = -nom;
				
			cout << integer << " " << nom << "/" << denom;
		}
		else if (a != 0 && (nom - a) == 0)
		{
			int b = maxDivider(nom, denom);
			if (b > 1)
			{
				nom = nom / b;
				denom = denom / b;
			}
			print();
		}
		else
		{
			integer =nom  / denom;
			cout << integer ;
		}
		
	}
	int maxDivider(int nom, int denom)
	{
		int a=1;
		for (int i = denom; i > 1; i--)
		{
			if (nom % i == 0 && denom % i == 0)
			{
				a = i;
				break;
			}
		}
		return a;
	}
	
	void print()
	{
		cout << nom << "/" << denom;
	}
};

