//Sort an array in ascending order using selection sort algorithm.
#include<iostream>
using namespace std;
int array[100],n,i,j;
void selectionsort ()
{
for(i=0;i<n-1;i++)
{
int min=i;
for(j=i+1;j<n;j++)
{
if(array[j]<array[min])
{
min=j;
}
}
int temp=array[min];
array[min]=array[i];
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
cout<<"enter size of an array =";
cin>>n;
cout<<"enter array elements are = ";
for(i=0;i<n;i++)
{

cin>>array[i];
}
selectionsort();
cout<<"sorted elements are = ";
print();
cout<<endl;
return 0;
}