#include <iostream>
#include <fstream>
#include <sstream>

#include "ManagementSystem.h"
using namespace std;

ManagementSystem::ManagementSystem() {
    clientCount = 0;
    transactionCount = 0;
}
// Asume que MAX_TRANSACTIONS y MAX_CLIENTS son constantes que definen el número máximo de transacciones y clientes

Transaction* ManagementSystem::loadTransactionsFromFile(const std::string& filename, int& transactionCount) {
    static Transaction transactions[MAX_TRANSACTIONS];
    transactionCount = 0;
    ifstream file(filename);
    if (!file) {
        cerr << "No se pudo abrir el archivo: " << filename << endl;
        cerr << "Se retornará un arreglo vacío de transacciones." << endl;
        cerr << "Verifica que el archivo exista y que tenga el formato correcto." << endl;
        cerr << "El formato correcto es: " << endl;
        cerr << "Número de transacción, monto, tipo, día, mes, año" << endl;
        cerr << "Ejemplo: 1 1000 D 1 1 2020" << endl;
        return transactions;
    }

    string line;
    while (getline(file, line)) {
        int transactionNumber, amount, day, month, year;
        char type;

        istringstream iss(line);
        if (!(iss >> transactionNumber >> amount >> type >> day >> month >> year)) {
            break; // Error en el formato del archivo
        }

        transactions[transactionCount].setTransactionNumber(transactionNumber);
        transactions[transactionCount].setAmount(amount);
        transactions[transactionCount].setType(type);
        transactions[transactionCount].setDay(day);
        transactions[transactionCount].setMonth(month);
        transactions[transactionCount].setYear(year);

        transactionCount++;
    }
    //file.close();
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

void ManagementSystem::showTransaction(Transaction transaction) {
    cout << "# Transaction number:  " << transaction.getTransactionNumber() << "\t#"<<endl;
    cout << "# Amount: " << transaction.getAmount() << "\t\t\t#"<<endl;
    cout << "# Type: " << transaction.getType() << "\t\t\t#"<<endl;
    cout << "# Day: " << transaction.getDay() << "\t\t\t#"<<endl;
    cout << "# Month: " << transaction.getMonth() << "\t\t\t#"<<endl;
    cout << "# Year: " << transaction.getYear() << "\t\t\t#"<<endl;
}

void ManagementSystem::showAllTransactions(Transaction *transactions, int transactionCount) {
    for (int i = 0; i < transactionCount; i++) {
        cout << "#################################" << endl;
        showTransaction(transactions[i]);
        cout << "#################################" << endl << endl;
    }
}

void ManagementSystem::showClient(Client client) {
    cout << "# Client Number:  " << client.getClientNumber() << "\t\t#"<<endl;
    cout << "# Nombre: " << client.getName() << "\t\t\t#"<<endl;
    cout << "# Apellido: " << client.getLastName() << "\t\t#"<<endl;
    cout << "# Tipo: " << client.getType() << "\t\t\t#"<<endl;
    cout << "# Ano: " << client.getYear() << "\t\t\t#"<<endl;
    cout << "# Estado:\t" << client.getStatus() << "\t\t#"<<endl;
}

void ManagementSystem::showAllClients(Client *clients, int clientCount) {
    for (int i = 0; i < clientCount ; i++) {
        cout << "#################################" << endl;
        showClient (clients[i]);
        cout << "#################################" << endl << endl;
    }
}