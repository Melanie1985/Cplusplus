#include <iostream>
using namespace std;

void odd()
{
    int oddSum{}; //declaring and initialising my variable oddSum

    for(int x=0; x<31; x++){      //for loop used to iterate 1 onto number inputted
        if(x%2==1)                  //if statement which sees if the number inputted is an odd number (not divisible by 2) 
        oddSum += x;                 //increment oddSum by 1
    }
    
    cout << oddSum;     //terminal shows the sum of the odd numbers
}


int main(){

    odd();

    return 0;
}