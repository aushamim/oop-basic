#include <bits/stdc++.h>
using namespace std;

class Calculator
{
public:
    int add(int num, int num2)
    {
        return num + num2;
    }
    int add(int num, int num2, int num3)
    {
        return num + num2 + num3;
    }
};

int main()
{
    Calculator c;
    cout << c.add(1, 2) << endl;
    cout << c.add(1, 2, 3) << endl;
    return 0;
}