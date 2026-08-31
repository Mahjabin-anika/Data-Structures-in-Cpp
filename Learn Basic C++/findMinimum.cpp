#include<iostream>
using namespace std;
int main()
{
int array[100],n,i,min;
cout<<"Enter size of an array =";
cin>>n;
cout<<"Enter array elements=";
for(i=0;i<n;i++)
{
cin>>array[i];
}
min=array[0];
for(i=1;i<n;i++)
{
if(min>array[i])
min=array[i];
}
cout<<"The minimum number of that array is "<<min<<endl;
return 0;
}