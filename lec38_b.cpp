#include <iostream>
using namespace std;
//private visibility k sath
class base
{
    int data1;

public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};
void base :: setData(void){
    data1 = 10;
    data2 = 20;
}

int base :: getData1(){
    return data1;
}

int base :: getData2(){
    return data2;
}
class derived : private base
{
    int data3;

public:
    void process();// functions coming from base class will become private but the functions that i mmade hre in public will always be public and can be accessd from out of scope also like from  int main codde also;
    void display();
};

void derived :: process(){
    setData();
    data3 = data2 * getData1();     //getData1 instead of direct data1 because its private in the class cant access;
}

void derived:: display(){
    cout<<"value od data1 is "<< getData1() <<endl;
    cout<<"value od data2 is "<< data2 <<endl;
    cout<<"value od data2 is "<< data3 <<endl;
}

int main()
{
    derived der;
    // der.setData();
    der.process();
    der.display();

    return 0;
}