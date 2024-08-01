#include <iostream>

using namespace std;

float ReadNumber()
{
    float Number;
    cout << "Enter a number: ";
    cin >> Number;

    return Number; 
}

float CalculateHalfNumber(float Number)
{
    return Number / 2;
}

void PrintHalfNumber(float Number)
{
    cout << "Half of " << Number <<  " is " << CalculateHalfNumber(Number) << endl;
}

int main()
{
    PrintHalfNumber(ReadNumber());

    return 0;
}
