#include <iostream>
#include <string>
using namespace std;
​
int main()
{
​
//create a variable and array along with its elements
string flowers[9]{"Daisies", "Gardenias", "Lilies", "Orchids", "Roses", "Sunflowers", "Tulips", "Dahlias", "Peonies"};
​
//for loop to iterate through each element
for(int i=0; i < 9; i++)
​
//prints out list of flowers using the index
cout << flowers[i] << ',';
​
return 0;
​
}