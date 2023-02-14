#include<iostream>

using namespace std;

int ChangeValue(int *val)
{
 *val=15;
}

int main()
{
 int i=10;
 cout<<"before calling changevalue():="<<i<<endl;

 ChangeValue(&i);

 cout<<"after calling changevalue():="<<i<<endl;
}
