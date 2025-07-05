#include <bits/stdc++.h>
using namespace std;

class Stack
{
    vector<char> name;
    int top;

public:
    Stack()
    {
        top = -1;
    }

    int push(char value)
    {
        top++;
        name[top] = value;
        cout << value << " is added";
    }

    int display()
    {
        for (int i = 0; i < name.size(); i++)
        {
            cout << name[top - i] << endl;
        }
        }
};

int main()
{
    Stack a;

    a.push('a');
    a.push('a');
    a.push('r');
    a.push('y');
    a.push('a');
    a.push('n');
 
    a.display();
    return 0;
}