//Insert an element at the beginning of an array.
#include<iostream>
using namespace std;
int main()
{
int array[10],n,i,num;
cout<<"enter size of an array = ";
cin>>n;
cout<<"enter array elements are = ";
for(i=0;i<n;i++)
{
cin>>array[i];
}
cout<<"enter the element you want to insert at begining = ";
cin>>num;
for(i=n;i>0;i--)
{
array[i]=array[i-1];
}

array[0]=num;
n++;
cout<<"elements are = ";
for(i=0;i<n;i++)
{
cout<<array[i]<<" ";
}
cout<<endl;
return 0;
}