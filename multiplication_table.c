#include<stdio.h>
int main(){
    int n,m,i;
    printf("enter value of n");
    scanf("%d",&n);
    for( i=1;i<=10;i++){
        m=n*i;
        printf("%d*%d=%d\n",n,i,m);
    }
    
    return 0;
}