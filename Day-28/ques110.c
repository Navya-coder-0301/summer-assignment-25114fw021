//bank account system
#include <stdio.h>

int main()
{
    int choice;
    float balance = 0, amount;

    do
    {
        printf("\n===== BANK ACCOUNT SYSTEM =====\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Amount to Deposit: ");
            scanf("%f", &amount);

            balance += amount;
            printf("Amount Deposited Successfully!\n");
            break;

        case 2:
            printf("Enter Amount to Withdraw: ");
            scanf("%f", &amount);

            if (amount <= balance)
            {
                balance -= amount;
                printf("Withdrawal Successful!\n");
            }
            else
            {
                printf("Insufficient Balance!\n");
            }
            break;

        case 3:
            printf("Current Balance = %.2f\n", balance);
            break;

        case 4:
            printf("Thank You for Using Our Bank System.\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 4);

    return 0;
}