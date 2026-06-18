#include <stdio.h>
int main() {
    int n, target, start, end, mid;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter sorted elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter target: ");
    scanf("%d", &target);
    start = 0;
    end = n - 1;
    while (start <= end) {
        mid = (start + end) / 2;
        if (arr[mid] == target) {
            printf(" %d\n", mid);
            return 0;
        }
        else if (arr[mid] < target) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    printf("Element not found\n");
   return 0;
}