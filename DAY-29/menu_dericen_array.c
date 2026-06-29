#include <stdio.h>
int main() {
    int arr[100], n = 0, choice, i, key;
    int max, min, sum;
    do {
        printf("\n===== MENU-DRIVEN ARRAY OPERATIONS =====\n");
        printf("1. Insert Elements\n");
        printf("2. Display Array\n");
        printf("3. Search Element\n");
        printf("4. Find Maximum\n");
        printf("5. Find Minimum\n");
        printf("6. Find Sum\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            printf("Enter number of elements: ");
            scanf("%d", &n);
            printf("Enter %d elements:\n", n);
            for (i = 0; i < n; i++) {
                scanf("%d", &arr[i]);
            }
            break;
        case 2:
            if (n == 0) {
                printf("Array is empty.\n");
            } else {
                printf("Array elements are: ");
                for (i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
            }
            break;
        case 3:
            if (n == 0) {
                printf("Array is empty.\n");
                break;
            }
            printf("Enter element to search: ");
            scanf("%d", &key);
            for (i = 0; i < n; i++) {
                if (arr[i] == key) {
                    printf("Element found at position %d\n", i + 1);
                    break;
                }
            }
            if (i == n)
                printf("Element not found.\n");
            break;
        case 4:
            if (n == 0) {
                printf("Array is empty.\n");
                break;
            }
            max = arr[0];
            for (i = 1; i < n; i++) {
                if (arr[i] > max)
                    max = arr[i];
            }
            printf("Maximum element = %d\n", max);
            break;
        case 5:
            if (n == 0) {
                printf("Array is empty.\n");
                break;
            }
            min = arr[0];
            for (i = 1; i < n; i++) {
                if (arr[i] < min)
                    min = arr[i];
            }
            printf("Minimum element = %d\n", min);
            break;
        case 6:
            if (n == 0) {
                printf("Array is empty.\n");
                break;
            }
            sum = 0;
            for (i = 0; i < n; i++) {
                sum += arr[i];
            }
            printf("Sum of elements = %d\n", sum);
            break;
        case 7:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice!\n");
        }
    } while (choice != 7);
   return 0;
}