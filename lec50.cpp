#include <iostream>
using namespace std;
// revising pointer and "new" and "delete" lecture 50
int main()
{
    int a =9;;
    int *ptr = &a;
    *ptr =999;

    cout << "The value of a is " << * (ptr)<<endl;
//new operator
    float *p = new float(900.80);
    cout << "The value at address p is " << *(p)<<endl;

    int *arr = new int[3];
    arr[0] = 10;
    // arr[1] = 20;
    *(arr + 1)= 20;
    arr[2] = 30;
    // delete[] arr;
    cout << "The value at address arr[0] is " <<  arr[0]<<endl;
    cout << "The value at address arr[1] is " <<  arr[1]<<endl;
    cout << "The value at address arr[2] is " <<  arr[2]<<endl;

    //delete operator
    return 0;
}