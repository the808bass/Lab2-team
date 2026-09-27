#include "tiko.h"
#include <cmath>

// Square root by Heron's method
double sqrtHeron(double x) {
    if (x < 0) return -1.0;
    if (x == 0.0) return 0.0;
    double prev = x;
    double next = (prev + x / prev) / 2.0;
    const double eps = 1e-9;
    while (fabs(next - prev) > eps) {
        prev = next;
        next = (prev + x / prev) / 2.0;
    }
    return next;
}

// Cube root by Newton's method
double cubeRoot(double x) {
    if (x == 0.0) return 0.0;
    double sign = (x < 0) ? -1.0 : 1.0;
    double ax = fabs(x);
    double prev = ax;
    double next = (2.0 * prev + ax / (prev * prev)) / 3.0;
    const double eps = 1e-9;
    while (fabs(next - prev) > eps) {
        prev = next;
        next = (2.0 * prev + ax / (prev * prev)) / 3.0;
    }
    return sign * next;
}
