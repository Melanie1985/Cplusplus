#include <iostream>
#include <string>
using namespace std;

void comp(){                                    //create a function
    int winner, second, third;                  //create variables and define them as integers
    string name1, name2, name3;                 //create variables and define them as strings
    int counter = 0;                            //create a variable for the counter

    cout << "Please enter winning score and name: ";    //get user input 
    cin >> winner >> name1;                             //takes in winning score and their name

    cout << "Please enter second place score and name: ";   
    cin >> second >> name2;                                 

    cout << "Please enter third place score and name: ";
    cin >> third >> name3;

    if(winner>=900 && winner<=1000)                     //if statements with the score ranges
{
    cout << name1 << " is the winner with a score of " << winner << "\n";   //outputs the winners name and the score
    counter+=1;                                                             //counts through each statement 
}    
    if(second>=800 && second<=900)
{
    cout << name2 << " is in second place with a score of " << second << "\n";
    counter+=1;
}
    if(third>=700 && third<=800)
{
    cout << name3 << " is in third place with a score of " << third << "\n";
    counter+=1;
} 
    else                                                                //else statement which outputs message if points scored aren't within the range 
{
    cout << "Not within the points range";
}    
    if(counter==3)                                                      //if statement which asks if the counter is equal to 3
{
    cout << "Well done to our finalists";                               //outputs final statement if all 3 statements above are true
}

}

int main(){                                                             //main function

    comp();

    return 0;
}