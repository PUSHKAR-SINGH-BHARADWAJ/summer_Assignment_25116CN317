#include <stdio.h>
int main() {
    int n,i,target,found=0;
    printf("Enter size of array ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
printf("Array elements are: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &target);
    for(i = 0; i < n; i++) {
        if(arr[i] == target) {
            found = 1;
            printf("Element found at position %d\n", i + 1);
            break;
        }
    }
    if(found== 0) {
        printf("Element not found\n");
    }
    return 0;
}