#include <stdio.h>
#include <limits.h>
int main() {
int n, i;
printf("Enter size of array: ");
scanf("%d", &n);
int arr[n];
printf("Enter %d elements:\n", n);
for(i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
int min1 = INT_MAX, min2 = INT_MAX;
for(i = 0; i < n; i++) {
if(arr[i] < min1) {
min2 = min1;
min1 = arr[i];

}
else if(arr[i] > min1 && arr[i] < min2) {
min2 = arr[i];
}
}
if(min2 == INT_MAX)
printf("No second minimum (all elements are equal)\n");
else
printf("Second minimum = %d\n", min2);
return 0;
}