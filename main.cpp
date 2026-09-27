// Team project. Group PI-53.
// Team: Yaroslav (v. 61), Zahar (v. 59, tech lead).
#include <iostream>
// === БЛОК ПОДКЛЮЧЕНИЙ ===
// === КОНЕЦ БЛОКА ПОДКЛЮЧЕНИЙ ===
using namespace std;

int main() {
    int choice;
    do {
        cout << "\n=== Team project: calculations ===\n";
        // === БЛОК МЕНЮ ===
        // === КОНЕЦ БЛОКА МЕНЮ ===
        cout << "0. Exit\n";
        cout << "Choose item: ";
        cin >> choice;

        switch (choice) {
            // === БЛОК ОБРАБОТКИ ===
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
