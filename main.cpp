// Team project. Group PI-53.
// Team: Yaroslav (v. 61), Zahar (v. 59, tech lead).
#include <iostream>
// === БЛОК ПОДКЛЮЧЕНИЙ ===
#include "tiko.h"    // Функции варианта 59
#include "friend.h"  // Функции варианта 61 (cToK, kToC)
// === КОНЕЦ БЛОКА ПОДКЛЮЧЕНИЙ ===
using namespace std;

int main() {
    int choice;
    double value;
    do {
        cout << "\n=== Team project: calculations ===\n";
        // === БЛОК МЕНЮ ===
        cout << "1. Square root (Heron's method)\n";
        cout << "2. Cube root\n";
        cout << "3. Celsius - Kelvin\n";
        cout << "4. Kelvin - Celsius\n";
        // === КОНЕЦ БЛОКА МЕНЮ ===
        cout << "0. Exit\n";
        cout << "Choose item: ";
        cin >> choice;

        switch (choice) {
            // === БЛОК ОБРАБОТКИ ===
            case 1: {
                // Код напарника (вариант 59)
                break;
            }
            case 2: {
                // Код напарника (вариант 59)
                break;
            }
            case 3: {
                cout << "Enter temperature in Celsius: ";
                cin >> value;
                cout << value << " C = " << cToK(value) << " K\n";
                break;
            }
            case 4: {
                cout << "Enter temperature in Kelvin: ";
                cin >> value;
                if (value < 0) {
                    cout << "Error: temperature cannot be below 0 K\n";
                } else {
                    cout << value << " K = " << kToC(value) << " C\n";
                }
                break;
            }
            // === КОНЕЦ БЛОКА ОБРАБОТКИ ===
            case 0:
                cout << "Work finished.\n";
                break;
            default:
                cout << "No such item.\n";
        }
    } while (choice != 0);
    return 0;
}