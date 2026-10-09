#include <iostream>

int main()
{
    const double ANNUAL_RISE_MM = 1.5;
    double years1 = 5;
    double years2 = 7;
    double years3 = 10;
    double rise1 rise2 rise3;

    // rise in millimeters = years * annual rate
    rise1 = years1 * ANNUAL_RISE_MM;
    rise2 = years2 * ANNUAL_RISE_MM;
    rise3 = years3 * ANNUAL_RISE_MM;

    std::cout << "After " << years1 << " years, the ocean will be " << rise1 << " millimeters higher\n";
    std::cout << "After " << years2 << " years, the ocean will be " << rise2 << " millimeters higher\n";
    std::cout << "After " << years3 << " years, the ocean will be " << rise3 << " millimeters higher\n";

    return 0;
}
