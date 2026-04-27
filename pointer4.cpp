#include<iostream>
using namespace std;

class Car
{
private:
    string brand;
    int speed;

public:
    void getData()
    {
        cout<<"Enter Car Brand: ";
        cin>>brand;

        cout<<"Enter Speed: ";
        cin>>speed;
    }

    void display()
    {
        cout<<"Brand: "<<brand<<endl;
        cout<<"Speed: "<<speed<<" km/h"<<endl;
    }
};

int main()
{
    Car c1, c2;

    // Pointer to object
    Car *ptr1, *ptr2;

    ptr1 = &c1;
    ptr2 = &c2;

    cout<<"Enter details of Car 1"<<endl;
    ptr1->getData();

    cout<<"\nEnter details of Car 2"<<endl;
    ptr2->getData();

    cout<<"\nCar 1 Details"<<endl;
    ptr1->display();

    cout<<"\nCar 2 Details"<<endl;
    ptr2->display();

    return 0;
}
