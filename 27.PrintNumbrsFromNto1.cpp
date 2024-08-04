#include <iostream>

using namespace std;

int ReadNumber()
{
    int Number;
    cout << "Enter a Number: ";
    cin >> Number;

    return Number;
}

void PrintNumberFromNto1(int Number)
{
    for (int i = Number; i >= 1; i--)
    {
        cout << i << endl;
    }
}


int main()
{
    int Number = ReadNumber();
    PrintNumberFromNto1(Number);

    return 0; 
}


