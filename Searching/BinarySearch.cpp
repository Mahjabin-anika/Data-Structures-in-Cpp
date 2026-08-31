#include<iostream>
using namespace std;
int main()
{
int array[100],n, i,mid,key;
cout<<"enter size of an array = ";
cin>>n;
cout<<"enter array elements = ";
for(i=0;i<n;i++)
{
cin>>array[i];
}
cout<<"enter a key element that you want to search = ";
cin>>key;
int low=0,high=n-1;
while(low<=high)
{
mid=(low+high)/2;
if(array[mid]==key)
{
cout<<"element found at position "<<mid+1; break;
}
else if(key>array[mid])
{
low=mid+1;
}
else
high=mid-1;
}
if(low>high)
{
cout<<"element not found.\n";

}
cout<<endl;
return 0;
}