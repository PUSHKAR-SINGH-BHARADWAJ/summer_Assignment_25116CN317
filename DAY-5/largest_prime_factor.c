#include <stdio.h>

int main() {
    int n, i, j, largestPrime = 0, isPrime;
    printf("Enter the desired number ");
    scanf("%d", &n);
    for(i = 2; i <= n; i++) 
    {if(n % i == 0) {   // i is a factor
            isPrime = 1;
            for(j = 2; j <= i / 2; j++) {
                if(i % j == 0) {
                    isPrime = 0;
                    break;
                }}
            if(isPrime) {
       largestPrime = i;
            }
        }
    }
    printf("Largest Prime Factor = %d\n", largestPrime);
    return 0;
}