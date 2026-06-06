#include <stdio.h>
#include <math.h>
int main() {
    long long b;
    int d= 0,rem,i =0;
    printf("Enter a binary number: ");
    scanf("%lld", &b);
    while (b != 0) 
   { rem = b % 10;
        d += rem* pow(2, i);
        b/= 10;
        i++;
    } printf("Decimal equivalent = %d\n", d);
    return 0;
}