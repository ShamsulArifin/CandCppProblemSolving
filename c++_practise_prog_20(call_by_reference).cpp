#include<iostream>

using namespace std;

int SwapValue(int &x,int &y)
{
 int temp;
 temp=x;
 x=y;
 y=temp;
}

int main()
{
 int p, q;
 p=7;
 q=5;
 SwapValue(p,q);
 cout<<"P="<<p<<"Q="<<q<<endl;
}
