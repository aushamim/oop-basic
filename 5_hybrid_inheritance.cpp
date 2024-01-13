#include <bits/stdc++.h>
using namespace std;

class GrandParent
{
public:
    string name;
    GrandParent(string name)
    {
        this->name = name;
    }
    void grandParentName()
    {
        cout << name;
    }
};

class Parent : public GrandParent
{
public:
    string name;
    Parent(string name, string grandParentName) : GrandParent(grandParentName)
    {
        this->name = name;
    }
    void parentName()
    {
        cout << name;
    }
};

class Person : public Parent
{
public:
    string name;
    Person(string name, string parentName, string grandParentName) : Parent(parentName, grandParentName)
    {
        this->name = name;
    }
    void personName()
    {
        cout << name;
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
    void companyName()
    {
        cout << name;
    }
    void companyLocation()
    {
        cout << location;
    }
};

class Employee : public Person, public Company
{
public:
    Employee(string pName, string ppName, string pgpName, string cName, string cLocation) : Person(pName, ppName, pgpName), Company(cName, cLocation) {}
};

int main()
{
    Employee shamim("Shamim", "Bashir Ahmed", "Badarujjaman", "Phitron", "Dhaka");

    cout << "My name is ";
    shamim.personName();

    cout << endl
         << "My father's is ";
    shamim.parentName();

    cout << endl
         << "My grandfather's is ";
    shamim.grandParentName();

    cout << endl
         << "I work at ";
    shamim.companyName();

    cout << endl
         << "It is situated in ";
    shamim.companyLocation();

    return 0;
}