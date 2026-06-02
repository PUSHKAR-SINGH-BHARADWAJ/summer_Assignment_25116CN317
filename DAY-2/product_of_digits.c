#include<stdio.h>
int main(){
    int n,prd=1;
    printf("enter the value of n");
    scanf("%d",&n);
    while(n){
        prd*=n%10;
       n= n/10;
    }
    printf("%d",prd);
    return 0;
}