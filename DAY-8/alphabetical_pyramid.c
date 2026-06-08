#include <stdio.h>
int main() {
    int r, i, j;
    printf("Enter rows: ");
    scanf("%d", &r);
    for(i = 1; i <= r; i++) {
        for(j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }
    return 0;
}