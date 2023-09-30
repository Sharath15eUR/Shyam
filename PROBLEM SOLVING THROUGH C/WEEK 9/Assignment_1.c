/*Write a program to print all the locations at which a particular element (taken as input) is found in a list and also print the total number of times it occurs in the list. The location starts from 1.

For example if there are 4 elements in the array

5

6

5

7

If the element to search is 5 then the output will be

5 is present at location 1

5 is present at location 3

5 is present 2 times in the array.*/

#include <stdio.h>
int main()
{
   int array[100], search, n, count = 0;


 scanf("%d", &n); 

 int c,flag=0;
   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);

   scanf("%d", &search);

for(int i=0;i<n;i++){
    if(array[i]==search){
        flag+=1;
        printf("%d is present at location %d",search,i);
    }
}
if(flag){
    printf("%d is present %d times in the array.",search,flag);
}
else{
    printf("%d is not present in the array.",search)
}
}