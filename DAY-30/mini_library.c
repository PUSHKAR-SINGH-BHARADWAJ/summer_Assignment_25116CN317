#include <stdio.h>
#include <string.h>
int main() {
    int n, i;
    char bookName[50][50];
    char author[50][50];
    printf("Enter the number of books: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("\nBook %d\n", i + 1);
        printf("Enter Book Name: ");
        scanf(" %[^\n]", bookName[i]);
        printf("Enter Author Name: ");
        scanf(" %[^\n]", author[i]);
    }
    printf("\n------ Library Records ------\n");
    printf("%-5s %-30s %-30s\n", "No.", "Book Name", "Author");
    for(i = 0; i < n; i++) {
        printf("%-5d %-30s %-30s\n", i + 1, bookName[i], author[i]);
    }
return 0;
}