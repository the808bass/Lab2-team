// Team project. Group PI-53.
// Team: Yaroslav (v. 61), Zahar (v. 59, tech lead).
#include <iostream>
// === БЛОК ПОДКЛЮЧЕНИЙ ===
#include "friend.h"  // ДОБАВЛЕНО: твои функции
// === КОНЕЦ БЛОКА ПОДКЛЮЧЕНИЙ ===
using namespace std;

int main() {
    int choice;
    double value;  // ДОБАВЛЕНО: переменная для температуры
    do {
        cout << "\n=== Team project: calculations ===\n";
        // === БЛОК МЕНЮ ===
        cout << "3. Celsius - Kelvin\n";      // ДОБАВЛЕНО
        cout << "4. Kelvin - Celsius\n";      // ДОБАВЛЕНО
        // === КОНЕЦ БЛОКА МЕНЮ ===
        cout << "0. Exit\n";
        cout << "Choose item: ";
        cin >> choice;

        switch (choice) {
            // === БЛОК ОБРАБОТКИ ===
        case 3:  // ДОБАВЛЕНО
            cout << "Enter temperature in Celsius: ";
            cin >> value;
            cout << value << " °C = " << cToK(value) << " K\n";
            break;
        case 4:  // ДОБАВЛЕНО
            cout << "Enter temperature in Kelvin: ";
            cin >> value;
            if (value < 0) {
                cout << "Error: temperature cannot be below 0 K\n";
            }
            else {
                cout << value << " K = " << kToC(value) << " °C\n";
            }
            break;
            // === КОНЕЦ БЛОКА ОБРАБОТКИ ===
        case 0:
            cout << "work finished.\n";
            break;
        default:
            cout << "No such item.\n";
        }
    } while (choice != 0);
    return 0;
}