//Deletion from the beginning of an array.
#include<iostream>
using namespace std;
int main()
{
int array[10],n,i;
cout<<"enter size of an array = ";
cin>>n;
cout<<"enter array elemets = ";
for(i=0;i<n;i++)
{
cin>>array[i];
}
for(i=0;i<n-1;i++)
{
array[i]=array[i+1];

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