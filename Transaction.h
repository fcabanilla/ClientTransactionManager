//
// Created by fcabanilla on 9/6/2023.
//
#ifndef TRANSACTION_H
#define TRANSACTION_H

class Transaction {
private:
    int transactionNumber;
    int amount;
    char type;
    int day;
    int month;
    int year;

public:
    Transaction();
    Transaction(int transactionNumber, int amount, char type, int day, int month, int year);

    // Getters and setters
    int getTransactionNumber() const;
    int getAmount() const;
    char getType() const;
    int getDay() const;
    int getMonth() const;
    int getYear() const;
};

#endif // TRANSACTION_H
