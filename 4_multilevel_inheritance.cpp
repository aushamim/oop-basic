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

class Child : public Parent
{
public:
    string name;
    Child(string name, string parentName, string grandParentName) : Parent(parentName, grandParentName)
    {
        this->name = name;
    }
    void childName()
    {
        cout << name;
    }
};

int main()
{
    Child shamim("Shamim", "Bashir Ahmed", "Badarujjaman");

    cout << "My name is ";
    shamim.childName();

    cout << endl
         << "My father's is ";
    shamim.parentName();

    cout << endl
         << "My grandfather's is ";
    shamim.grandParentName();
    return 0;
}