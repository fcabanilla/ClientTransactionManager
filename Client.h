//
// Created by fcabanilla on 9/6/2023.
//
#ifndef CLIENT_H
#define CLIENT_H

#include <string>

using namespace std;

class Client {
private:
    int clientNumber; ///< Número del cliente
    string name; ///< Nombre del cliente
    string lastName; ///< Apellido del cliente
    string accountType; ///< Tipo de cuenta del cliente
    int creditCardLimit; ///< Límite de la tarjeta de crédito del cliente
    int year; ///< Año
    string status; ///< Estado del cliente

public:
    /**
     * @brief Constructor por defecto
     */
    Client();

    /**
     * @brief Constructor con todos los parámetros
     * @param clientNumber Número del cliente
     * @param name Nombre del cliente
     * @param lastName Apellido del cliente
     * @param accountType Tipo de cuenta del cliente
     * @param year Año
     * @param status Estado del cliente
     */
    Client(int clientNumber, string  name, string  lastName, string  accountType, int year, string status);

    /**
     * @brief Constructor sin el estado del cliente
     * @param clientNumber Número del cliente
     * @param name Nombre del cliente
     * @param lastName Apellido del cliente
     * @param accountType Tipo de cuenta del cliente
     * @param year Año
     */
    Client(int clientNumber, string  name, string  lastName, string  accountType, int year);

    /**
     * @brief Obtiene el número del cliente
     * @return Número del cliente
     */
    int getClientNumber() const;

    /**
     * @brief Obtiene el nombre del cliente
     * @return Nombre del cliente
     */
    const string& getName() const;

    /**
     * @brief Obtiene el apellido del cliente
     * @return Apellido del cliente
     */
    const string& getLastName() const;

    /**
     * @brief Obtiene el tipo de cuenta del cliente
     * @return Tipo de cuenta del cliente
     */
    const string& getAccountType() const;

    /**
     * @brief Obtiene el año
     * @return Año
     */
    int getYear() const;

    /**
     * @brief Obtiene el estado del cliente
     * @return Estado del cliente
     */
    const string& getStatus() const;

    /**
     * @brief Obtiene el límite de la tarjeta de crédito del cliente
     * @return Límite de la tarjeta de crédito del cliente
     */
    int getCreditCardLimit() const;

    /**
     * @brief Establece el límite de la tarjeta de crédito del cliente
     * @param creditCardLimit Límite de la tarjeta de crédito del cliente
     */
    void setCreditCardLimit(int creditCardLimit);
};


#endif // CLIENT_H
