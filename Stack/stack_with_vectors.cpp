#include <bits/stdc++.h>
using namespace std;

class Stack
{
    vector<int> arr;
    int top;

public:
    Stack()
    {
        top = -1;
    }

    int push(int value)
    {
        top++;
        arr.push_back(value);
        cout << value << " is added \n";
        // cout << value << " is added at index " << top + 1 << "\n";
    }

    int pop()
    {
        if (top < 0)
        {
            cout << "\nNo element present in stack to remove.\n";
        }

        else
        {
            cout << "\n"
                 << arr[top] << " is removed. \n";
                 cout << top << endl;
            arr.pop_back();
        }
    }

    int peek()
    {
        if (top < 0)
        {
            cout << "\nNo element present in stack to Show.\n";
        }

        else
        {
            cout << "\n"
                 << arr[top] << " is the top element of the stack.\n";
        }
    }

    int peep(int pos)
    {
        int x = arr.size();
        if (pos <= 0 || pos > x)
        {
            cout << "\nNo element present at " << pos << " in stack to Show.\n";
        }

        else
        {
            cout << "\n"
                 << arr[x - pos] << " is at " << pos << " position.\n";
        }
    }

    int update(int pos, int value)
    {
        if (pos <= 0 || pos > arr.size())
        {
            cout << "\nNo element present at " << pos << " in stack to Update.\n";
        }

        else
        {
            arr[top - pos + 1] = value;
            cout << "\n"
                 << value << " is updated at " << pos << "\n";
        }
    }

    int display()
    {
        if (arr.empty())
        {
            cout << "\nStack is empty.\n";
        }

        else
        {
            for (int a = 0; a < arr.size(); a++)
            {
                cout << arr[top - a] << endl;
            }
        }
    }
};

int main()
{
    Stack a;

    a.push(10);
    a.push(20);
    a.push(30);
    a.push(300);
    a.push(3097);
    // a.push(30789);
    // a.push(30567);
    // a.push(334560);
    // a.push(3235640);
    a.display();

    a.pop();
    // a.pop();
    // a.pop();
    // a.pop();
    // a.pop();
    // a.display();

    a.peek();

    a.peep(4);

    a.update(0, 69);
    a.display();
    return 0;
}