#include <stdio.h>
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int maxFreq = 0, element;
    for (int i = 0; i < n; i++) {
        int freq = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                freq++;
            }
        }
        if (freq > maxFreq) {
            maxFreq = freq;
            element = arr[i];
        }
    }
    printf("Maximum frequency element = %d\n", element);
    printf("Frequency = %d\n", maxFreq);
    return 0;
}