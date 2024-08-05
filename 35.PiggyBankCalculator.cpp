#include <iostream>

using namespace std;

struct stPiggyBankContent
{
    int Pennies, Nickels, Dimes, Quarters, Dollars; 
};

stPiggyBankContent ReadPiggyBankContent()
{
    stPiggyBankContent PiggyBankContent;
    cout << "Enter Pennies: ";
    cin >> PiggyBankContent.Pennies;
    cout << "Enter Nickels: ";
    cin >> PiggyBankContent.Nickels;
    cout << "Enter Dimes: ";
    cin >> PiggyBankContent.Dimes;
    cout << "Enter Quarters: ";
    cin >> PiggyBankContent.Quarters;
    cout << "Enter Dollars: ";
    cin >> PiggyBankContent.Dollars;

    return PiggyBankContent;
}

float CalculateTotalPennies(stPiggyBankContent PiggyBankContent)
{
    int TotalPennies = PiggyBankContent.Pennies * 1 + PiggyBankContent.Nickels * 5 + 
                       PiggyBankContent.Dimes * 10 + PiggyBankContent.Quarters * 25 + 
                       PiggyBankContent.Dollars * 100;

    return TotalPennies;
}

int main()
{
    float TotalPennies = CalculateTotalPennies(ReadPiggyBankContent());

    cout << "Total Pennies = " << TotalPennies << endl; 
    cout << "Total Dollars = " << TotalPennies / 100 << endl; 

    return 0;
}
