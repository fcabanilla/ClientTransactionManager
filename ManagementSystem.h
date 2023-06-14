#ifndef MANAGEMENTSYSTEM_H
#define MANAGEMENTSYSTEM_H

#include <iostream>
#include <vector>
#include "Transaction.h"
#include "Client.h"
#include "ClientStatus.h"

using namespace std;

#define MAX_CLIENTS 100
#define MAX_TRANSACTIONS 1000

/**
 * @class ManagementSystem
 * @brief Clase para gestionar clientes y transacciones.
 */
class ManagementSystem {
private:
    Transaction transactions[MAX_TRANSACTIONS]; ///< Array para almacenar transacciones.
    Client clients[MAX_CLIENTS]; ///< Array para almacenar clientes.
    int clientCount; ///< Contador de clientes actuales.
    int transactionCount; ///< Contador de transacciones actuales.

public:

    /**
     * @brief Añade un cliente al sistema.
     * @param client El cliente a añadir.
     */
    void addClient(const Client &client);

    /**
     * @brief Elimina un cliente del sistema.
     * @param clientNumber El número del cliente a eliminar.
     */
    void removeClient(int clientNumber);

    /**
     * @brief Muestra todos los clientes.
     * @param clients Un puntero al array de clientes.
     * @param clientCount El conteo de clientes.
     */
    void showAllClients(Client* clients, int clientCount, ClientStatus option);

    /**
     * @brief Muestra un cliente.
     * @param client El cliente a mostrar.
     */
    void showClient(Client client);

    Client *loadClientsFromFile(const string &filename, int &clientCount);

    /**
     * @brief Obtiene todos los clientes en el sistema.
     * @param clientCount Una referencia al conteo de clientes.
     * @return Un puntero al array de clientes.
     */
    Client * getAllClients(int& clientCount);

    /**
     * @brief Muestra todas las transacciones.
     * @param transactions Un puntero al array de transacciones.
     * @param transactionCount El conteo de transacciones.
     */
    void showAllTransactions(Transaction* transactions, int transactionCount);

    /**
     * @brief Muestra una transacción.
     * @param transaction La transacción a mostrar.
     */
    void showTransaction(Transaction transaction);

    /**
     * @brief Carga transacciones desde un archivo.
     * @param filename El nombre del archivo.
     * @param transactionCount Una referencia al conteo de transacciones.
     * @return Un puntero al array de transacciones.
     */
    Transaction *loadTransactionsFromFile(const string &filename, int &transactionCount);

    /**
     * @brief Guarda transacciones en un archivo.
     * @param transactions Un puntero al array de transacciones.
     * @param transactionCount El conteo de transacciones.
     * @param filename El nombre del archivo.
     */
    static void saveTransactionsToFile(const Transaction *transactions, int transactionCount, const string &filename);

    static void saveTransactionToFile(Transaction transaction, string filename);

    /*
     * All Getters and Setters
     */

    const Transaction *getTransactions() const;

    const Client *getClients() const;

    int getClientCount() const;

    void setClientCount(int clientCount);

    int getTransactionCount() const;

    void setTransactionCount(int transactionCount);
};

#endif // MANAGEMENTSYSTEM_H
