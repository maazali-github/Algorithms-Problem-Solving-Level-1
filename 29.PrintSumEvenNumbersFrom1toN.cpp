#include <iostream>

using namespace std;

enum enOddOrEvenOrAll { Odd = 1, Even =2 , All =3 };

int ReadNumber()
{
	int Num;
	cout << "Pleas enter a Number ? \n";
	cin >> Num;
	return Num;
}

enOddOrEvenOrAll CheckOddOrEvenOrALl(int Number)
{
	if (Number % 2 != 0)
		return enOddOrEvenOrAll::Odd;
	else
	       return enOddOrEvenOrAll::Even;
}

int SumEvenFrom1toNum_UsingFor(int Num)
{ 
cout << "Sum Even Numbers using For Statement: \n";
	int Sum = 0;
	for (int Counter = 1 ; Counter <= Num ; Counter++)
	{
		if (CheckOddOrEvenOrALl(Counter) == enOddOrEvenOrAll::Even)
		{
			Sum += Counter;
		}
	}
	return Sum ;
}

int main()
{
	int Num = ReadNumber();
	cout << SumOddFrom1toNum_UsingFor(Num) << endl;
}
