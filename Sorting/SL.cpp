//sort an array using selection sort then apply linearsearch.
#include<iostream>
using namespace std;
int array[10],n,i,j;
void selectionsort()
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
swap(array[min],array[i]);
}
}
void linearsearch()
{
int key;
cout<<"\nenter key to search = ";
cin>>key;
for(i=0;i<n;i++)
{
if(key==array[i])
{
cout<<"element found at"<< i+1;
break;
}
}
if(key!=array[i])
{
cout<<"not found.\n";
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
cout<<"after using selection sort = ";
for(i=0;i<n;i++)
{
cout<<array[i]<<" ";
}
linearsearch();
return 0;
}