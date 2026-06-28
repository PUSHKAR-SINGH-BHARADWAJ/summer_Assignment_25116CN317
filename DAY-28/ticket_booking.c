#include <stdio.h>
struct Ticket {
    int ticketNo;
    char name[50];
    int seats;
    float fare;
    int booked; // 1 = Booked, 0 = Cancelled
};
int main() {
    struct Ticket t;
    int choice;
    t.booked = 0;
    do {
        printf("\n===== TICKET BOOKING SYSTEM =====\n");
        printf("1. Book Ticket\n");
        printf("2. View Ticket\n");
        printf("3. Cancel Ticket\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                if(t.booked == 1) {
                    printf("Ticket is already booked!\n");
                } else {
                    printf("Enter Ticket Number: ");
                    scanf("%d", &t.ticketNo);
                    printf("Enter Passenger Name: ");
                    scanf(" %[^\n]", t.name);
                    printf("Enter Number of Seats: ");
                    scanf("%d", &t.seats);
                    printf("Enter Total Fare: ");
                    scanf("%f", &t.fare);
                    t.booked = 1;
                    printf("Ticket booked successfully!\n");
                }
                break;
            case 2:
                if(t.booked == 1) {
                    printf("\n----- TICKET DETAILS -----\n");
                    printf("Ticket Number : %d\n", t.ticketNo);
                    printf("Passenger Name: %s\n", t.name);
                    printf("Seats         : %d\n", t.seats);
                    printf("Fare          : %.2f\n", t.fare);
                } else {
                    printf("No ticket booked.\n");
                }
                break;
            case 3:
                if(t.booked == 1) {
                    t.booked = 0;
                    printf("Ticket cancelled successfully.\n");
                } else {
                    printf("No ticket to cancel.\n");
                }
                break;
            case 4:
                printf("Thank you for using the Ticket Booking System.\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while(choice != 4);
   return 0;
}