#include<iostream>

using namespace std;

int& LargeValue(int array[],int n)
{
 int i, CurrentIndex=0;
 for(i=1;i<n;++i)
    if(array[CurrentIndex]<array[i])
            CurrentIndex=i;
  return array[CurrentIndex];
}

int main()
{
 int iArray[10]={22,434,54,23,235,653,756,323,121,565};

 cout<<"Large Element : "<<LargeValue(iArray,10)<<endl;
}
