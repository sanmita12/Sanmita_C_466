#include<iostream>
using namespace std;

class Car
{
public:
    string brand;
    int speed;

    void display()
    {
        cout<<"Brand: "<<brand<<endl;
        cout<<"Speed: "<<speed<<endl;
        cout<<endl;
    }
};

int main()
{
    Car c1, c2;

    c1.brand = "Toyota";
    c1.speed = 120;

    c2.brand = "Honda";
    c2.speed = 150;

    cout<<"Details of Car 1"<<endl;
    c1.display();

    cout<<"Details of Car 2"<<endl;
    c2.display();

    return 0;
}
