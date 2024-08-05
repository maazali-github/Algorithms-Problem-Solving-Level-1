#include <iostream>
#include <cmath>

using namespace std;

enum enPrime {NotPrime, Prime};

int ReadPositiveNumber()
{
    int Number = 0;
    do 
    {
        cout << "Enter Positive Number: " << endl;
        cin >> Number;
    }
    while (Number < 0);

    return Number;
}

enPrime CheckPrime(int Number)
{
    int HalfNumber = round(Number / 2);

    for (int Counter = 2; Counter <= HalfNumber; Counter++)
    {
        if (Number % Counter == 0)
            return enPrime::NotPrime;
    }

    return enPrime::Prime;
}

void PrintNumberType(int Number)
{
    switch (CheckPrime(Number))
    {
        case enPrime::NotPrime:
            cout << "This number is not Prime.\n";
            break;
        case enPrime::Prime:
            cout << "This number is prime.\n";
            break;
    }  
}

int main()
{
    PrintNumberType(ReadPositiveNumber());

    return 0;
}



