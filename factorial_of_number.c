#include<stdio.h>
int main(){
    int n,i,fact=1;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        fact*=i;
    }
    printf("%d",fact);
    return 0;
}