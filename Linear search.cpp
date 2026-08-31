//Search an element taking user’s choice using Linear search algorithm.
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
cout<<"enter a number that you want to search = ";
cin>>num;
for(i=0;i<n;i++)
{

if(array[i]==num)
{
cout<<"element found at position : "<<i+1;
break;
}
}
if(i==n)
{
cout<<"element not found in array.\n";
}
return 0;
}