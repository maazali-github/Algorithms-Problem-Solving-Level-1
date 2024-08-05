#include <iostream>

using namespace std;

enum enOperationType {Add = '+', Subtract = '-', Multiplty = '*', Divide = '/'};

float ReadNumber(string Message)
{
    float Number = 0;
    cout << Message << endl;
    cin >> Number;

    return Number;
}

enOperationType ReadOperationType()
{
    char OperationType = '+';
    cout << "Enter Operation Type (+, -, *, /): ";
    cin >> OperationType;

    return enOperationType(OperationType);
}

float Calculate(float Number1, float Number2, enOperationType OperationType)
{
    switch (OperationType)
    {
        case enOperationType::Add:
            return Number1 + Number2;
        case enOperationType::Subtract:
            return Number1 - Number2;
        case enOperationType::Multiplty:
            return Number1 * Number2;
        case enOperationType::Divide:
            return Number1 / Number2;
        default:
            return Number1 + Number2;          
    }
}

int main()
{
    float Number1 = ReadNumber("Enter Number1: ");
    float Number2 = ReadNumber("Enter Number2: ");

    enOperationType OperationType = ReadOperationType();

    cout << "Result = " << Calculate(Number1, Number2, OperationType);

    return 0;
}
