#include <iostream>
#include <iomanip>

int main() {
    double m, h;
    std::cin >> m >> h;

    double bmi = m / (h * h);

    if (bmi < 18.5) {
        std::cout << "Underweight" << std::endl;
    }
    else if (bmi < 24) {
        std::cout << "Normal" << std::endl;
    }
    else {
        std::cout << std::setprecision(6) << bmi << std::endl;
        std::cout << "Overweight" << std::endl;
    }

    return 0;
}