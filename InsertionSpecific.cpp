//Insertion at any specific position.
#include<iostream>
using namespace std;
int main()
{
int array[10],n,i,num,pos;
cout<<"enter size of an array = ";
cin>>n;
cout<<"enter array elements = ";
for(i=0;i<n;i++)
{
cin>>array[i];
}
cout<<"enter a number = ";
cin>>num;
cout<<"enter position =";
cin>>pos;
if(pos<1 || pos>n)
cout<<"invalid position.\n";
else
{
for(i=n;i>=pos-1;i--)
{
array[i]=array[i-1];
}
array[pos-1]=num;
n++;
for(i=0;i<n;i++)
{
cout<<array[i]<<" ";
}
cout<<endl;

}
return 0;
}