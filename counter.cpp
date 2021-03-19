#include <iostream>
#include <string>
using namespace std;


void counter(){
    int count=1;                                    //declare variable called count 
    while (count < 10)                              //while loop that states if count is less than 10 print out statement
    {
        cout << "The number is " << count << '\n';
        

    
    
    if (count==5){                                  //if statement that states when count is equal to 5 then print statement to terminal
        
        
        cout << "We are halfway through" << '\n';
    }
         count++;                                      //counter to iterate through
    }
            
    
            cout << "This is the end of the program";       //statement to say its the end of the program once counter reaches 10


}





int main(){
    
   counter();
  

    return 0;
}