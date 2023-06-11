#ifndef MANAGEMENTSYSTEM_H
#define MANAGEMENTSYSTEM_H

#include <iostream>
#include <vector>
#include "Transaction.h"
#include "Client.h"

class ManagementSystem {
private:
    std::vector<Transaction> transactions;
    std::vector<Client> clients;

public:
    ManagementSystem();

    // loadTransactionsFromFile deberia devolver un arreglo de transacciones y no void.
    void loadTransactionsFromFile(const std::string& filename);

    // loadClientsFromFile deberia devolver un arreglo de clientes y no void.
    void loadClientsFromFile(const std::string& filename);

    // Acá lo que deberíamos hacer es recibir un arreglo de transacciones y el nombre del archivo a guardar.
    void saveTransactionsToFile(const std::string& filename);

    // Acá lo que deberíamos hacer es recibir un arreglo de clientes y el nombre del archivo a guardar.
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
