#include <iostream>

using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number;

    do
    {
        cout << Message << endl;
        cin >> Number;
    }
    while (Number < 0);

    return Number;
}

int Factorial(int Number)
{
    int Factorial = 1;

    for (int i = Number; i > 1; i--)
    {
        Factorial *= i;
    }

    return Factorial;
}


int main()
{

    cout << Factorial(ReadPositiveNumber("Enter a Positive Number: ")) << endl;

    return 0;
}

