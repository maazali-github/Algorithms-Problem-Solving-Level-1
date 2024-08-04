#include <iostream>

using namespace std;

int ReadAge()
{
    int Age;
    cout << "Enter your age between 18 and 45: ";
    cin >> Age;

    return Age;
}

bool ValidateNumberInRange(int Number, int From, int To)
{
    return (Number >= From && Number <= To);
}

int ReadUntilAgeBetween(int From, int To)
{
    int Age;

    do 
    {
        Age = ReadAge();
    }
    while (!ValidateNumberInRange(Age, From, To));

    return Age;
}

void PrintResult(int Age)
{
    cout << "Your age is " << Age << endl;
}

int main()
{
    PrintResult(ReadUntilAgeBetween(18, 45));

    return 0;
}
