#include <iostream>
using namespace std;

class Calculator {
public:
    // Overloaded method: adds two
    // integers
    int add(int a, int b) {
        return a + b;
    }

    // Overloaded method: adds three
    // integers
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Overloaded method: adds two
    // doubles
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator calc;

    cout << "Sum of 2 + 3: "
        << calc.add(2, 3) << endl;
    cout << "Sum of 1 + 2 + 3: "
        << calc.add(1, 2, 3) << endl;
    cout << "Sum of 2.5 + 3.5: "
        << calc.add(2.5, 3.5);

    return 0;
}
