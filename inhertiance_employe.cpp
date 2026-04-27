#include<iostream>
using namespace std;

class Employee
{
private:
    int salary;

public:
    void setData(int s)
    {
        salary = s;
    }

    int getData()
    {
        return salary;
    }
};

class manager: public Employee
{
public:
    void display()
    {
        cout << "manager salary : " << getData() << endl;
    }
};

int main()
{
    manager m;
    m.setData(200);
    m.display();
    return 0;
}
