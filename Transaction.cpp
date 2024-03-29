//
// Created by fcabanilla on 9/6/2023.
//

#include "Transaction.h"
Transaction::Transaction() = default;
Transaction::Transaction(int transactionNumber, int amount, char type, int day, int month, int year)
        : transactionNumber(transactionNumber), amount(amount), type(type), day(day), month(month), year(year) {}

int Transaction::getTransactionNumber() const {
    return transactionNumber;
}

int Transaction::getAmount() const {
    return amount;
}

char Transaction::getType() const {
    return type;
}

int Transaction::getDay() const {
    return day;
}

int Transaction::getMonth() const {
    return month;
}

int Transaction::getYear() const {
    return year;
}

void Transaction::setTransactionNumber(int transactionNumber) {
    Transaction::transactionNumber = transactionNumber;
}

void Transaction::setAmount(int amount) {
    Transaction::amount = amount;
}

void Transaction::setType(char type) {
    Transaction::type = type;
}

void Transaction::setDay(int day) {
    Transaction::day = day;
}

void Transaction::setMonth(int month) {
    Transaction::month = month;
}

void Transaction::setYear(int year) {
    Transaction::year = year;
}
