#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Max_account 100     

typedef struct
{
    int accountNumber;
    char name[100];
    float balance;
} Account;

Account accounts[Max_account];
int accountCount = 0;

void createAccount() 
{                                                   
    if (accountCount >= Max_account) 
    {
        printf("Maximum number of accounts reached.\n");
        return;
    }
    Account newAccount;
    newAccount.accountNumber = 1000000000 + accountCount; 
    printf("Enter account holder's name: ");
    scanf("%s", newAccount.name);
    newAccount.balance = 0.0;

    accounts[accountCount] = newAccount;
    accountCount++;

    printf("Account created successfully! Account Number: %010d\n", newAccount.accountNumber);
}

void deposit() 
{                                                            
    int accountNumber;
    float amount;
      printf("Enter account number: ");
      scanf("%d", &accountNumber);
    if (accountNumber < 1000000000 || accountNumber > 1000000000 + accountCount - 1) 
    {
        printf("Invalid account number.\n");
        
    }
    printf("Enter amount to deposit: ");
    scanf("%f", &amount);
    if (amount <= 0) 
    {
        printf("Deposit amount must be positive.\n");
    
    }

    accounts[accountNumber - 1000000000].balance += amount;
    printf("Deposited %.2f to account number %010d. New balance: %.2f\n",
           amount, accountNumber, accounts[accountNumber - 1000000000].balance);
}

void withdraw() 
{                                                                             
    int accountNumber;
    float amount;

    printf("Enter account number: ");
    scanf("%d", &accountNumber);
    if (accountNumber < 1000000000 || accountNumber > 1000000000 + accountCount - 1)
    {
        printf("Invalid account number.\n");
        
    }

    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);
    if (amount <= 0) 
    {
        printf("Withdrawal amount must be positive.\n");
        
    }

    if (amount > accounts[accountNumber - 1000000000].balance) 
    {
        printf("Insufficient funds. Current balance: %.2f\n",
               accounts[accountNumber - 1000000000].balance);
        return;
    }

    accounts[accountNumber - 1000000000].balance -= amount;
    printf("Withdrew %.2f from account number %010d. New balance: %.2f\n",
           amount, accountNumber, accounts[accountNumber - 1000000000].balance);
}

void checkBalance() 
{                                                  
    int accountNumber;

    printf("Enter account number: ");
    scanf("%d", &accountNumber);
    if (accountNumber < 1000000000 || accountNumber > 1000000000 + accountCount - 1) 
    {
        printf("Invalid account number.\n");
        
    }

    printf("Account Number: %010d, Account Holder: %s, Balance: %.2f\n",
           accountNumber, accounts[accountNumber - 1000000000].name,
           accounts[accountNumber - 1000000000].balance);
}

void displayMenu() 
{                                                 
    printf("\nBank Management System\n");
    printf("1. Create Account\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Check Balance\n");
    printf("5. Exit\n");
    printf("Choose an option: ");
}

int main() {
    int choice;

    do {
        displayMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createAccount();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                checkBalance();
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}
