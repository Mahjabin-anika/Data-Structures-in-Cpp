//sort an array using bubble sort algorithm then apply binary search.

#include<iostream>
using namespace std;
int array[10],n,i,j;
void bubblesort()
{
for(i=0;i<n-1;i++)
{
int swaped=0;
for(j=0;j<n-i-1;j++)
{
if(array[j]>array[j+1])
{
swap(array[j],array[j+1]);
swaped=1;
}
}
if(swaped==0)
{
break;
}
}
}
void binarysearch()
{

int low =0,high=n-1,key,mid;
cout<<"enter key =";
cin>>key;
while(low<=high)
{
mid=(low+high)/2;
if(array[mid]==key)
{
cout<<"found at position "<< mid+1;break;
}
else if(array[mid]<key)
{
low=mid+1;
}
else
{
high=mid-1;
}
}
if(low>high)
{
cout<<"element not found.\n";
}
}
int main()
{
cout<<"enter size of an array = ";
cin>>n;
cout<<"enter array elements = ";
for(i=0;i<n;i++)
{
cin>>array[i];
}
bubblesort();
cout<<"after using bubble sort = ";
for(i=0;i<n;i++)
{

cout<<array[i]<<" ";
}
cout<<endl;
binarysearch();
return 0;
}