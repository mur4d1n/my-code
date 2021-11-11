//This prog is just simple calculator for expressions written in reverse polish notation
//It supports mathematical operations such as add, subb, mul and div
//It gets an expression from console as input and returns to console result of operations in expression as output

#include <iostream>
#include <sstream>
#include <vector>

int main()
{
    double result = 0;
    std::string tmp;
    std::vector<double> numbers(0);
    int number = 0;

    getline(std::cin, tmp);
    std::string n = "";
    std::stringstream x;
    x << tmp;

    while (x >> n) //Reading and processing of every number and symbol from input
    {
        if (n != "+" && n != "-" && n != "*" && n != "/") //There we are working with numbers
        {
            for (int i = 0; i < n.size(); i++)
            {
                number *= 10;
                number += ((char)n[i] - '0');
            }

            numbers.push_back(number);
            number = 0;

            continue;
        }
        else //And there we are working with operations
        {
            if (n == "+")
                result = numbers[numbers.size() - 2] + numbers[numbers.size() - 1];
            else if (n == "-")
                result = numbers[numbers.size() - 2] - numbers[numbers.size() - 1];
            else if (n == "*")
                result = numbers[numbers.size() - 2] * numbers[numbers.size() - 1];
            else if (n == "/")
                result = numbers[numbers.size() - 2] / numbers[numbers.size() - 1];

            numbers.pop_back();
            numbers.pop_back();

            numbers.push_back(result);
        }
    }

    std::cout << result; //And then we're showing the result
}
