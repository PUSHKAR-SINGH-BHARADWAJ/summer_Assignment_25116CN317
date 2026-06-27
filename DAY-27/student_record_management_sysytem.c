#include <stdio.h>
struct Student {
    int roll;
    char name[50];
    float marks;
};
int main() {
    struct Student s[100];
    int n = 0;
    int choice, i, roll, found;
    while (1) {
        printf("\n===== Student Record Management System =====\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            printf("\nEnter Roll Number: ");
            scanf("%d", &s[n].roll);
            printf("Enter Name: ");
            scanf("%s", s[n].name);
            printf("Enter Marks: ");
            scanf("%f", &s[n].marks);
            n++;
            printf("Student Record Added Successfully!\n");
            break;
        case 2:
            if (n == 0) {
                printf("\nNo Records Found!\n");
            } else {
                printf("\nStudent Records:\n");
                printf("---------------------------------\n");
                printf("Roll\tName\tMarks\n");
                printf("---------------------------------\n");
                for (i = 0; i < n; i++) {
                    printf("%d\t%s\t%.2f\n", s[i].roll, s[i].name, s[i].marks);
                }
            }
            break;
        case 3:
            printf("\nEnter Roll Number to Search: ");
            scanf("%d", &roll);
            found = 0;
            for (i = 0; i < n; i++) {
                if (s[i].roll == roll) {
                    printf("\nRecord Found!\n");
                    printf("Roll Number: %d\n", s[i].roll);
                    printf("Name: %s\n", s[i].name);
                    printf("Marks: %.2f\n", s[i].marks);
                    found = 1;
                    break;
                }
            }
            if (!found)
                printf("Record Not Found!\n");
            break;
        case 4:
            printf("\nEnter Roll Number to Delete: ");
            scanf("%d", &roll);
            found = 0;
            for (i = 0; i < n; i++) {
                if (s[i].roll == roll) {
                    found = 1;
                    break;
                }
            }
            if (found) {
                for (; i < n - 1; i++) {
                    s[i] = s[i + 1];
                }
                n--;
                printf("Record Deleted Successfully!\n");
            } else {
                printf("Record Not Found!\n");
            }
            break;
        case 5:
            printf("Exiting Program...\n");
            return 0;
        default:
            printf("Invalid Choice! Please Try Again.\n");
        }
    }
   return 0;
}