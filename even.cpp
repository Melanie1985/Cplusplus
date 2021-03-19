#include <iostream>
using namespace std;

void even3(){


    for(int i = 0;i<30;i++)         //for loop to loop through numbers 0 - 30
    {
        if(i%2==0)                  //if statement that states if i is divisible by 2 then its an even number  
        cout << (i*3) << '\n';      // prints to the terminal each even number * 3
    }
     
   
}

int main()          
{
    even3();                        //calls the function

return 0;

}


