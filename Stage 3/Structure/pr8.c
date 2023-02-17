/* Creat a struture representing a back account
of a customer. What fields did you use and why? */

#include <stdio.h>

struct BankAccount
{
    char name[50];
    int account_no;
    int IFSC_code;
    float balance;
    int year_opened;
};

int main()
{
    struct BankAccount n1, n2;

    printf("Enter your bank details: \n");
    printf("Enter your name: ");
    fgets(n1.name, 50, stdin);
    printf("Enter your account no: ");
    scanf("%d", &n1.account_no);
    printf("Enter your Ifsc code: ");
    scanf("%d", &n1.IFSC_code);
    printf("Enter your balance: ");
    scanf("%f", &n1.balance);
    printf("Enter your account opened date: ");
    scanf("%d", &n1.year_opened);

    printf("Name = %s\n", n1.name);
    printf("Account no = %d\n", n1.account_no);
    printf("IFSC code = %d\n", n1.IFSC_code);
    printf("Balance = %.2f\n", n1.balance);
    printf("Opened Year = %d\n", n1.year_opened);

    return 0;
}