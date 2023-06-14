#ifndef MANAGEMENTSYSTEM_H
#define MANAGEMENTSYSTEM_H

#include <iostream>
#include <vector>
#include "Transaction.h"
#include "Client.h"

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
     * @brief Constructor para la clase ManagementSystem.
     */
    ManagementSystem();

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
     * @brief Obtiene todos los clientes en el sistema.
     * @return Un puntero al array de clientes.
     */
    const Client *getClients() const;

    /**
     * @brief Obtiene el conteo actual de clientes.
     * @return El conteo de clientes.
     */
    int getClientCount() const;

    /**
     * @brief Establece el conteo de clientes.
     * @param clientCount El conteo a establecer.
     */
    void setClientCount(int clientCount);

    /**
     * @brief Obtiene un cliente por su número.
     * @param clientNumber El número del cliente.
     * @return Un puntero al cliente.
     */
    Client *getClientByNumber(int clientNumber);

    /**
     * @brief Obtiene todos los clientes en el sistema.
     * @return Un vector de todos los clientes.
     */
    vector<Client> getAllClients();

    /**
     * @brief Obtiene todas las transacciones en el sistema.
     * @return Un puntero al array de transacciones.
     */
    const Transaction *getTransactions() const;

    /**
     * @brief Obtiene el conteo actual de transacciones.
     * @return El conteo de transacciones.
     */
    int getTransactionCount() const;

    /**
     * @brief Establece el conteo de transacciones.
     * @param transactionCount El conteo a establecer.
     */
    void setTransactionCount(int transactionCount);

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
    void saveTransactionsToFile(const Transaction *transactions, int transactionCount, const string &filename);

    /**
     * @brief Obtiene transacciones por un cliente.
     * @param clientNumber El número del cliente.
     * @return Un vector de transacciones del cliente.
     */
    vector<Transaction> getTransactionsByClient(int clientNumber);

    /**
    Mis disculpas, parece que el mensaje se cortó. Aquí está el resto del código:

```cpp
    /**
     * @brief Obtiene informes de extracción por un periodo.
     * @param months El número de meses para el periodo.
     * @return Un vector de informes de extracción.
     */
    vector<Transaction> getExtractionReportsByPeriod(int months);

    /**
     * @brief Obtiene informes de extracción por un año.
     * @param year El año para los informes.
     * @return Un vector de informes de extracción.
     */
    vector<Transaction> getExtractionReportsByYear(int year);

    /**
     * @brief Obtiene informes de extracción totales.
     * @return Un vector de todos los informes de extracción.
     */
    vector<Transaction> getTotalExtractionReports();

    /**
     * @brief Realiza una extracción para un cliente.
     * @param clientNumber El número del cliente.
     * @param amount La cantidad a extraer.
     */
    void performExtraction(int clientNumber, int amount);

    /**
     * @brief Realiza un depósito para un cliente.
     * @param clientNumber El número del cliente.
     * @param amount La cantidad a depositar.
     */
    void performDeposit(int clientNumber, int amount);

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
     * @brief Muestra todos los clientes.
     * @param clients Un puntero al array de clientes.
     * @param clientCount El conteo de clientes.
     */
    void showAllClients(Client* clients, int clientCount);

    /**
     * @brief Muestra un cliente.
     * @param client El cliente a mostrar.
     */
    void showClient(Client client);

    Client *loadClientsFromFile(const string &filename, int &clientCount);

};

#endif // MANAGEMENTSYSTEM_H
