int main()
{
    int N; 
    scanf("%d",&N);
int count=0, arr[N/2];

for(int i=1;i<=N/2;i++){
  if(N%i==0){
     count+=i;
  }
}
if(count==N){
  printf("%d is a perfect number." ,N);
}
else{
  printf("%d is not a perfect number.",N);
}
    
}
