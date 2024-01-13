#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    string name, id, semester;
    int admittedYear;
    int sinceAdmitted()
    {
        return 2024 - admittedYear;
    }

public:
    Student(string name, string id, string semester, int admittedYear)
    {
        this->name = name;
        this->id = id;
        this->semester = semester;
        this->admittedYear = admittedYear;
    }
    void studentDetails()
    {
        cout << "Student Name:\t" << name << endl;
        cout << "Student ID\t" << id << endl;
        cout << "Semester:\t" << semester << " semester" << endl;
        cout << "Admitted for:\t" << sinceAdmitted() << " years";
    }
};

int main()
{
    Student shamim("Shamim", "201-15-14000", "12th", 2020);
    shamim.studentDetails();
    return 0;
}