#include<stdio.h>
int HCF(int a, int b){
    int r = a%b;
    if(r==0){
        return b;
    }
    else{
        return HCF(b,r);
    }

}
	 
int main()
{
printf("hello people");
int x = HCF(16,12);
printf("x : %d",x);
}
