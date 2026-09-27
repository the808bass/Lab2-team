// Team project. Group PI-53.
// Team: Yaroslav (v. 61), Zahar (v. 59, tech lead).
#include <iostream>
// === БЛОК ПОДКЛЮЧЕНИЙ ===
#include "tiko.h"
#include "friend.h"
// === КОНЕЦ БЛОКА ПОДКЛЮЧЕНИЙ ===
using namespace std;

int main() {
    int choice;
    double value;  // ДОБАВЛЕНО: переменная для температуры
    do {
        cout << "\n=== Team project: calculations ===\n";
        // === БЛОК МЕНЮ ===
        cout << "1. Square root (Heron's method)\n";
        cout << "2. Cube root\n";
        cout << "3. Celsius -> Kelvin\n";
        cout << "4. Kelvin -> Celsius\n";
        // === КОНЕЦ БЛОКА МЕНЮ ===
        cout << "0. Exit\n";
        cout << "Choose item: ";
        cin >> choice;

        switch (choice) {
            // === БЛОК ОБРАБОТКИ ===
            case 1: {
                double x;
                cout << "Enter x (x >= 0): ";
                cin >> x;
                if (x < 0) {
                    cout << "Error: x must be non-negative.\n";
                } else {
                    cout << "sqrt(" << x << ") = " << sqrtHeron(x) << "\n";
                }
                break;
            }
            case 2: {
                double x;
                cout << "Enter x: ";
                cin >> x;
                cout << "cbrt(" << x << ") = " << cubeRoot(x) << "\n";
                break;
            }
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
