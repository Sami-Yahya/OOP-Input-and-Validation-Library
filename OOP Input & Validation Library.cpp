#include <iostream>
#include "clsInputValidate.h"
using namespace std;

int main() {
    
    cout << clsInputValidate::isNumberBetween(5, 1, 10) << endl;
    cout << clsInputValidate::isNumberBetween(5.5, 1.3, 10.8) << endl;

    cout << clsInputValidate::isDateBetween(clsDate(),
        clsDate(1, 10, 2025),
        clsDate(20, 11, 2025)) << endl;

    cout << clsInputValidate::isDateBetween(clsDate(),
        clsDate(20, 11, 2025),
        clsDate(1, 10, 2025)) << endl;

    cout << "\nPlease Enter a Number:\n";
    int x = clsInputValidate::ReadIntNumber("Invalid Number, Enter again:\n");
    cout << "x= " << x << endl;

    cout << "\nPlease Enter a Number between 1 and 5:\n";
    int y = clsInputValidate::ReadIntNumberBetween(1, 5, "Number is not within range, enter again:\n");
    cout << "y= " << y << endl;

    cout << "\nPlease Enter a Double Number:\n";
    double a = clsInputValidate::ReadDblNumber();
    cout << "a= " << a << endl;

    cout << "\nPlease Enter a Double Number between 1 and 5:\n";
    double b = clsInputValidate::ReadDblNumberBetween(1, 10);
    cout << "b= " << b << endl;

    cout << "\n";
    cout << clsInputValidate::isValidDate(clsDate(35, 12, 2025)) << endl;


    system("pause>0");
    return 0;
}
