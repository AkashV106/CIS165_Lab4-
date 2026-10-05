#include <iostream>
int main()
{

    const double rise = 1.5;
    double yr1,yr2,yr3,rise1,rise2,rise3;
    yr1=5;
    yr2=7;
    yr3=10;
    rise1=yr1*rise;
    rise2=yr2*rise;
    rise3=yr3*rise;
    std::cout<<"The water level will rise "<<rise1<<" millimeters after "<<yr1<<" years\n";
    std::cout<<"The water level will rise "<<rise2<<" millimeters after "<<yr2<<" years\n";
    std::cout<<"The water level will rise "<<rise3<<" millimeters after "<<yr3<<" years\n";


    return 0;
}
