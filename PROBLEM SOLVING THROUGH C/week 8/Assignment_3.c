/*Write a C Program to print Binary Equivalent of an Integer using Recursion*/
#include <stdio.h>
int binary_conversion(int a){
    if(a<=0){
        return a;
    }
    else{
        return ((binary_conversion(a/2)*10 )+(a%2));
    }
} 
int main()
  {
  int num, bin; 
  //scanf("%d", &num); 
  bin = binary_conversion(100); 
  printf("The binary equivalent of 100 is %d\n", bin);
  return 0;
  }