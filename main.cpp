// Team project. Group PI-53.
// Team: Yaroslav (v. 61), Vorobev (v. 92), Zahar (v. 59, tech lead).
#include <iostream>
// === БЛОК ПОДКЛЮЧЕНИЙ ===
#include "tiko.h"    // Функции варианта 59
#include "friend.h"  // Функции варианта 61 (cToK, kToC)
#include "vorobev.h" // Функции варианта 92
// === КОНЕЦ БЛОКА ПОДКЛЮЧЕНИЙ ===
using namespace std;

int main() {
    int choice;
    double value, dist, consumption, fuel, price;
    do {
        cout << "\n=== Team project: calculations ===\n";
        // === БЛОК МЕНЮ ===
        cout << "1. Square root (Heron's method)\n";
        cout << "2. Cube root\n";
        cout << "3. Celsius - Kelvin\n";
        cout << "4. Kelvin - Celsius\n";
        cout << "5. Calculate required fuel\n";
        cout << "6. Calculate trip cost\n";
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
            case 5:
                cout << "Enter distance (km): ";
                cin >> dist;
                cout << "Enter fuel consumption (L/100km): ";
                cin >> consumption;
                if (dist < 0 || consumption <= 0) {
                    cout << "Error: please enter positive values!\n";
                }
                else {
                    cout << "Required fuel: " << fuelNeeded(dist, consumption) << " L\n";
                }
                break;

            case 6:
                cout << "Enter fuel amount (L): ";
                cin >> fuel;
                cout << "Enter price per 1 liter: ";
                cin >> price;
                if (fuel < 0 || price < 0) {
                    cout << "Error: please enter non-negative values!\n";
                }
                else {
                    cout << "Trip cost: " << tripCost(fuel, price) << " currency units\n";
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
