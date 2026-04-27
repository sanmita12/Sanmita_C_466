
#include<iostream>
using namespace std;

class Vehicle
{
protected:
    int speed;
};

class Car : public Vehicle
{
public:
    void setData(int s)
    {
        speed = s;
    }

    void display()
    {
        cout << "Car Speed: " << speed << endl;
    }
};

int main()
{
    Car c;
    c.setData(80);
    c.display();
    return 0;
}
