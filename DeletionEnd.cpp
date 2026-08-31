//Deletion from the end.
#include<iostream>
using namespace std;
int main()
{
int array[10],n,i;
cout<<"enter size of an array = ";
cin>>n;
cout<<"enter array elements are = ";
for(i=0;i<n;i++)
{
cin>>array[i];
}
n--;

cout<<"array elements are = ";
for(i=0;i<n;i++)
{
cout<<array[i]<<" ";
}
cout<<endl;
return 0;
}