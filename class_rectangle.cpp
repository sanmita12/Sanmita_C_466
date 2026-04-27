#include<iostream>
using namespace std;

class Rectangle
{
public:
    float length , width ;

        void enterData()
    {
        cout<< "Enter length: ";
        cin>> length ;

        cout<< "Enter width: ";
        cin>> width ;

    }
    float calculateArea()
    {
        return length*width;
    }
};
 int main()

{
    Rectangle r;
    float area;

    r.enterData();
    area = r.calculateArea();

    cout << "Area of Rectangle = " << area << endl;

    return 0;
}
