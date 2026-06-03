#include<stdio.h>
#include <stdio.h>
int main() {
    int a,b,m;
    printf("Enter the value of a and b");
    scanf("%d %d", &a, &b);
    m=(a>b)?a:b;
    while(1){
        if(m%a==0 && m%b==0) {
            printf("LCM = %d",m);
            break;
        }
        m++;
    }
    return 0;
}