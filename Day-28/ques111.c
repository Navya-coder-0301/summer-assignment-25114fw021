//ticket booking system
#include <stdio.h>

int main()
{
    int totalSeats = 50;
    int booked = 0;
    int choice, seats;

    do
    {
        printf("\n===== TICKET BOOKING SYSTEM =====\n");
        printf("1. Book Tickets\n");
        printf("2. View Available Seats\n");
        printf("3. Cancel Tickets\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Number of Tickets: ");
            scanf("%d", &seats);

            if (booked + seats <= totalSeats)
            {
                booked += seats;
                printf("%d Ticket(s) Booked Successfully!\n", seats);
            }
            else
            {
                printf("Not Enough Seats Available!\n");
            }
            break;

        case 2:
            printf("Available Seats = %d\n", totalSeats - booked);
            break;

        case 3:
            printf("Enter Number of Tickets to Cancel: ");
            scanf("%d", &seats);

            if (seats <= booked)
            {
                booked -= seats;
                printf("Ticket Cancellation Successful!\n");
            }
            else
            {
                printf("Invalid Number of Tickets!\n");
            }
            break;

        case 4:
            printf("Exiting System...\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 4);

    return 0;
}