#ifndef TRANSACTION_H
#define TRANSACTION_H

class Transaction {
private:
    int transactionNumber; ///< Número de la transacción
    int amount; ///< Monto de la transacción
    char type; ///< Tipo de transacción
    int day; ///< Día de la transacción
    int month; ///< Mes de la transacción
    int year; ///< Año de la transacción

public:
    /**
     * @brief Constructor por defecto
     */
    Transaction();

    /**
     * @brief Constructor con todos los parámetros
     * @param transactionNumber Número de la transacción
     * @param amount Monto de la transacción
     * @param type Tipo de transacción
     * @param day Día de la transacción
     * @param month Mes de la transacción
     * @param year Año de la transacción
     */
    Transaction(int transactionNumber, int amount, char type, int day, int month, int year);

    /**
     * @brief Obtiene el número de la transacción
     * @return Número de la transacción
     */
    int getTransactionNumber() const;

    /**
     * @brief Obtiene el monto de la transacción
     * @return Monto de la transacción
     */
    int getAmount() const;

    /**
     * @brief Obtiene el tipo de transacción
     * @return Tipo de transacción
     */
    char getType() const;

    /**
     * @brief Obtiene el día de la transacción
     * @return Día de la transacción
     */
    int getDay() const;

    /**
     * @brief Obtiene el mes de la transacción
     * @return Mes de la transacción
     */
    int getMonth() const;

    /**
     * @brief Obtiene el año de la transacción
     * @return Año de la transacción
     */
    int getYear() const;

    /**
     * @brief Establece el número de la transacción
     * @param transactionNumber Número de la transacción
     */
    void setTransactionNumber(int transactionNumber);

    /**
     * @brief Establece el monto de la transacción
     * @param amount Monto de la transacción
     */
    void setAmount(int amount);

    /**
     * @brief Establece el tipo de transacción
     * @param type Tipo de transacción
     */
    void setType(char type);

    /**
     * @brief Establece el día de la transacción
     * @param day Día de la transacción
     */
    void setDay(int day);

    /**
     * @brief Establece el mes de la transacción
     * @param month Mes de la transacción
     */
    void setMonth(int month);

    /**
     * @brief Establece el año de la transacción
     * @param year Año de la transacción
     */
    void setYear(int year);
};

#endif // TRANSACTION_H
