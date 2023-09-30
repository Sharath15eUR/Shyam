int main()
{
    int N; 
    scanf("%d",&N); 
int c =N , count=0;
while(c>0){
  
  count++;
  c= c/10;
}
printf("The number %d contains %d digits.",N,count);
}
