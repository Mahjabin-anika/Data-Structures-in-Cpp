//To search an element apply binary search algorithm.[ use function]
#include<iostream>
using namespace std;
int array[10],n,num,i,low,high,mid;
int binarysearch(int low,int high)
{
while(low<=high)
{
mid=(low+high)/2;
if(array[mid]==num)
{
return mid;
}
else if(array[mid]>num)
{
high=mid-1;
}
else
{
low=mid+1;
}
}
return -1;
}
int main()
{
cout<<"enter size of an array = ";
cin>>n;
cout<<"enter array elements in ascending order = ";
for(i=0;i<n;i++)
{ cin>>array[i];
}

cout<<"enter a number to search = ";
cin>>num;
int result= binarysearch(0,n-1);
if(result==-1)
{
cout<<"element not found in array.\n";
}
else{
cout<<"element found at index = "<<result<<endl;
}
return 0;
}