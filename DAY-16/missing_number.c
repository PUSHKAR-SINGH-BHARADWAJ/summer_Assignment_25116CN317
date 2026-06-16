#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter size of array ");
    scanf("%d", &n);
    int arr[n - 1];
    printf("Enter %d elements:\n", n - 1);
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    int totalSum = n * (n + 1) / 2;
    int missing = totalSum - sum;
    printf("Missing number = %d\n", missing);
    return 0;
}