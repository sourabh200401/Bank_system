# 🏦 Bank Management System (C Language)

This is a simple **console-based Bank Management System** written in C. It allows users to create bank accounts, deposit and withdraw funds, and check account balances.

## 💡 Features

- ✅ Create a new account with a unique account number
- 💰 Deposit money into an account
- 💸 Withdraw money from an account (with balance check)
- 📊 Check account balance
- ❌ Exit the application

## 📁 Project Structure


## ⚙️ How It Works

- Each account has:
  - A unique 10-digit account number
  - Holder’s name
  - Balance (initially 0)
- All accounts are stored in an array (`accounts[100]`)
- Account numbers start from `1000000000` and increment with each new account

## 🧪 Sample Workflow
Bank Management System
1. Create Account
2. Deposit
3. Withdraw
4. Check Balance
5. Exit
Choose an option: 1
Enter account holder's name: Sourabh
Account created successfully! Account Number: 1000000000

Choose an option: 2
Enter account number: 1000000000
Enter amount to deposit: 5000
Deposited 5000.00 to account number 1000000000. New balance: 5000.00
