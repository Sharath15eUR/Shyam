#include<stdio.h>
 
int main() {
   int arr[20], i, n;
 
   scanf("%d", &n); /* Accepts the number of elements in the array */

  for (i = 0; i < n; i++) 
     scanf("%d", &arr[i]);
int srr[20];
for(int i=0;i<n;i++)
  srr[i]=arr[i];

for(int i=0;i<n;i++){
  
  arr[i]=srr[n-1-i];
}
