#include <iostream>
#include <string>

#include "ManagementSystem.h"
#include "Transaction.h"
#include "Client.h"

using namespace std;
ManagementSystem ms;

// Las siguientes funciones son "placeholders" para las operaciones reales.
// Cada una imprime un mensaje en la pantalla y luego vuelve al menú.

void addClient() {
    //cout << "Ejecutando: Agregar cliente..." << endl;
    cout << "Leyendo transaccion desde archivo transacciones.txt" << endl;
    int transactionCount = 0;
    ms.loadTransactionsFromFile("transacciones.txt", transactionCount);
    // Aquí iría el código para agregar un cliente.
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

void showAllClients(ManagementSystem& system) {
    cout << "Ejecutando: Mostrar todos los clientes..." << endl;
    // Aquí iría el código para mostrar todos los clientes.
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
        cout << "6. Salir" << endl;
        cin >> option;

        switch (option) {
            case 1:
                addClient(system);
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
            default:
                cout << "Incorrect option" << endl;
                break;
        }

    } while (option != 6);

    return 0;
}
