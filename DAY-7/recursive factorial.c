#include <stdio.h>
int fact(int n)
 {static int f = 1;
    if (n>1)
    {
        f=f*n;
        fact(n - 1);
    }
    return f;
}
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    printf("Factorial = %d", fact(n));
    return 0;
}