#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int x, y, result;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    result = add(x, y);

    cout << "Sum = " << result;

    return 0;
}
