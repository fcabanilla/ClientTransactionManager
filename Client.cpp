//
// Created by fcabanilla on 9/6/2023.
//

#include "Client.h"

using namespace std;

Client::Client() = default;

Client::Client(int clientNumber, string  name, string  lastName, string  type, int year){
    this->clientNumber = clientNumber;
    this->name = name;
    this->lastName = lastName;
    this->accountType = type;
    this->year = year;
    this->status = "activo";
}

Client::Client(int clientNumber, string name, string lastName, string type, int year, string  status){
    this->clientNumber = clientNumber;
    this->name = name;
    this->lastName = lastName;
    this->accountType = type;
    this->year = year;
    this->status = status;
}

int Client::getClientNumber() const {
    return clientNumber;
}

const string& Client::getName() const {
    return name;
}

const string& Client::getLastName() const {
    return lastName;
}

const string& Client::getAccountType() const {
    return accountType;
}

int Client::getYear() const {
    return year;
}

const string& Client::getStatus() const {
    return status;
}

int Client::getCreditCardLimit() const {
    return creditCardLimit;
}

void Client::setCreditCardLimit(int creditCardLimit) {
    Client::creditCardLimit = creditCardLimit;
}
