/*Write a C program to search a given number from a sorted 1D array and display the position at which it is found using binary search algorithm.
 The index location starts from 1.*/
 #include <stdio.h>

void binary_search(int a[],int s, int n, int ele){
    mid=(s+n)/2
    if(a[mid]==ele){
        return mid;
    }
    else if(mid > n || mid <s){
        return -1;
    }
    else{
        if(ele >a[mid]){
            return binary_search(int a[],int mid+1,int n,int ele);
        }
        else{
            return binary_search(int a[],int s,int mid,int ele);
        }
    }
}
int main()
{
 int c, n, search,ind;
 array[100];
 scanf("%d",&n); 
for (c = 0; c < n; c++)
  scanf("%d",&array[c]);
scanf("%d", &search);
ind= binary_search(array,0,n,search);
if(ind ==-1){
printf("Not found! %d isn't present in the list.",search);
}
else{
 printf("%d found at location %d.",search,ind);
}

}