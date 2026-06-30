#include <stdio.h>
#define MAX 50
void addStudents(int roll[], char name[][30], float marks[], int n);
void displayStudents(int roll[], char name[][30], float marks[], int n);
void searchStudent(int roll[], char name[][30], float marks[], int n);
int main() {
    int roll[MAX], n;
    char name[MAX][30];
    float marks[MAX];
    printf("Enter number of students: ");
    scanf("%d", &n);
    addStudents(roll, name, marks, n);
    displayStudents(roll, name, marks, n);
    searchStudent(roll, name, marks, n);
    return 0;
}
void addStudents(int roll[], char name[][30], float marks[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Enter Roll Number: ");
        scanf("%d", &roll[i]);
        printf("Enter Name: ");
        scanf(" %[^\n]", name[i]);
        printf("Enter Marks: ");
        scanf("%f", &marks[i]);
    }
}
void displayStudents(int roll[], char name[][30], float marks[], int n) {
    int i;
    printf("\n----- Student Records -----\n");
    printf("Roll No\tName\t\tMarks\n");
    for(i = 0; i < n; i++) {
        printf("%d\t%-15s%.2f\n", roll[i], name[i], marks[i]);
    }
}
void searchStudent(int roll[], char name[][30], float marks[], int n) {
    int i, key, found = 0;
    printf("\nEnter Roll Number to Search: ");
    scanf("%d", &key);
    for(i = 0; i < n; i++) {
        if(roll[i] == key) {
            printf("\nStudent Found!\n");
            printf("Roll Number : %d\n", roll[i]);
            printf("Name        : %s\n", name[i]);
            printf("Marks       : %.2f\n", marks[i]);
            found = 1;
            break;
        }}
    if(found == 0)printf("Student not found.\n");
}