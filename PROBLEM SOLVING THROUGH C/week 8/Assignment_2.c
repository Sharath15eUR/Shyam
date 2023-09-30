/*Write a C Program to find power of a given number using recursion. The number and the power to be calculated is taken from test case*/
#include <stdio.h>

int power(int a, int b){
    if(b==0){
        return 1;
    }
    else{
        return a*power(a,b-1);
    }
}
int main()
{
int pow, num;
long result;
scanf("%d", &num);
scanf("%d", &pow); 
result = power(num, pow);
printf("%d^%d is %ld", num, pow, result);
return 0;
}