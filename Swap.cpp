#include <iostream>

using namespace std;

int main()
{
    double var1;
    cout<< "Enter Variable 1 = ";
    cin>> var1;

    double var2;
    cout<< "Enter Variable 2 = ";
    cin>> var2;

    cout<< "variable 1 is " << var1 << "\n";
    cout<< "variable 2 is " << var2 << "\n";

    auto var3{0};
    var3 = var2;
    var2 = var1;
    var1 = var3;

    cout << "After swap the values are :" << "\n";
    cout << "Variable 1 is "<< var1 << "\n";
    cout << "Variable 2 is "<< var2 << "\n";
}
