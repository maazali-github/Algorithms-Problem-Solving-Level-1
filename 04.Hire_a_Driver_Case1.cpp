#include <iostream>

using namespace std;

struct stInfo 
{
    int Age;
    bool HasDriverLicense;
};

stInfo ReadInfo()
{
    stInfo Info;

    cout << "Enter your age: ";
    cin >> Info.Age;

    cout << "Enter 1 if you have driver license or 0 if you not: ";
    cin >> Info.HasDriverLicense;

    return Info;
}

bool IsAccepted(stInfo Info)
{
    return (Info.Age > 21 && Info.HasDriverLicense);
}

void PrintResult(stInfo Info)
{
    if (IsAccepted(Info))
        cout << "Hired.\n";
    else
        cout << "Rejected.\n";
}

int main()
{
    PrintResult(ReadInfo());

    return 0;
}
