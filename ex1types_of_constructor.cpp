
#include<iostream>
using namespace std;

class Student
{
    int id;
    string name;

public:
    // Default constructor
    Student()
    {
        id = 0;
        name = "unknown";
        cout << "Default constructor called" << endl;
    }

    // Parameterized Constructor
    Student(int i, string n)
    {
        id = i;
        name = n;
        cout << "Parameterized Constructor Called" << endl;
    }

    // Copy Constructor
    Student(const Student &s)
    {
        id = s.id;
        name = s.name;
        cout << "Copy Constructor Called" << endl;
    }

    // Function to display data
    void display()
    {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main()
{
    Student s1;
    s1.display();

    Student s2(101, "Sita");
    s2.display();

    Student s3 = s2;
    s3.display();

    return 0;
}
