#include <iostream>

using namespace std;

int ReadNumber()
{
    int Number;
    cout << "Enter a number: ";
    cin >> Number;

    return Number;
}

void Power_Of_2_3_4(int Number)
{
    int a, b, c;
    a = Number * Number;
    b = Number * Number * Number;
    c = Number * Number * Number * Number;

    cout << a << endl << b << endl << c << endl;
}

int main()
{
    Power_Of_2_3_4(ReadNumber());

    return 0;
}

