#include <bits/stdc++.h>
using namespace std;

#define size 5

class Queue
{
    int queue[size];
    int back, front;

public:
    Queue()
    {
        front = -1;
        back = -1;
    }

    int push(int value)
    {
        if (back >= size - 1)
        {
            cout << "Queue is full.\n";
            return 0;
        }

        else
        {
            if (front == -1)
            {
                front = 0;
            }

            back++;
            queue[back] = value;
            cout << queue[back] << " added at : " << back << " position.\n";
            return 1;
        }
    }

    int pop()
    {
        if (front == -1)
        {
            cout << "Queue is empty nothing can be reomoved.";
        }

        else
        {
            cout << queue[back] << " removed.\n";
            back - front++;
            cout << front << endl;
            // cout << back << endl;
        }
    }
};

int main()
{
    Queue a;
    a.push(10);
    a.push(20);
    a.push(30);
    a.push(30);
    a.push(30);

    a.pop();
    a.pop();

    a.push(30);
    a.push(30);
    return 0;
}