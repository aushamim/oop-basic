#include <bits/stdc++.h>
using namespace std;

class Animal
{
public:
    string name;
    Animal(string name)
    {
        this->name = name;
    }
    void intro()
    {
        cout << "My name is " << name << endl;
    }
};

class Sheep : public Animal
{
public:
    Sheep(string name) : Animal(name) {}
    void sound()
    {
        cout << "Baa" << endl;
    }

    friend ostream &operator<<(ostream &os, const Sheep &sheep)
    {
        os << "Sheep Class";
        return os;
    }
};

int main()
{
    Sheep s("Shaun the Sheep");
    s.intro();
    s.sound();
    cout << s << endl;
    return 0;
}