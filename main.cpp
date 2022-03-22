#include <iostream>
using namespace std;

class Employee{
public:
    string name;
    string company;
    int age;
    //function
    void present_yourself (){
        cout << "Name - " << name << endl;
        cout << "Company - " << company << endl;
        cout << "Age - " << age << endl;
    }
    //constructor
    Employee(string name_in, string company_in, int age_in){
        name = name_in;
        company = company_in;
        age = age_in;
    }
};

int main() {
    Employee employee1 = Employee("Giulia", "EPFL", 19);
    employee1.present_yourself();

    Employee employee2 = Employee("Elisa", "Sun", 27);
    employee2.present_yourself();

    employee1.present_yourself();
    return 0;
}
