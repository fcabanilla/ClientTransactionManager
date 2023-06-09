# Tema 2: Sistema de Gestión

## Descripción del Proyecto

Este proyecto es una simulación de un sistema de gestión para el banco UCC. El banco mantiene un registro de todos sus clientes y todas sus transacciones en una base de datos, la cual está constituida por dos archivos de texto (.txt). El sistema debe poder leer estos archivos, y guardar los datos que se vayan cambiando durante la ejecución del programa.

Los archivos están en el siguiente formato:

## Archivos de Datos

### transacciones.txt

| nro_transaccion | cantidad | tipo | dia | mes | anio |
|-----------------|----------|------|-----|-----|------|
| 1               | 100      | E    | 13  | 2   | 2000 |
| 2               | 200      | D    | 15  | 5   | 2005 |

### clientes.txt

| nro_cliente | nombre       | apellido    | tipo  | anio | estado |
|-------------|--------------|-------------|-------|------|--------|
| 1           | Juan         | Degiovanni  | plata | 2003 | baja   |
| 2           | Pedro        | Laciar      | oro   | 2020 | activo |
| 3           | Julio        | Gutierrez   | black | 2007 | activo |

## Restricciones

1. Los clientes con una antigüedad menor a 3 años no pueden ser de tipo "black".
2. Los clientes de tipo "oro" o más tienen acceso a una tarjeta de crédito, con un límite mensual de $50000 para los de tipo "oro", y de $250000 para los de tipo "black".

## Funcionalidades

El programa debe permitir:

- Mantener la lista de Clientes. Alta y Baja (En este caso considerar cambiar el estado de ACTIVO a BAJA)
- Mantener las transacciones. Generar extracción, depósito por cliente.
- Consultas varias:
  - Cliente por número de cliente
  - Todos los clientes
  - Transacciones por clientes
  - Informes de extracciones y depósitos
    - Por periodo de 6 meses
    - Por año
    - Total

## Criterios de corrección

El desarrollo debe ser desarrollado completamente orientado a objetos. El programa debe ejecutar y cumplir con las consignas definidas en los enunciados de los temas. Se deben desarrollar todas las funciones correspondientes para cada clase necesaria para la implementación.

## Presentación

Trabajo grupal

## Fecha límite de presentación

16/06/2022

## Consignas

Las consignas del proyecto se pueden descargar desde el siguiente [link](https://drive.google.com/file/d/1gnigC8dGXftSLGXSd49nbO3xGJ9W1rqU/view?usp=sharing).
