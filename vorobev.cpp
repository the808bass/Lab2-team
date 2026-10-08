#include "vorobev.h"
#include <iostream>

double fuelNeeded(double dist, double consumption) {
    if (dist < 0 || consumption <= 0) return -1.0; // Защита от некорректных данных
    return (dist * consumption) / 100.0;
}

double tripCost(double fuel, double price) {
    if (fuel < 0 || price < 0) return -1.0; // Защита от некорректных данных
    return fuel * price;
}