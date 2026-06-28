#include <stdio.h>
#include <string.h>
struct Contact {
    char name[50];
    char phone[15];
    char email[50];
    int saved;   // 1 = Contact exists, 0 = Deleted
};
int main() {
    struct Contact c;
    int choice;
    char searchName[50];
    c.saved = 0;
    do {
        printf("\n===== CONTACT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contact\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Enter Name: ");
                scanf(" %[^\n]", c.name);
                printf("Enter Phone Number: ");
                scanf("%s", c.phone);
                printf("Enter Email: ");
                scanf("%s", c.email);
                c.saved = 1;
                printf("Contact added successfully!\n");
                break;
            case 2:
                if(c.saved == 1) {
                    printf("\n----- CONTACT DETAILS -----\n");
                    printf("Name  : %s\n", c.name);
                    printf("Phone : %s\n", c.phone);
                    printf("Email : %s\n", c.email);
                } else {
                    printf("No contact found.\n");
                }
                break;
            case 3:
                if(c.saved == 1) {
                    printf("Enter Name to Search: ");
                    scanf(" %[^\n]", searchName);
                    if(strcmp(c.name, searchName) == 0) {
                        printf("\nContact Found!\n");
                        printf("Name  : %s\n", c.name);
                        printf("Phone : %s\n", c.phone);
                        printf("Email : %s\n", c.email);
                    } else {
                        printf("Contact not found.\n");
                    }
                } else {
                    printf("No contact saved.\n");
                }
                break;
            case 4:
                if(c.saved == 1) {
                    c.saved = 0;
                    printf("Contact deleted successfully.\n");
                } else {
                    printf("No contact to delete.\n");
                }
                break;
            case 5:
                printf("Thank you for using the Contact Management System.\n");
                break;

            default:
                printf("Invalid choice!\n");
        }
    } while(choice != 5);
   return 0;
}