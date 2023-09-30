/*Write a C Program to reverse a given word using function. e.g. INDIA should be printed as AIDNI*/
#include<stdio.h>
void reverse(char a[], int s, int size){
    char temp;
    for (int i=s;i<=size/2;i++){
        temp =a[i];
        a[i]= a[size-i];
        a[size -i]=temp;
    }

}
    int main()
    {
       
        //scanf("%s", str1);
        char str1 [10] = "shyamr";

        int size;
	    size = 6;
        reverse(str1, 0, size - 1);
        printf("The string after reversing is: %s", str1);  
        return 0;
    }
    