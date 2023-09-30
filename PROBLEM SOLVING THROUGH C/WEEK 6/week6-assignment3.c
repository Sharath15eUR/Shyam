int main() 
{
   int arr1[20], arr2[20], array_new[40], n1, n2, size, i;
 
 
   scanf("%d", &n1); 
   
   for (i = 0; i < n1; i++)
      scanf("%d", &arr1[i]); 
   scanf("%d", &n2); 
   for (i = 0; i < n2; i++)
      scanf("%d", &arr2[i]);
int count;
for(int j =0; j<n1;j++)
  array_new[j] = arr1[j];

for(int k=0; k<n2;k++){
  count=k+n1;
  array_new[count]= arr2[k];
}
size = count+1;
for (i = 0; i < size; i++) {
      printf("%d\n", array_new[i]);
   }

}
