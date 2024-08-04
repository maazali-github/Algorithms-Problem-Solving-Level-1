#include <iostream>

using namespace std;

void ReadLengthWidth(float &Length, float &Width)
{
    cout << "Enter Length: ";
    cin >> Length;
    cout << "Enter Width: ";
    cin >> Width;
}

float CalculateArea(float Length, float Width)
{
    float Area = Length * Width;

    return Area;
}

void PrintArea(float Area)
{
    cout << "Area = " << Area << endl;
}

int main()
{
    float Length, Width;

    ReadLengthWidth(Length, Width);
    PrintArea(CalculateArea(Length, Width));

    return 0;
}
