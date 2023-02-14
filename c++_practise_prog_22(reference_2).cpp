#include<iostream>

using namespace std;

int ChangeValue(int& val)

{
 val=15;
}

int main()
{
 int i=10;

 cout<<"Before calling changevalue():="<<i<<endl;

 ChangeValue(i);

 cout<<"After calling changevalue()="<<i<<endl;
}
