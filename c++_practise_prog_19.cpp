#include<iostream>

using namespace std;

int AddXY(int x, int y)
{
 return x+y;
}

float AddXY(float x, float y)
{
 return x+y;
}

double AddXY(double x, double y)
{
 return x+y;
}


int main()
{
 cout<<"integer X+Y="<<AddXY(5,5)<<endl;
 cout<<"float X+Y="<<AddXY(5.754,5.223)<<endl;
 cout<<"double X+Y="<<AddXY(90.39349872,5.9398749)<<endl;
}
