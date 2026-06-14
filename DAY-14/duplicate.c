#include <stdio.h>
int main() {
    int n, i, j;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Duplicate elements are: ");
    for(i = 0; i < n; i++) {
        int isDuplicate = 0;
        for(j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if(isDuplicate)
            continue;
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break;
            }
        }
    }
    return 0;
}