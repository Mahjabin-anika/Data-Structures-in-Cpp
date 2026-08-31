//Sort an array using insertion sort algorithm.
#include<iostream>
using namespace std;
int main()
{
int array[100],n,i,j;
cout<<"enter size of an array = ";
cin>>n;
cout<<"enter array elements are = ";
for(i=0;i <n;i++)
{
cin>>array[i];
}
for( i=1;i<n;i++)
{
int key=array[i]; j=i-1;
while(key<array[j] && j>=0)
{
array[j+1]=array[j];
j--;
}
array[j+1]=key;
}
cout<< "after sorting array elements are = " ;
for(i=0;i<n;i++)
{
cout<<array[i]<<" ";
}
cout<<endl;
return 0;
}