#include <iostream>
using namespace std;

// Function with default values
int area(int length = 9, int breadth = 8)
{
    return length * breadth;
}

int main()
{
    int l, b;
    char choice;

    cout << "Enter the value of  length and breadth: ";
    cin >> choice;

    if(choice == 'y' || choice == 'Y')
    {
        cout << "Enter length: ";
        cin >> l;
        cout << "Enter breadth: ";
        cin >> b;

        cout << "Area = " << area(l, b);
    }
    else
    {
        // Using default values
        cout << "Area with default values = " << area();
    }

    return 0;
}
