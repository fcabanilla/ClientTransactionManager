//
// Created by fcabanilla on 9/6/2023.
//
#ifndef CLIENT_H
#define CLIENT_H

#include <string>

using namespace std;

class Client {
private:
    int clientNumber;
    string name;
    string lastName;
    string accountType;
    int creditCardLimit;
    int year;
    string status;

public:
    Client();
    Client(int clientNumber, string  name, string  lastName, string  accountType, int year, string status);
    Client(int clientNumber, string  name, string  lastName, string  accountType, int year);

    // Getters and setters
    int getClientNumber() const;
    const string& getName() const;
    const string& getLastName() const;
    const string& getAccountType() const;
    int getYear() const;
    const string& getStatus() const;
    int getCreditCardLimit() const;
    void setCreditCardLimit(int creditCardLimit);
};

#endif // CLIENT_H
