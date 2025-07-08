#include <bits/stdc++.h>
using namespace std;

#define size 5

class Queue
{
    int queue[size];

public:
    int back, front;
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

            // for us
            // cout << queue[back] << " added at : " << back << " position.\n";

            // for user
            cout << queue[back] << " added at : " << back + 1 << " position.\n";
            return 1;
        }
    }

    int pop()
    {
        if (front == -1 || front > back)
        {
            cout << "Queue is empty nothing can be reomoved.\n";
        }

        else
        {
            // for us
            // cout << queue[front] << " removed from position : " << front  << "\n";

            // for user
            cout << queue[front] << " removed from position : " << front + 1 << "\n";
            front++;

            if (front > back)
            {
                front = -1;
                back = -1;
            }
        }
    }
};

int main()
{
    Queue a;
    a.push(10);
    a.push(20);
    a.push(30);
    a.push(40);
    a.push(50);
    a.push(60);

    a.pop();
    a.pop();
    a.pop();
    a.pop();
    a.pop();
    a.pop();

    cout << a.back << " " <<  a.front << endl;

    a.push(90);
    a.push(100);
    return 0;
}