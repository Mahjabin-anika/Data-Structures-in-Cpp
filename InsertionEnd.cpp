//Insert an element at the end of an array.
#include<iostream>
using namespace std;
int main()
{
int array[10],n,i,num;
cout<<"enter size of an arrary = ";
cin>>n;
cout<<"enter array elements = ";
for(i=0;i<n;i++)
{
cin>>array[i];
}
cout<<"enter a number that you want to insert at the end = ";
cin>>num;
array[i]=num;
n++;
cout<<"array elements are = ";
for(i=0;i<n;i++)
{
cout<<array[i]<<" ";
}
cout<<endl;
return 0;
}