#include<stdio.h>
 
int main() 
{
   int array[50], i, size;
 
   scanf("%d", &size); 
   for (i = 0; i < size; i++)
   scanf("%d", &array[i]);
int j =0,k;
while(j<size){
  k=j+1;
  while(k<size){
    if(array[k]==array[j]){
       for(int i=k; i<size-1;i++)
    		array[i]=array[i+1];
      
    size--;}
    k++;
  }
  j++;
}
for (i = 0; i < size; i++) {
      printf("%d\n", array[i]);
   }

}
