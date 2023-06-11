#ifndef MANAGEMENTSYSTEM_H
#define MANAGEMENTSYSTEM_H

#include <iostream>
#include <vector>
#include "Transaction.h"
#include "Client.h"

#define MAX_CLIENTS 100
#define MAX_TRANSACTIONS 1000

class ManagementSystem {
private:
    Transaction transactions[MAX_TRANSACTIONS];
    Client clients[MAX_CLIENTS];
    int numTransactions;
    int numClients;

public:
    ManagementSystem();

    // loadTransactionsFromFile debería desarrollar un arreglo de transacciones y no void.
    int loadTransactionsFromFile(const std::string& filename);

    // loadClientsFromFile debería desarrollar un arreglo de clientes y no void.
    int loadClientsFromFile(const std::string& filename);

    // Aquí lo que debemos hacer es recibir un arreglo de transacciones y el nombre del archivo a guardar.
    void saveTransactionsToFile(const std::string& filename);

    // Aquí lo que debemos hacer es recibir un arreglo de clientes y el nombre del archivo a guardar.
    void saveClientsToFile(const std::string& filename);

    void addClient(const Client& client);
    void removeClient(int clientNumber);

    void performExtraction(int clientNumber, int amount);
    void performDeposit(int clientNumber, int amount);

    Client* getClientByNumber(int clientNumber);
    std::vector<Client> getAllClients();
    std::vector<Transaction> getTransactionsByClient(int clientNumber);

    std::vector<Transaction> getExtractionReportsByPeriod(int months);
    std::vector<Transaction> getExtractionReportsByYear(int year);
    std::vector<Transaction> getTotalExtractionReports();
};

#endif // MANAGEMENTSYSTEM_H
