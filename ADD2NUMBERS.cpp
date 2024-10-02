#include <iostream>
using namespace std;

int main()
{
    cout<<"Welcome to Add 2 Numbers Application!\n";
    int FirstNumber = 0;
    int secondNumber =0;

    cout<<"Enter The First Number : ";
    cin>>FirstNumber;

    cout<<"Enter The second Number : ";
    cin>>secondNumber;

    int Result = 0;
    Result = FirstNumber + secondNumber;
    cout<<"The Result of addition is : "<<Result;
}
