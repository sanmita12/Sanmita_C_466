#include<iostream>
using namespace std;

class vehicle
{
public:
    int speed;

    void showSpeed()
    {
        cout<< "Speed: " << speed << endl;
    }
};

class Car : public vehicle
{
 public:
    string brand;
};

int main ()
{
    Car c1;

    c1.brand = "Toyota";
    c1.speed = 120;

    cout<< " brand: " << c1.brand <<endl;
    c1.showSpeed();

    return 0;
}
