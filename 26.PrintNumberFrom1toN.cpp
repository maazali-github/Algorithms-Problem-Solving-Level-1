#include <iostream>

using namespace std;

int ReadNumber()
{
    int Number;
    cout << "Enter a Number: ";
    cin >> Number;

    return Number;
}

void PrintNumberFrom1toN(int Number)
{
    for (int i = 1; i <= Number; i++)
    {
        cout << i << endl;
    }
}


int main()
{
    int Number = ReadNumber();
    PrintNumberFrom1toN(Number);

    return 0; 
}

