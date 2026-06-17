#include <stdio.h>
int main() {
    int n1, n2, i, j, found;
    printf("Enter size array 1 ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("elements of array 1:\n");
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter size of second array 2 ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("elements of array 2:\n");
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    int unionArr[n1 + n2];
    int k = 0;
    for(i = 0; i < n1; i++) {
        unionArr[k++] = arr1[i];
    }
    for(i = 0; i < n2; i++) {
        found = 0;
        for(j = 0; j < k; j++) {
            if(arr2[i] == unionArr[j]) {
                found = 1;
                break;
            }
        }
        if(!found) {
            unionArr[k++] = arr2[i];
        }
    }
    printf("Union of arrays: ");
    for(i = 0; i < k; i++) {
        printf("%d ", unionArr[i]);
    }
    return 0;
}