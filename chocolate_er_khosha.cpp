#include<iostream>

using namespace std;

int main()

{
 int k=0,l=0,temp=0;

 cout<<"Enter your khosher shongkha: ";
 cin>>k;

 if(k%3==0)
 {

 {
 l=k/3;

 cout<<"Total fau chocolate: "<<l<<"\n";
 }
 }
 if(l>=2){
 temp=k;
 k=l;

 l=k+1;
 cout<<"Maximum fau chocolate: "<<l;
 }

 else if(k%3>=1)
 {
  {
   l=(k/3)+1;
   cout<<"Total fau chocolate: "<<l<<"\n";
  }
  {
   temp=k;
   k=l;
   l=k+1;
  }

  cout<<"Maximum fau chocolate: "<<l;
 }

 return 0;
}
