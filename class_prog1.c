#include<iostream>
using namespace std;

class Student
{
public:
    int id;
    string name;

    void display()
    {
        cout<<"ID: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
    }
};

int main()
{
    Student s1, s2;   // two objects

    // Input for first student
    cout<<"Enter ID of Student 1: ";
    cin>>s1.id;

    cout<<"Enter Name of Student 1: ";
    cin>>s1.name;

    // Input for second student
    cout<<"Enter ID of Student 2: ";
    cin>>s2.id;

    cout<<"Enter Name of Student 2: ";
    cin>>s2.name;

    cout<<"Student 1 Details\n"<<endl;
    s1.display();

    cout<<"Student 2 Details\n"<<endl;
    s2.display();

    return 0;
}
