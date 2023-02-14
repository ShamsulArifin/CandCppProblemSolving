#include<iostream>

using namespace std;

int func(int x, float y = 3.1415)

{
    cout<<"value of x and y are :"<<x<<","<<y<<endl;
}

int main()
{
 func(10);
 func(10,7.22);
}
