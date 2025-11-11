#include <stdio.h>
#include <string.h>

#define MAX_CUSTOMERS 10

// Structure to store customer data
struct BankCustomer {
    int accountNumber;
    char name[50];
    float balance;
};

// Function prototypes
void printLowBalance(struct BankCustomer customers[], int n);
void transaction(struct BankCustomer customers[], int n, int accNo, float amount, int code);

int main() {
    struct BankCustomer customers[MAX_CUSTOMERS];
    int n, i;
    int accNo, code;
    float amount;

    printf("Enter number of customers (max 10): ");
    scanf("%d", &n);

    // Input customer details
    for (i = 0; i < n; i++) {
        printf("\nEnter details for customer %d:\n", i + 1);
        printf("Account Number: ");
        scanf("%d", &customers[i].accountNumber);
        printf("Name: ");
        scanf("%s", customers[i].name);
        printf("Balance: ");
        scanf("%f", &customers[i].balance);
    }

    // Print customers having balance below 100
    printLowBalance(customers, n);

    // Transaction (deposit or withdrawal)
    printf("\nEnter transaction details:\n");
    printf("Account Number: ");
    scanf("%d", &accNo);
    printf("Amount: ");
    scanf("%f", &amount);
    printf("Enter code (1 for deposit, 0 for withdrawal): ");
    scanf("%d", &code);

    transaction(customers, n, accNo, amount, code);

    return 0;
}

// Function to print customers with balance below Rs. 100
void printLowBalance(struct BankCustomer customers[], int n) {
    int i;
    printf("\nCustomers with balance below Rs. 100:\n");
    for (i = 0; i < n; i++) {
        if (customers[i].balance < 100)
            printf("Account Number: %d, Name: %s, Balance: %.2f\n",
                   customers[i].accountNumber, customers[i].name, customers[i].balance);
    }
}

// Function to handle deposit or withdrawal
void transaction(struct BankCustomer customers[], int n, int accNo, float amount, int code) {
    int i, found = 0;

    for (i = 0; i < n; i++) {
        if (customers[i].accountNumber == accNo) {
            found = 1;
            if (code == 1) {
                customers[i].balance += amount;
                printf("Amount deposited successfully. New balance: %.2f\n", customers[i].balance);
            } else if (code == 0) {
                if (customers[i].balance < amount)
                    printf("The balance is insufficient for the specified withdrawal.\n");
                else {
                    customers[i].balance -= amount;
                    printf("Amount withdrawn successfully. New balance: %.2f\n", customers[i].balance);
                }
            } else {
                printf("Invalid code entered.\n");
            }
            break;
        }
    }

    if (!found)
        printf("Account number not found!\n");
}
