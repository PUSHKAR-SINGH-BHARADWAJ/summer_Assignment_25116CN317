#include <stdio.h>
int main(){
    int n, i;
    int empId[50];
    char empName[50][30];
    float salary[50];
    printf("Enter number of employees: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("Enter Employee ID: ");
        scanf("%d", &empId[i]);
        printf("Enter Employee Name: ");
        scanf(" %[^\n]", empName[i]);
        printf("Enter Salary: ");
        scanf("%f", &salary[i]);}
    printf("\n------ Employee Records ------\n");
    printf("%-10s %-25s %-10s\n", "Emp ID", "Employee Name", "Salary");
    for(i = 0; i < n; i++) {
printf("%-10d %-25s %.2f\n", empId[i], empName[i], salary[i]);
    }
   return 0;
}