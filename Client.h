//
// Created by fcabanilla on 9/6/2023.
//
#ifndef CLIENT_H
#define CLIENT_H

#include <string>

class Client {
private:
    int clientNumber;
    std::string name;
    std::string lastName;
    std::string type;
    int year;
    std::string status;

public:
    Client();
    Client(int clientNumber, std::string  name, std::string  lastName, std::string  type, int year, std::string  status);

    // Getters and setters
    int getClientNumber() const;
    const std::string& getName() const;
    const std::string& getLastName() const;
    const std::string& getType() const;
    int getYear() const;
    const std::string& getStatus() const;
};

#endif // CLIENT_H
