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
    string type;
    int year;
    string status;

public:
    Client();
    Client(int clientNumber, string  name, string  lastName, string  type, int year, string status);
    Client(int clientNumber, string  name, string  lastName, string  type, int year){
        this->clientNumber = clientNumber;
        this->name = name;
        this->lastName = lastName;
        this->type = type;
        this->year = year;
        this->status = "Activo";
    }

    // Getters and setters
    int getClientNumber() const;
    const string& getName() const;
    const string& getLastName() const;
    const string& getType() const;
    int getYear() const;
    const string& getStatus() const;
};

#endif // CLIENT_H
