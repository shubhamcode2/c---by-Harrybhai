#include <iostream>
using namespace std;
//constructor overloadngg
class complex
{
    int a, b;

public:
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex(int x)
    {
        a = x;
        b = 0;
    }
    complex()
    {
        a = 0;
        b = 0;
    }
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    complex c1(2,3);
    c1.printNumber();

    complex c2(2);
    c2.printNumber();

    complex c3;
    c3.printNumber();

    return 0;
}