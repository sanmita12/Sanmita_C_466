#include<iostream>
using namespace std;

class Car
{
private:
    string brand;
    int speed;

public:
    void getData(string brand, int speed)
    {
        // Using this pointer to differentiate class members and parameters
        this->brand = brand;
        this->speed = speed;
    }

    void display()
    {
        cout<<"Brand: "<<this->brand<<endl;
        cout<<"Speed: "<<this->speed<<" km/h"<<endl;
    }
};

int main()
{
    Car c1, c2;

    string b;
    int s;

    cout<<"Enter details of Car 1"<<endl;
    cout<<"Enter Car Brand: ";
    cin>>b;
    cout<<"Enter Speed: ";
    cin>>s;
    c1.getData(b, s);

    cout<<"\nEnter details of Car 2"<<endl;
    cout<<"Enter Car Brand: ";
    cin>>b;
    cout<<"Enter Speed: ";
    cin>>s;
    c2.getData(b, s);

    cout<<"\nCar 1 Details"<<endl;
    c1.display();

    cout<<"\nCar 2 Details"<<endl;
    c2.display();

    return 0;
}
