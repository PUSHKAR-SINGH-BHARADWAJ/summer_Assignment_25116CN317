#include <stdio.h>

int main() {
    int arr[7],i;
    printf("Enter 7 elements:\n");
    for(i = 0; i < 7; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Array elements are:\n");
    for(i = 0; i < 7; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}