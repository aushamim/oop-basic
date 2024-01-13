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
};

class Dog : public Animal
{
public:
    Dog(string name) : Animal(name) {}
    void sound()
    {
        cout << "Bark" << endl;
    }
};

int main()
{
    Sheep s("Shaun the Sheep");
    s.intro();
    s.sound();

    cout << endl;

    Dog d("Courage the Cowardly Dog");
    d.intro();
    d.sound();
    return 0;
}