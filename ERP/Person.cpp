#pragma once
#include<iostream>
using namespace std;
class Person{
private:
string name;
int age;
string address;
public:
Person(string n, int a, string ad)
: name(n), age(a), address(ad)
{}
void setName(string n){name=n;}
void setAge(int a){age=a;}
void setAddress(string ad){address=ad;}
string getName(){return name;}
int getAge(){return age;}
string getAddress(){return address;}
void display(){
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Address: " << address << endl;
}
};