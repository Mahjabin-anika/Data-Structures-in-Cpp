//sort an unsorted array using selection sort and then apply binary search to search a number.
#include<iostream>
using namespace std;
int array[10],n,i,j,num,mid,key;
void selectionsort()
{
for(i=0;i<n-1;i++)
{
int min=i;
for(j=i+1;j<n;j++)
{
if(array[min]>array[j])
{
min=j;
}
}
int temp =array[min];
array[ min]=array[i];
array[i]=temp;
}
}
void print()
{
for(i=0;i<n;i++)
{
cout<<array[i]<<" ";
}
}
int main()
{
cout<<"enter size of an array = ";
cin>>n;
cout<<"enter array elements are = ";
for(i=0;i<n;i++)
{

cin>>array[i];
}
selectionsort();
cout<<"sorted array = ";
print();
cout<<"\nenter a number = ";
cin>>key;
int low=0,high=n-1;
while(low<=high)
{
mid=(low+high)/2;
if(array[mid]==key)
{
cout<<"element found at index "<<mid;break;
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
cout<<"element not found!";
}
return 0;
}