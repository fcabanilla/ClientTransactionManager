#ifndef MANAGEMENTSYSTEM_H
#define MANAGEMENTSYSTEM_H

#include <iostream>
#include <vector>
#include "Transaction.h"
#include "Client.h"

using namespace std;

#define MAX_CLIENTS 100
#define MAX_TRANSACTIONS 1000

class ManagementSystem {
private:
    Transaction transactions[MAX_TRANSACTIONS];
public:
    const Transaction *getTransactions() const;

    const Client *getClients() const;

    int getClientCount() const;

    void setClientCount(int clientCount);

private:
    Client clients[MAX_CLIENTS];
    int clientCount;
    int transactionCount;
public:
    int getTransactionCount() const;

    void setTransactionCount(int transactionCount);

public:
    ManagementSystem();

    // loadTransactionsFromFile debería retornar un arreglo de transacciones y no void.
    static Transaction *loadTransactionsFromFile(const string &filename, int &transactionCount);

    // loadClientsFromFile debería retornar un arreglo de clientes y no void.
    Client *loadClientsFromFile(const string &filename, int &clientCount);

    // Lo que debemos hacer es recibir un arreglo de transacciones y el nombre del archivo a guardar.
    void saveTransactionsToFile(const Transaction *transactions, int transactionCount, const string &filename);

    // Lo que debemos hacer es recibir un arreglo de clientes y el nombre del archivo a guardar.
    void saveClientsToFile(const Client *clients, int clientCount, const string &filename);

    void addClient(const Client &client);

    void removeClient(int clientNumber);

    void performExtraction(int clientNumber, int amount);

    void performDeposit(int clientNumber, int amount);

    Client *getClientByNumber(int clientNumber);

    vector<Client> getAllClients();

    vector<Transaction> getTransactionsByClient(int clientNumber);

    vector<Transaction> getExtractionReportsByPeriod(int months);

    vector<Transaction> getExtractionReportsByYear(int year);

    vector<Transaction> getTotalExtractionReports();

};

#endif // MANAGEMENTSYSTEM_H
