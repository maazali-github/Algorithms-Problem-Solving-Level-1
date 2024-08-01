#include <iostream>

using namespace std;

struct stInfo
{
    string FirstName;
    string LastName;
};

stInfo ReadInfo()
{
    stInfo Info;
    
    cout << "Enter your first name: ";
    cin >> Info.FirstName;
    cout << "Enter your last name: ";
    cin >> Info.LastName;

    return Info;
}

string GetFullName(stInfo Info)
{
    string FullName = Info.FirstName + " " + Info.LastName;

    return FullName; 
}

void PrintFullName(string FullName)
{
    cout << "My name is " << FullName << endl;
}

int main()
{
    PrintFullName(GetFullName(ReadInfo()));

    return 0;
}
