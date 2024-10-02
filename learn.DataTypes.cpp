#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int num = 2;
    cout << sizeof(int); // 4 bits smaller ranger than long

    long num2 = 5;
    cout << sizeof(long); // 4 bits

    float num3 = 5; // approx for large no.
    cout << sizeof(float); //4

    double num4 = 5;
    cout << sizeof(double);  //no approx for large no., 8 bits

    char character = 'm' ; // one character single char
    string sentence = "learn c++";
    bool islogic =  true ;
}
