#include <iostream>

using namespace std;

float ReadTotalSales()
{
    int TotalSales;

    do 
    {
        cout << "Enter Total Sales: ";
        cin >> TotalSales;
    }
    while (TotalSales < 0);

    return TotalSales;
}

float GetComissionPercentage(float TotalSales)
{
    if (TotalSales >= 1000000)
        return 0.01;
    else if (TotalSales >= 500000)
        return 0.02;
    else if (TotalSales >= 100000)
        return 0.03;
    else if (TotalSales >= 50000)
        return 0.05;
    else    
        return 0.00;
}

float CalculateTotalComission(float TotalSales)
{
    float ComissionPercentage = GetComissionPercentage(TotalSales);
    return ComissionPercentage * TotalSales;
}

int main()
{
    int TotalSales = ReadTotalSales();
    cout << "Comission Percentage is: " << GetComissionPercentage(TotalSales) << endl;;
    cout << "Total Comission is: " << CalculateTotalComission(TotalSales) << endl;;
}

