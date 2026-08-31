//Sort an array in ascending order using Bubble sort algorithm. [with function]
#include<iostream>
using namespace std;
int array[5]={9,4,7,1,5},n=5,i,j;
void bubbleSort()
{
for(i=0;i<n-1;i++)
{
int swaped=0;
for(j=0;j<n-i-1;j++)
{
if(array[j]>array[j+1])
{
int temp=array[j];
array[j]=array[j+1];
array[j+1]=temp;
swaped=1;
}
}
if(swaped==0)
{
break;
}
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
cout<<"before sorting array elements are="<<endl;
print();
bubbleSort();
cout<<"\nafter sorting array elements are="<<endl;
print();
cout<<endl;
return 0;
}

