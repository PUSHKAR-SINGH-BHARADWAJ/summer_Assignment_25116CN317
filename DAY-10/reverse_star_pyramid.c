#include <stdio.h>
int main() {
    int r,i,j,k;
    printf("enter the rows");
    scanf("%d",&r);
    for(i = r; i >= 1;i--){
        for( j = 1; j <= r- i; j++) {
            printf(" ");
        }
        for( k = 1; k <= (2 *i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}