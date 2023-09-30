/*Write a C program to search a given element from a 1D array and
 display the position at which it is found by using linear search function. 
 The index location starts from 1.*/

 #include <stdio.h>
int linear_search(int a[], int n, int ele){
    for(int i=o;i<n;i++){
        if(a[i]==ele){
            return i+1;
        }
    }
    return -1;
}
int main()
{
   int array[100], search, c, n, position;
    scanf("%d", &n); 

    for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

    scanf("%d", &search);  

position = linear_search(array, n, search);

   if (position == -1)
      printf("%d is not present in the array.", search);
   else
      printf("%d is present at location %d.", search, position+1);
   return 0;
}