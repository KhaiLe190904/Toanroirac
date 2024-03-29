#include "Person.cpp"
#include "Student.cpp"  
#include "Teacher.cpp"
int main(){
    Student k("Khai", 18, "Tuan Giao", 3.75);
    Teacher t("Thanh", 35, "Lao Cai", 30);
    k.display();
    t.display();
}