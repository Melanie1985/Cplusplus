#include <iostream>

int main()
{
    //asks the user to enter an integer
    std::cout << "Enter an integer: ";
    //takes the integer in using a variable
    int x{};
    //uses the number saved in the variable
    std::cin >> x;
    //outputs the string and then takes the stored variable and times it by 2
    std::cout << "Double that number is;  "<< x*2<< "\n";
    //returns the statement if it is working properly
    return 0;

}