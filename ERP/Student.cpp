#include "Person.cpp"
using namespace std;
class Student: public Person{
private:
double gpa;
public:
Student(string name, int age, string address, double g): Person(name, age, address){
    gpa=g;
}
void setGpa(double g){gpa=g;}
double getGpa(){
    return gpa;
}
void display(){
    Person::display();
    cout << "GPA: " << gpa << endl;
}
};
