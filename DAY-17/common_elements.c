#include <stdio.h>
int main() {
    int n1, n2, i, j;
    printf("Enter size of array 1");
    scanf("%d", &n1);
    int arr1[n1];
    printf("elements of array 1:\n");
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter size of array 2 ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("elements of array 2:\n");
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    printf("Common elements are: ");
    for(i = 0; i < n1; i++) {
        for(j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }
    return 0;
}