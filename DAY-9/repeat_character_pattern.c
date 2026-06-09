#include <stdio.h>
int main() {
    int r,i, j;
    printf("Enter rows: ");
    scanf("%d", &r);
    for(i = 1; i <=r; i++) {
        for(j = 1; j <= i; j++) {
            printf("%c",'A'+ i-1);
        }
        printf("\n");
    }
    return 0;
}