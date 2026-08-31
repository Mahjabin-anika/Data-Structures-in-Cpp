//merge sort.
#include <iostream>
using namespace std;
int a[50], b[50];
void merge(int l, int mid, int h)
{
int i = l, j = mid + 1, k = l;
while (i <= mid && j <= h)
{
if (a[i] <= a[j])
{
b[k] = a[i];
i++;
}
else
{
b[k] = a[j];
j++;
}
k++;
}
while (i <= mid)
{
b[k] = a[i];
i++;
k++;
}
while (j <= h)
{
b[k] = a[j];

j++;
k++;
}
for (i = l; i <= h; i++)
{
a[i] = b[i];
}
}
void mergesort(int l, int h)
{
if (l < h)
{
int mid = (l + h) / 2;
mergesort(l, mid);
mergesort(mid + 1, h);
merge(l, mid, h);
}
}
int main()
{
int n;
cout << "Enter number of elements: ";
cin >> n;
cout << "Enter " << n << " elements: ";
for (int i = 0; i < n; i++)
cin >> a[i];
mergesort(0, n - 1);
cout << "Sorted array: ";
for (int i = 0; i < n; i++)
cout << a[i] << " ";
return 0;

}