#include <iostream>
#include <string>

#include <windows.h>
#include "ManagementSystem.h"

#include "Transaction.h"
#include "Client.h"

using namespace std;

//*********************************************
// Tests para probar las funciones de ManagementSystem
void testLoadTransactionFromFile(ManagementSystem ms) {
    int transactionCount = 0;
    static Transaction transactions[MAX_TRANSACTIONS];
    Transaction* loadedTransactions = ms.loadTransactionsFromFile("../transacciones.txt", transactionCount);

    if (loadedTransactions != nullptr) {
        for (int i = 0; i < transactionCount; i++) {
            transactions[i] = loadedTransactions[i];
        }
        ms.showAllTransactions(transactions, transactionCount);
    }
}

void testSaveTransactionsToFile(ManagementSystem ms){
    int transactionCount = 3;
    static Transaction transactions[MAX_TRANSACTIONS];
    transactions[0] = Transaction(4, 894, 'D', 1, 11, 2021);
    transactions[1] = Transaction(5, 894, 'A', 12, 12, 2020);
    transactions[2] = Transaction(6, 894, 'B', 21, 8, 2010);
    ms.saveTransactionsToFile(transactions, transactionCount, "../transacciones.txt");
    testLoadTransactionFromFile(ms);

}

void testSaveTransactionToFile(ManagementSystem ms){
    static Transaction transaction;
    transaction = Transaction(10, 1023, 'A', 28, 7, 2011);
    ms.saveTransactionToFile(transaction, "../transacciones.txt");
    testLoadTransactionFromFile(ms);
}

void testLoadClientsFromFile(ManagementSystem ms) {
    int clientCount = 0;
    static Client clients[MAX_CLIENTS];
    Client* loadedClients = ms.loadClientsFromFile("../clientes.txt",clientCount);

    if (loadedClients != nullptr){
        for (int i=0 ; i < clientCount ; i++){
            clients[i] = loadedClients[i];
        }
        ms.showAllClients(clients,clientCount);
    }
}

void showAllClients(ManagementSystem& ms){
    int clientCount = 0;
    static Client clients[MAX_CLIENTS];
    Client* loadedClients = ms.getAllClients( clientCount);

    if (loadedClients != nullptr){
        for (int i=0 ; i < clientCount ; i++){
            clients[i] = loadedClients[i];
        }
        ms.showAllClients(clients,clientCount);
    }
}
//*********************************************

void clearScreen() {
    //cout << "\x1B[2J\x1B[H";
}

void addClientMenu(ManagementSystem& ms) {
    cout << "Ejecutando: Agregar cliente..." << endl;
    // Crear un dialogo en consola para ingresar los datos necesarios para el cliente
    cout << "Ingrese el número de cliente: ";
    int clientNumber;
    cin >> clientNumber;
    cout << "Ingrese el nombre del cliente: ";
    string name;
    cin >> name;
    cout << "Ingrese el apellido del cliente: ";
    string lastName;
    cin >> lastName;
    cout << "Ingrese el tipo de cuenta del cliente: ";
    string accountType;
    cin >> accountType;
    cout << "Ingrese el año de apertura de la cuenta: ";
    int year;
    cin >> year;

    Client client = Client(clientNumber, name, lastName, accountType, year);
    ms.addClient(client);
}

void modifyData(ManagementSystem& system) {
    cout << "Ejecutando: Modificar datos..." << endl;
    // Aquí iría el código para modificar los datos de un cliente.
}

void performExtraction(ManagementSystem& system) {
    cout << "Ejecutando: Realizar extracción..." << endl;
    // Aquí iría el código para realizar una extracción.
}

void performDeposit(ManagementSystem& system) {
    cout << "Ejecutando: Realizar depósito..." << endl;
    // Aquí iría el código para realizar un depósito.
}

void consultClientByNumber(ManagementSystem& system) {
    cout << "Ejecutando: Consultar cliente por número de cliente..." << endl;
    // Aquí iría el código para consultar un cliente por su número.
}

void showTransactionsByClient(ManagementSystem& system) {
    cout << "Ejecutando: Mostrar transacciones por cliente..." << endl;
    // Aquí iría el código para mostrar las transacciones de un cliente.
}

void showExtractionAndDepositReports(ManagementSystem& system) {
    cout << "Ejecutando: Mostrar informes de extracciones y depósitos..." << endl;
    // Aquí iría el código para mostrar los informes de extracciones y depósitos.
}

// Esta función maneja el submenú para las consultas.
void consultations(ManagementSystem& system) {
    int option;
    clearScreen();
    do {
        cout << "1. Consultas \t> \"Cliente\" por número de cliente" << endl;
        cout << "2. Consultas \t> Todos los clientes" << endl;
        cout << "3. Consultas \t> Transacciones por cliente" << endl;
        cout << "4. Consultas \t> Informes de extracciones y depósitos" << endl;
        cout << "5.\t\t< Volver al menú anterior" << endl;
        cin >> option;

        switch (option) {
            case 1:
                consultClientByNumber(system);
                break;
            case 2:
                showAllClients(system);
                showAllClients(system);
                break;
            case 3:
                showTransactionsByClient(system);
                break;
            case 4:
                showExtractionAndDepositReports(system);
                break;
            case 5:
                cout << "Volviendo al menú principal..." << endl;
                break;
            default:
                cout << "Opción incorrecta" << endl;
                break;
        }
        clearScreen();
    } while (option != 5);
}

void debugMenu(ManagementSystem& system){
    int option;
    clearScreen();
    do {
        cout << "1. Imprimir todas las Transacciones" << endl;
        cout << "2. Imprimir todos los Clientes" << endl;
        cout << "3. Guardar Transacciones en archivo" << endl;
        cout << "4. Guardar Transacción en archivo" << endl;
        cin >> option;

        switch (option) {
            case 1:
                testLoadTransactionFromFile(system);
                break;
            case 2:
                testLoadClientsFromFile(system);
                break;
            case 3:
                testSaveTransactionsToFile(system);
                break;
            case 4:
                testSaveTransactionToFile(system);
                break;
            default:
                cout << "Opción incorrecta" << endl;
                break;
        }
    clearScreen();
    } while (option != 5);
}

// Esta es la función principal que maneja el menú principal.
int main() {
    int option;
    ManagementSystem system;

    do{
        cout << "1. Agregar Cliente" << endl;
        cout << "2. Modificar Datos" << endl;
        cout << "3. Realizar Extracción" << endl;
        cout << "4. Realizar Depósito" << endl;
        cout << "5. Consultas" << endl;
        cout << "0. Menu Debug" << endl; // Debug menu
        cout << "6. Salir" << endl;
        cin >> option;

        switch (option) {
            case 1:
                addClientMenu(system);
                break;
            case 2:
                modifyData(system);
                break;
            case 3:
                performExtraction(system);
                break;
            case 4:
                performDeposit(system);
                break;
            case 5:
                consultations(system);
                break;
            case 6:
                cout << "Exiting..." << endl;
                break;
            case 0: // Debug menu
                debugMenu(system);
                break;
            default:
                cout << "Incorrect option" << endl;
                break;
        }
        clearScreen();
    } while (option != 6);

    return 0;
}
