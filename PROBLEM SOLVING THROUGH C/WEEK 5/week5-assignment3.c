#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N); 
int c=N,flag=0;
while(N>1){
  if(N%2!=0){
    flag=1;
    break;}
  
    N=N/2;
}
if(!flag){
  printf("%d is a number that can be expressed as power of 2.",c);
}
else{
  printf("%d cannot be expressed as power of 2.",c);
}}
