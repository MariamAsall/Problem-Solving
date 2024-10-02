#include <iostream>

using namespace std;

int main()
{
    cout << "Enter two Numbers \n";
    long long  num1 , num2;
    cin>> num1 >> num2;

    cout << "The sum of last two digits are = "<< num1%10 + num2%10;

}
