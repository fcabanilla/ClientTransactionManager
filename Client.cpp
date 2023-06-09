//
// Created by fcabanilla on 9/6/2023.
//

#include "Client.h"

#include <utility>

Client::Client(int clientNumber, std::string  name, std::string  lastName, std::string  type, int year, std::string  status):
        clientNumber(clientNumber),
        name(std::move(name)),
        lastName(std::move(lastName)),
        type(std::move(type)),
        year(year),
        status(std::move(status)) {}

int Client::getClientNumber() const {
    return clientNumber;
}

const std::string& Client::getName() const {
    return name;
}

const std::string& Client::getLastName() const {
    return lastName;
}

const std::string& Client::getType() const {
    return type;
}

int Client::getYear() const {
    return year;
}

const std::string& Client::getStatus() const {
    return status;
}
