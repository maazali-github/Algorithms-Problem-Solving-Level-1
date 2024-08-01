#include <iostream>

using namespace std;

void ReadMarks(int &Mark1, int &Mark2, int &Mark3)
{
    cout << "Enter Mark1: ";
    cin >> Mark1;
    cout << "Enter Mark2: ";
    cin >> Mark2;
    cout << "Enter Mark3: ";
    cin >> Mark3;
}

float AverageOfMarks(int Mark1, int Mark2, int Mark3)
{
    return ((Mark1 + Mark2 + Mark3) / 3.0);
}

void PrintResult(float Average)
{
    cout << "Average of marks is " << Average << endl;
}

int main()
{
    int Mark1, Mark2, Mark3;
    ReadMarks(Mark1, Mark2, Mark3);
    PrintResult(AverageOfMarks(Mark1, Mark2, Mark3));

    return 0;
}
