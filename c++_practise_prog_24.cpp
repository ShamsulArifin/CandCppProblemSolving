#include<iostream>

using namespace std;

int i=10, j=20;

int& SomeFunc(){

     return i;
}

int main()

{
    SomeFunc()=i;
    cout<<"i is: "<< i;
}
