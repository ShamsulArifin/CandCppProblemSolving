#include <cstdlib>
#include <iostream>

using namespace std;

void SwapValue(int &x, int &y) //gets the address of x & y

{
    int temp;  //declare temp variable
    temp = x;  //store value of x to temp
    x = y;     //change value of x with y
    y = temp;  //change value of y with temp
}

int main()

{
    int p = 5 , q = 7;  //declare two variable

    SwapValue(p, q);    //send address of p & q to SwapValue()
    cout << "P = " << p << ", Q = " << q << endl;

    return 0;
}
