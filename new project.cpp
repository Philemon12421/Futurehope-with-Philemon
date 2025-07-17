#include <iostream>
#include <string>
#include <cmath>

int main()
{
    double baseSalary;
    double totalSales;
    double bonus;
    double totalpaycheck;
    double additionalBonus;
    int noOfServiceYears;

//input of the digits
    std::cout <<"enter your base salary :$";
    std::cin >> baseSalary;
    std::cout <<"enter your number of service year";
    std::cin >> noOfServiceYears;

    //total sales
    std::cout <<"enter your total sales :$";
    std::cin >> totalSales;

    //calculating the bonus from the number of service per years
    if (noOfServiceYears <= 5)
    {
        bonus = 10 * noOfServiceYears;
    } else
    {
        bonus = 20 * noOfServiceYears;
    }

    //calculating additionalBonus using the following formula
    if (totalSales < 5000)
    {
        additionalBonus = 0;
    }
    else if(totalSales >= 5000 && totalSales <= 10000)
    {
        additionalBonus = totalSales * 0.03;
    } else
    {
        additionalBonus = totalSales * 0.06;
    }


    //calculating the payCheck using the equation above
    totalpaycheck = baseSalary + bonus + additionalBonus;

   //output of the results for the paycheck
    std::cout << "\nPaycheck Summary: " << std::endl;
    std::cout << "base Salary: $"<<baseSalary << std::endl;
    std::cout << "Bonus: $"<<bonus <<std::endl;
    std::cout << "Additional Bonus: $" <<additionalBonus <<std::endl;
    std::cout << "Total Paycheck:" <<totalpaycheck <<std::endl;








    return 0;
}


