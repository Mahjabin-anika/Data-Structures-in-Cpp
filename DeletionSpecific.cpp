//Deletion from any spacific position.

#include<iostream>
using namespace std;
int main()
{
int array[10],n,i,pos;
cout<<" enter size of an array = ";
cin>>n;
cout<<"enter array elements are : ";
for(i=0;i<n;i++)
{
cin>>array[i];
}
cout<<"which position you want to delete = ";
cin>>pos;
if(pos<1|| pos>n)
{
cout<<"invalid position.";
}
else
{
for(i=pos-1;i<n-1;i++)
{
array[i]=array[i+1];
}
n--;
}
cout<<"array elements = ";
for(i=0;i<n;i++)
{
cout<<array[i]<<" ";
}
cout<<endl;
return 0;

}