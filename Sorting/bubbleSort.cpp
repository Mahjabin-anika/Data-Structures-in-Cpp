//Sort an array in descending order using bubble sort algorithm using swap function.
#include<iostream>
using namespace std;
int main()
{
int n=100, array[n],i,j;
cout<<"how many numbers = ";
cin>>n;
cout<<"Enter array elements = ";
for( i=0;i<n;i++)
{

cin>>array[i];
}
for(i=0;i<n-1;i++)
{
int swapped=0;
for(j=0;j<n-i-1;j++)
{
if(array[j]<array[j+1])
{
swap(array[j],array[j+1]);
swapped=1;
}
}
if(swapped==0)
{
break;
}
}
for(i=0;i<n;i++)
{
cout<<array[i]<<" " ;
}
return 0;
}