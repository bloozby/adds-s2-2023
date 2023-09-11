#ifndef BIGNUMBERCALC_H
#define BIGNUMBERCALC_H

#include <list>
#include <string>

class BigNumCalc
{
private:
    /* data */
public:
    BigNumCalc();
    ~BigNumCalc();
    std::list<int> buildBigNum(std::string numString); //A method that creates a list representing the provided string. For example, a string "12345" would become a list with elements 1,2,3,4, and 5 respectively.
    std::list<int> add(std::list<int> num1, std::list<int> num2);
    std::list<int> sub(std::list<int> num1, std::list<int> num2);
    std::list<int> mul(std::list<int> num1, std::list<int> num2);
};



#endif