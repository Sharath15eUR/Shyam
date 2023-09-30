/*Write a C program to reverse an array by swapping the elements and without using any new array.*/
#include <stdio.h>
int main() {
  int array[100], n, c,temp;
  scanf("%d", &n); // n is number of elements in the array.
  for (c = 0; c < n; c++) {
    scanf("%d", &array[c]);
  }
  for(int i=0;i<n/2;i++){
    temp =array[i];
    array[i]=array[n-i];
    array[n-i]=temp;
  }
  for(int j=0;j<n;j++){
    printf("%d ",array[j]);
  }
}