#include <bits/stdc++.h>
using namespace std;

#define size 5

class Circular_queue
{

public:
    int front, back, q[size];
    Circular_queue()
    {
        front = -1;
        back = -1;
    }

    void push(int val)
    {
        if ((back + 1) % size == front)
        {
            cout << "queue is full\n";
        }

        else
        {
            if (front == -1)
            {
                front = 0;
            }
            cout << endl;

            back = (back + 1) % size;
            q[back] = val;
            cout << front << endl;
            cout << back << endl;
            cout << q[front] << endl;
            cout << q[back] << endl;
        }
    }

    int pop()
    {
        if (front == -1)
        {
            cout << "Queue is empty nothing can be removed.\n";
        }

        else
        {
            cout << endl
                 << q[front] << " removed from position : " << front + 1 << "\n";

            if (front == back)
            {
                front = back = -1;
            }

            else
            {
                front = (front + 1) % size;
            }
        }
    }
};

int main()
{
    Circular_queue a;
    a.push(10);
    a.push(20);
    a.push(30);
    a.push(40);
    a.push(50);

    a.pop();
    a.pop();
    a.pop();

    a.push(60);
    a.push(70);
    a.push(70);
    return 0;
}