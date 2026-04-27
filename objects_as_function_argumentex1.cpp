#include <iostream>
using namespace std;

class Add
{
    int Num;

public:
    void getNumber();
    void printNumber();
    void addNumber(Add x, Add y);   // declaration
};

// function definitions outside → NON-INLINE

void Add::getNumber()
{
    cout << "Enter number: ";
    cin >> Num;
}

void Add::printNumber()
{
    cout << "Number = " << Num << endl;
}

void Add::addNumber(Add x, Add y)
{
   this->Num = x.Num + y.Num;
}

int main()
{
    Add n1, n2, n3;

    cout << "Enter first number:\n";
    n1.getNumber();

    cout << "Enter second number:\n";
    n2.getNumber();

    n3.addNumber(n1, n2);

    cout << "First: ";
    n1.printNumber();

    cout << "Second: ";
    n2.printNumber();

    cout << "Sum: ";
    n3.printNumber();

    return 0;
}
