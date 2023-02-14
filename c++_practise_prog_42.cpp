#include <cstdlib>
#include <iostream>

using namespace

int main()

{
    bool getResult;

    int x = 5 , y = 10 , z = 15 ;

    getResult = x > y ;
    cout << "result of getresult = X > Y : " << getResult << endl;

    getResult = y < z ;
    cout << "result of get result = Y < Z : " << getResult << endl;

    x = x + z - y ;
    cout << "result of X = X + Z - Y : " << x << endl;

    getResult = true;
    cout << "reuslt of getresult = true : " << getResult << endl;

    getResult = false;
    cout << "result of getresult = false : " << getResult << endl;

    return 0;
}
