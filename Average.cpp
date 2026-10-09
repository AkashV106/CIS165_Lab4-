#include <iostream>

int main()
{
    double value1 = 28;
    double value2 = 32;
    double value3 = 37;
    double value4 = 24;
    double value5 = 33;
    double sum;
    double average;

    sum = value1 + value2 + value3 + value4 + value5;

    // divide the completed sum by the number of values
    average = sum / 5;

    std::cout << "The sum is " << sum << "\n";
    std::cout << "The average is " << average << "\n";

    return 0;
}
