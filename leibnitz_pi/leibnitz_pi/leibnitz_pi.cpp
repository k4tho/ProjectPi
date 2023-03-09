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
    std::cout << "Enter value to calculate pi: ";
    double value1;
    std::cin >> value1;
    std::cout << "pi (approx) = " << std::setprecision(DBL_DIG) << CalculatePi(value1) << std::endl;
    std::cout << "pi (actual) = " << "3.141592653589793" << std::endl;
    std::cout << "Decimal digits of precision: " << DBL_DIG << std::endl;
    std::cout << "Number of base 2 mantissa digits of double precision floating point value: " << DBL_MANT_DIG << std::endl;
    std::cout << "Next representable number from 3.141592653589793: " << std::nextafter(3.141592653589793, 3.14) << std::endl;
}

