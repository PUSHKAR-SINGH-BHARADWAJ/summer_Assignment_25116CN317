#include <stdio.h>
int main() {
    int n,i;
    printf("enter the value of n");
    scanf("%d",&n);
    for (i = 2; i < n; i++) {
        if (n% i ==0)
        break;
    }
    if (n>1&&i==n)
        printf("Prime");
    else
        printf("Not Prime");
    return 0;
}