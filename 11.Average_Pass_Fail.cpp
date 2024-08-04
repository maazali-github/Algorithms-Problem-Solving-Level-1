#include <iostream>

using namespace std;

enum enPassFail {Fail, Pass};

void ReadMarks(int &Mark1, int &Mark2, int &Mark3)
{
    cout << "Enter Mark1: ";
    cin >> Mark1;
    cout << "Enter Mark2: ";
    cin >> Mark2;
    cout << "Enter Mark3: ";
    cin >> Mark3;
}

float CalculateAverageOfMarks(int Mark1, int Mark2, int Mark3)
{
    return ((Mark1 + Mark2 + Mark3) / 3.0);
}

enPassFail CheckAverage(float Average)
{
    if (Average >= 50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;
}

void PrintResult(float Average)
{
    cout << "Average is: " << Average << endl;
    
    if (CheckAverage(Average) == enPassFail::Pass)
        cout << "You Passed.\n";
    else 
        cout << "You Failed.\n";
}



int main()
{
    int Mark1, Mark2, Mark3;
    ReadMarks(Mark1, Mark2, Mark3);
    PrintResult(CalculateAverageOfMarks(Mark1, Mark2, Mark3));

    return 0;
}
