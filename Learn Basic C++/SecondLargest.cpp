#include<iostream>
using namespace std;
int main() {
int array[100], n, i;
int max1, max2;
cout << "Enter size of an array = ";
cin >> n;
cout << "Enter array elements = ";
for(i = 0; i < n; i++) {
cin >> array[i];
}
if(array[0] > array[1]) {
max1 = array[0];
max2 = array[1];
} else {
max1 = array[1];
max2 = array[0];
}
for(i = 2; i < n; i++) {
if(array[i] > max1) {
max2 = max1;
max1 = array[i];
} else if(array[i] > max2 && array[i] != max1) {
max2 = array[i];
}
}
cout << "The 2nd maximum number of the array is " << max2 << endl;
return 0;

}