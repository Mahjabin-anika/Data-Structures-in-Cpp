//Sort an array in ascending order using insertion sort algorithm.
#include<iostream>
using namespace std;
int array[5]={9,4,5,1,2},n=5,i,j;
void insertionsort()
{
for(i=1;i<n;i++)
{
int key=array[i];
int j=i-1;
while(key<array[j] && j>=0)
{
array[j+1]=array [j];
j--;

}
array[j+1]=key;
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
cout<<"before sorting array elements are = ";
print();
insertionsort();
cout<<"\nAfter sorting array elements are = ";
print();
cout<<endl;
return 0;
}