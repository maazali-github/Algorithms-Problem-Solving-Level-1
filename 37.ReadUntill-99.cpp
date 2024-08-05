#include <iostream>
#include <string>

using namespace std;

int ReadNumber(string Message)
{
    int Number = 0;
    cout << Message << endl;
    cin >> Number;

    return Number;
}

int SumNumbersUntil()
{
    int Number = 0, Sum = 0, Counter = 1;

    while (true) 
    {
        Number = ReadNumber("Enter Number " + to_string(Counter) + ": ");

        if (Number == -99)
        {
            break;
        }

        Sum += Number;
        Counter++;
    }

    return Sum;
}

int main()
{
    int Sum = SumNumbersUntil();
    cout << "Result = " << Sum << endl;

    return 0;
}
