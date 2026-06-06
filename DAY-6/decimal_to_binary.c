#include <stdio.h>
int main() {
    int d, b[32], i = 0;
    printf("Enter a decimal digit");
    scanf("%d", &d);
    if (d== 0)
     {printf("Binary equivalent:0\n");
        return 0;
    }
while (d> 0) {
        b[i] = d%2;
        d= d/ 2;
        i++;
    }printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", b[j]);
}
    printf("\n");
    return 0;
}