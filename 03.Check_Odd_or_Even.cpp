#include <iostream>

using namespace std;

enum enNumberType {Even, Odd};

int ReadNumber()
{
    int number;

    cout << "Enter Number: ";
    cin >> number;

    return number;
}

enNumberType CheckNumberType(int Number)
{
    int Result = Number % 2;

    if (Result == 0)
    {
        return enNumberType::Even;
    }
    else
    {
        return enNumberType::Odd;
    }
}

void PrintNumberType(enNumberType NumberType)
{
    if (NumberType == enNumberType::Even)
    {
        cout << "This is even number.\n";
    }
    else 
    {
        cout << "This is odd number.\n";
    }
}

int main()
{
    PrintNumberType(CheckNumberType(ReadNumber()));
    
    return 0;
}
