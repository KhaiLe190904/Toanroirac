#include "Person.cpp"
using namespace std;
class Teacher : public Person{
private: 
int salary; 
public:
Teacher(string name, int age, string address, int s): Person(name, age, address){
    salary=s;
}
void setSalary(int s){salary=s;}
double getSalary(){
    return salary;
}
void display(){
    Person::display();
    cout << "Salary: " << salary << endl;
}
};