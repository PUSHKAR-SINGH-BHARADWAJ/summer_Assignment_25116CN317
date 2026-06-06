#include <stdio.h>
int main() {
    int x, n, result = 1;
    printf("Enter base and exponent: ");
     scanf("%d%d", &x, &n);
    while (n > 0)
     {result = result * x;
        n--;
    }
    printf("Result = %d", result);
    return 0;
}