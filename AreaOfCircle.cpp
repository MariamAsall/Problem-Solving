#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double Radius ;
    const double PI = 3.141592653;
    cout << "Enter the Radius Number = ";
    cin>>Radius;

    cout << "The Area of the circle is " << PI * pow(Radius,2) << fixed << setprecision(9);
}
