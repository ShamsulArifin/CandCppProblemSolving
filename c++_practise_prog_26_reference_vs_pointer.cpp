#include<iostream>

using namespace std;

int main()

{
 int i=10;
 int& ref_i=i;
 int *ptr_i=&i;

 cout<<"I:"<<i<<endl<<"ref_i:"<<ref_i<<endl<<"ptr_i:"<<ptr_i<<endl;

 ++ref_i;
 cout<<"I:"<<i<<endl<<"ref_i:"<<ref_i<<endl<<"ptr_i:"<<ptr_i<<endl;

 ++(*ptr_i);
 cout<<"I:"<<i<<*ptr_i<<endl<<"ref_i:"<<ref_i<<endl<<"ptr_i:"<<ptr_i<<endl;

 ++ptr_i;
 cout<<"I:"<<i<<endl<<"ref_i:"<<ref_i<<endl<<"ptr_i:"<<ptr_i<<endl;
}
