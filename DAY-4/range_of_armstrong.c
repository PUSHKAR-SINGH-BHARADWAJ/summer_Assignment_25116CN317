#include <stdio.h>

int main() {
    int start, end, n, temp, rem, sum;
printf("enter the start and end of the series");
    scanf("%d%d", &start, &end);
    for (n = start; n <= end; n++) {
        temp = n;
        sum = 0;
while (temp > 0) {
            rem = temp % 10;
            sum += rem * rem * rem;
            temp /= 10;
        }
        if (sum == n)printf("%d ", n);
    }
    return 0;
}