#include <iostream>


int getValueFromUser()   //function to ask a user to input a number and then return the input
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    return input;
}

int main()                
{
    int input {getValueFromUser()};     //looks for this first and runs the code above
    int input2 {getValueFromUser()};    //looks for this next and runs code 
    
    int sum = input+input2;             //assigned a variable sum to add the two variables above together

    std::cout << input << " + " << input2 << " = " << sum;  //outputs the first input, then the second and then the sum
    

    return 0;
}

 