#include <cstdlib>
#include <iostream>

using namespace std;

void func(int x = 99 , float y = 3.1415)
{
    cout << "value of X and Y are : " << x << "," << y << endl;
}

int main()

{
    func();
    func(10,7.44);

    return 0;
}
