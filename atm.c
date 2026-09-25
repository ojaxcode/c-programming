#include <stdio.h>

int main()
{
    int pin, acc_num;
    float c_bal;
    int choice;
    int dep, wit, currentbalance, entered_pin;

    printf("Set your pin\n");
    scanf("%d", &pin);

    printf("Enter account number\n");
    scanf("%d", &acc_num);

    printf("Enter current balance\n");
    scanf("%f", &c_bal);

    while (1)
    {
        printf("\n1. Deposit, 2. Check balance, 3. Withdraw, 4. Exit\n");
        printf("Enter your choice\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter your pin\n");
            scanf("%d", &entered_pin);

            if (entered_pin == pin)
            {
                printf("Enter deposit amount\n");
                scanf("%d", &dep);

                c_bal = c_bal + dep;

                printf("Amount successfully deposited\n");
                printf("Current balance: %.2f\n", c_bal);
            }
            else
            {
                printf("Invalid pin\n");
            }
            break;

        case 2:
            printf("Enter your pin\n");
            scanf("%d", &entered_pin);

            if (entered_pin == pin)
            {
                printf("Current balance is %.2f\n", c_bal);
            }
            else
            {
                printf("Invalid pin\n");
            }
            break;

        case 3:
            printf("Enter your pin\n");
            scanf("%d", &entered_pin);

            if (entered_pin == pin)
            {
                printf("Enter withdrawal amount:\n");
                scanf("%d", &wit);

                if (c_bal >= wit)
                {
                    c_bal = c_bal - wit;

                    printf("Amount successfully withdrawn\n");
                    printf("Current balance is %.2f\n", c_bal);
                }
                else
                {
                    printf("Insufficient balance\n");
                }
            }
            else
            {
                printf("Invalid pin\n");
            }
            break;

        case 4:
            printf("Thank you for using the ATM\n");
            return 0;

        default:
            printf("Invalid choice\n");
        }
    }

    return 0;
}