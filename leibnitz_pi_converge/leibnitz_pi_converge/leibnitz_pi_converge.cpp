#include <iostream>
#include <cmath>
#include <iomanip>

double CalculateSummation(int k) {
    double result;
    result = pow(-1, k);
    result = result / ((2.0 * k) + 1.0);
    result *= 4.0;

    return result;
}

double CalculatePi(int n) {
    double pi = 0.0;
    for (int i = 0; i <= n; ++i) {
        pi += CalculateSummation(i);
    }

    return pi;
}

int main()
{
    int value = 2; 

    while (value <= 1048576) {
        std::cout << "PI: " << std::setprecision(DBL_DIG) << CalculatePi(value) << "; value: " << value << std::endl;
        value *= 2;
    }
}
