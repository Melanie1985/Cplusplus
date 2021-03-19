#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//create function to determine if username and password supplied match that of the file to confirm if correct info given
bool IsLoggedIn(){

//create 4 variables that will hold data gicen by user. 2 for username and 2 for passwords for comparison
    string username, password, un, pw;

//create statements that asks user for a username and password and save to two of the variables
    cout << "Please enter your username: " << '\n';
    cin >> username;

    cout << "Please enter your password: " << '\n';
    cin >> password;

//use <ifstream> to read the files that have been created
    ifstream read("C:\\" + username + ".txt");

//read the text to compare the username input to the one the user entered and same for password
    getline(read, un);
    getline(read, pw);

//IF statement to compare the username with the one the user entered, same with password. If they both match return true, if not return false
    if(username==un && password==pw){    
        return true;
    }
    else{ 
        return false;
    }  

}
/*in main(), create instructions the user sees when program is executed.
Create integer called 'choice', terminal output will be 1.Register 2.Login Please choose:
save input into 'choice' variable*/
int main(){

    int choice;

    cout << "1: Register" << '\n' << "2: Login" << '\n' << "Please choose: ";
    cin >> choice;

    /*create if statement that if the user chooses 1 (Register), they will register by 
    choosing a username and password. Saved to variables we created earlier*/
    if(choice == 1)
    {
        string username, password;

        cout << "Select a username; "; cin >> username;
        cout << "Select a password; "; cin >> password;

    //Once username and password is saved, create the file
    fstream my_file;

    //save file as a text document called 'confidential'
    my_file.open("confidential.txt", ios::out);

    //within this file, we will save the username and password
    my_file << username << endl << password;

    //close the file and call the main() function again so the program continues
    my_file.close();

    }

    //main();

    /*if choice==2 (login), go to IsLoggedIn() function to see whether username and 
    password match the ones in the file we created to let them in or not. Return value of 
    IsLoggedIn() will be saved as a Boolean to the variable 'status'*/
    else if(choice == 2)
    {
        bool status = IsLoggedIn();


    /*if status not true we need to print to the console a messgae, pause the system and 
    then close the program*/
    if (!status)
    {
        cout << "False Login!" << endl;
        system("PAUSE");
        return 0;
    }

    //if status is true then it returns a successful login and the program ends
    if(status){
        cout << " Successfully logged in!" << endl;
        system("PAUSE");
    }

    }
    
    return 1;



    
}     

