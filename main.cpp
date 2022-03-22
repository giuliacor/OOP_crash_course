#include <iostream>
using namespace std;
//abstract class
class AbstractEmployee{ //just one rule
    virtual void askForPromotion()=0; //make the function obligatory
};

class Employee:AbstractEmployee{
private: //encapsulation
    string name;
    string company;
    int age;
public:
    void setName(string name_in){   //setter
        name = name_in;
    }
    string getName(){   //getter
        return name;
    }
    void setCompany(string company_in){   //setter
        company = company_in;
    }
    string getCompany(){   //getter
        return company;
    }
    void setAge(int age_in){   //setter
        if(age_in<18){
            age = age_in;
        }
    }
    int getAge(){   //getter
        return age;
    }
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
    //implement the virtual function
    void askForPromotion(){
        if (age>25){
            cout << name << " got promoted!" << endl;
        }else{
            cout << name << ", sorry, no promotion. " << endl;
        }
    }
};

int main() {
    Employee employee1 = Employee("Giulia", "EPFL", 19);
    employee1.present_yourself();

    Employee employee2 = Employee("Elisa", "Sun", 27);
    employee2.present_yourself();

    employee1.present_yourself();

    employee1.setAge(39);
    cout << employee1.getName() << " is " <<
            employee1.getAge() << " years old. " << endl;

    //test the promotion
    employee1.askForPromotion();
    employee1.askForPromotion();
    return 0;
}
