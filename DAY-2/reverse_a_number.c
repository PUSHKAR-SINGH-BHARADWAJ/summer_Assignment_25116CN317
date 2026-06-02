
#include<stdio.h>
int main(){
    int n,rev=0;
    printf("enter the value of n");
    scanf("%d",&n);
     while(n) {
     rev = rev * 10 + n % 10;
      n /= 10;
     }
     printf("%d",rev);
     return 0;
}