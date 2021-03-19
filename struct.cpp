#include <iostream>
#include <string>
using namespace std;

    string name;
    string surname;
    int employeeNumber=0;
    string department;

struct Employee{

    string name;
    string surname;
    int employeeNumber;
    string department;
};

Employee george{"George", "Rodgers", 1254325, "IT"};
Employee matthew{"Matthew", "Clarke", 2354268, "HR"};
Employee sarah{"Sarah", "Medows", 6521538, "Development"};
Employee anita{"Anita", "Singh", 5678456, "Marketing"};
Employee patrick{"Patrick", "Smith", 5236863, "HR"};
Employee samantha{"Samantha", "Xi", 3046576, "Development"};
Employee bruce{"Bruce", "Vegas", 5476378, "Marketing"};
Employee riona{"Riona", "Ablah", 7953134, "IT"};


Employee whoAndWhere(){

    cout << "Employee number: " << george.employeeNumber << '\n';
    cout << george.name << george.surname << "works in the " << george.department << "department \n";

}
    
    

int main(){
    
    whoAndWhere();
    
    return 0;
    
}