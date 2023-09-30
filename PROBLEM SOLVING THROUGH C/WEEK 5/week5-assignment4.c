#include<stdio.h>
int main()
{
int N;
float sum = 0.0;
scanf("%d",&N);
for(float i=1;i<=N;i++){
  sum+= (1/i);
}
printf("Sum of the series is: %0.2f",sum);
}
