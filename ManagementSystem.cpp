#include <iostream>
#include <fstream>
#include <sstream>
#define

#include "ManagementSystem.h"
using namespace std;
ManagementSystem ms;

ManagementSystem::ManagementSystem() : transactionCount(0), clientCount(0) {
    // No es necesario inicializar 'transactions' y 'clients' aquí
}

// Asume que MAX_TRANSACTIONS y MAX_CLIENTS son constantes que definen el número máximo de transacciones y clientes

Transaction* ManagementSystem::loadTransactionsFromFile(const string& filename, int& transactionCount) {
    ifstream file(filename);
    if (!file) {
        cerr << "No se pudo abrir el archivo de transacciones: " << filename << endl;
        return nullptr;
    }

    string line;
    while (getline(file, line)) {
        istringstream iss(line);
        // VARIABLES NECESARIAS PARA CREAR UNA TRANSACCIÓN
        int id, amount, day, month, year;
        char type;

        // Línea erronea al leer la línea de transacciones
        if (!(iss >> id >> amount >> type >> day >> month >> year)) {
            cerr << "Error al leer la línea de transacciones: " << line << endl;
            continue;
        }

        // Se ha alcanzado el número máximo de transacciones. Ignorando las transacciones adicionales.
        if (transactionCount >= MAX_TRANSACTIONS) {
            cerr << "Se ha alcanzado el número máximo de transacciones. Ignorando las transacciones adicionales." << endl;
            break;
        }

        // Agregando la transacción al arreglo de transacciones
        cout << "id" << id << endl;
        cout << "type" << type << endl;
        cout << "amount" << amount << endl;
        cout << "day" << day << endl;
        cout << "month" << month << endl;
        cout << "year" << year << endl;
        cout << "transactionCount" << transactionCount << endl;

        transactions[transactionCount] = Transaction(id, amount, type, day, month, year);
        transactionCount++;
    }

    return transactions;
}

Client* ManagementSystem::loadClientsFromFile(const string& filename, int& clientCount) {
    ifstream file(filename);
    if (!file) {
        cerr << "No se pudo abrir el archivo de clientes: " << filename << endl;
        return nullptr;
    }

    string line;
    while (getline(file, line)) {
        istringstream iss(line);
        int id, year;
        string name, surname, type, status;

        if (!(iss >> id >> name >> surname >> type >> year >> status)) {
            cerr << "Error al leer la línea de clientes: " << line << endl;
            continue;
        }

        if (clientCount >= MAX_CLIENTS) {
            cerr << "Se ha alcanzado el número máximo de clientes. Ignorando los clientes adicionales." << endl;
            break;
        }

        clients[clientCount] = Client(id, name, surname, type, year, status);
        clientCount++;
    }

    return clients;
}

void ManagementSystem::saveTransactionsToFile(const Transaction* transactions, int transactionCount, const string& filename) {
    // Implementa la lógica para guardar transacciones en el archivo
}

void ManagementSystem::saveClientsToFile(const Client* clients, int clientCount, const string& filename) {
    // Implementa la lógica para guardar clientes en el archivo
}

void ManagementSystem::addClient(const Client& client) {
    // Implementa la lógica para agregar un cliente
}

void ManagementSystem::removeClient(int clientNumber) {
    // Implementa la lógica para remover un cliente
}

void ManagementSystem::performExtraction(int clientNumber, int amount) {
    // Implementa la lógica para realizar una extracción
}

void ManagementSystem::performDeposit(int clientNumber, int amount) {
    // Implementa la lógica para realizar un depósito
}

Client* ManagementSystem::getClientByNumber(int clientNumber) {
    // Implementa la lógica para obtener un cliente por su número
    return nullptr; // Modifica según sea necesario
}

vector<Client> ManagementSystem::getAllClients() {
    // Implementa la lógica para obtener todos los clientes
    vector<Client> result;
    return result; // Modifica según sea necesario
}

vector<Transaction> ManagementSystem::getTransactionsByClient(int clientNumber) {
    // Implementa la lógica para obtener transacciones por cliente
    vector<Transaction> result;
    return result; // Modifica según sea necesario
}

vector<Transaction> ManagementSystem::getExtractionReportsByPeriod(int months) {
    // Implementa la lógica para obtener informes de extracción por período
    vector<Transaction> result;
    return result; // Modifica según sea necesario
}

vector<Transaction> ManagementSystem::getExtractionReportsByYear(int year) {
    // Implementa la lógica para obtener informes de extracción por año
    vector<Transaction> result;
    return result; // Modifica según sea necesario
}

vector<Transaction> ManagementSystem::getTotalExtractionReports() {
    // Implementa la lógica para obtener todos los informes de extracción
    vector<Transaction> result;
    return result; // Modifica según sea necesario
}

int ManagementSystem::getTransactionCount() const {
    return transactionCount;
}

void ManagementSystem::setTransactionCount(int transactionCount) {
    ManagementSystem::transactionCount = transactionCount;
}

const Transaction *ManagementSystem::getTransactions() const {
    return transactions;
}

const Client *ManagementSystem::getClients() const {
    return clients;
}

int ManagementSystem::getClientCount() const {
    return clientCount;
}

void ManagementSystem::setClientCount(int clientCount) {
    ManagementSystem::clientCount = clientCount;
}
