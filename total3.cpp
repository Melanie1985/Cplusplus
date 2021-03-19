#include <iostream>

int main()
{
   // type of value returned by function, followed by variables 
   int firstnumber{}, secondnumber{}, thirdnumber{}, total{};

   std::cout << "Enter three numbers to add\n";

    // taking in the input of the three numbers
   std::cin >> firstnumber>> secondnumber >> thirdnumber;

    // adding the three numbers together
   total = firstnumber + secondnumber + thirdnumber ;

   // displaying the total of the three numbers
   std::cout <<"Total of your three numbers is: " << total << "\n";
   
   return 0;
}

  