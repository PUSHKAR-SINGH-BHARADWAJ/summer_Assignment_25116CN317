#include <stdio.h>

int main() {
    int n, temp, dig, sum=0, fact, i;
    printf("Enter the value of n ");
    scanf("%d", &n);
    temp = n;
    while(temp>0) {
        dig=temp%10;
        fact=1;
        for(i = 1; i <= dig;i++) {
            fact *= i;
        }sum += fact;
        temp /= 10;
    }if(sum == n)
        printf("%d is a Strong Number", n);
    else
        printf("%d is not a Strong Number", n);
    return 0;
}