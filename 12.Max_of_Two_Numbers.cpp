#include <iostream>

using namespace std;

void ReadNumbers(int &Num1, int &Num2)
{
    cout << "Enter Number 1: ";
    cin >> Num1;
    cout << "Enter Number 2: ";
    cin >> Num2;
}

int CheckMax(int Num1, int Num2)
{
    if (Num1 > Num2)
        return Num1;
    else
        return Num2;
}

void PrintResult(int Max)
{
    cout << "Max Number is: " << Max << endl;
}

int main()
{
    int Num1, Num2;
    ReadNumbers(Num1, Num2);
    PrintResult(CheckMax(Num1, Num2));

    return 0;
}


