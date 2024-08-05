#include <iostream>

using namespace std;

void ReadNumberPower(int &Number, int &Power)
{
    cout << "Enter a number: ";
    cin >> Number;

    cout << "Enter a power: ";
    cin >> Power;
}

void Power_Of_M(int Number, int Power)
{
    int Result = 1;
    if (Power == 1)
        Result = 1;
    else
    {
        for (int i = 1; i <= Power; i++)
        {
            Result *= Number; 
        }
    }

    cout << Result << endl;
}

int main()
{
    int Number, Power;
    ReadNumberPower(Number, Power);
    Power_Of_M(Number, Power);

    return 0;
}
