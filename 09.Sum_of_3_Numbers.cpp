#include <iostream>

using namespace std;

void ReadNumbers(int &Num1, int &Num2, int &Num3)
{
    cout << "Enter Number1: ";
    cin >> Num1;
    cout << "Enter Number2: ";
    cin >> Num2;
    cout << "Enter Number3: ";
    cin >> Num3;
}

int SumOfNumbers(int Num1, int Num2, int Num3)
{
    return Num1 + Num2 + Num3;
}

void PrintResult(int Sum)
{
    cout << "Sum is " << Sum << endl;
}

int main()
{
    int Num1, Num2, Num3;
    ReadNumbers(Num1, Num2, Num3);
    PrintResult(SumOfNumbers(Num1, Num2, Num3));

    return 0;
}
