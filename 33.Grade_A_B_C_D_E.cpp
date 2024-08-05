#include <iostream>

using namespace std;

int ReadNumberInRange(int From, int To)
{
    int Number;

    do 
    {
        cout << "Enter Number between 0 and 100: ";
        cin >> Number;
    }
    while (Number < From || Number > To);

    return Number;
}

char GetGrade(int Grade)
{
    if (Grade >= 90)
        return 'A';
    else if (Grade >= 80)
        return 'B';
    else if (Grade >= 70)
        return 'C';
    else if (Grade >= 60)
        return 'D';
    else if (Grade >= 50)
        return 'E';
    else    
        return 'F';
}

int main()
{
    cout << GetGrade(ReadNumberInRange(0, 100)) << endl;

    return 0;
}
