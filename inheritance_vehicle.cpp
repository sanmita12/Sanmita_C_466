#include<iostream>
using namespace std;

class Vehicle
{
private:
    int speed;

public:
    void setspeed (int s)
    {
        speed = s;
    }

    int getspeed()
    {
        return speed;
    }
};

class Car : public Vehicle
{
public:
    void display()
    {
        cout << "Car Speed: " << getspeed() << endl;
    }
};

int main()
{
    Car c;
    c.setspeed(50);
    c.display();
    return 0;
}
