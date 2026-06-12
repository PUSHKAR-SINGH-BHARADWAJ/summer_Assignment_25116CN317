#include <stdio.h>
#include <math.h>
int isArmstrong(int num)
{
    int original, remainder, digits = 0;
    int sum = 0;
    original = num;
    while (original != 0)
    {
        digits++;
        original /= 10;
    }
    original = num;
    while (original != 0)
    {
        remainder = original % 10;
        sum += pow(remainder, digits);
        original /= 10;
    }
    return (sum == num);
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    return 0;
}