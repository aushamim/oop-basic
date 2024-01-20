#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name, location;
    int age;
    Person(string name, int age, string location)
    {
        this->name = name;
        this->age = age;
        this->location = location;
    }
    void personInfo()
    {
        cout << "I am " << name << ". I am " << age << " years old. I live in " << location << endl;
    }
};

class Company
{
public:
    string name, location;
    Company(string name, string location)
    {
        this->name = name;
        this->location = location;
    }
    void companyInfo()
    {
        cout << "This is " << name << ". It is situated in " << location << endl;
    }
};

class Employee : public Person, public Company
{
public:
    Employee(string pName, int pAge, string pLocation, string cName, string cLocation) : Person(pName, pAge, pLocation), Company(cName, cLocation) {}
};

int main()
{
    Employee shamim("Shamim", 23, "Cox's Bazar", "Phitron", "Dhaka");
    shamim.personInfo();
    shamim.companyInfo();
    return 0;
}