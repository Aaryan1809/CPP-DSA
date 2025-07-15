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
        // we can use both if statement but the when we use second we need to put a if in the else and reset the values to -1 ,
        // but in first we just need to put this if and nothing more and we will get correct ans.
        // if (front > back)
        if (front == back)
        {
            cout << "Queue is empty nothing can be removed.\n";
        }

        else
        {
            // for us
            cout << endl << q[front] << " removed from position : " << front << "\n";
            front = (front + 1) % size;

            // for user
            // cout << q[front] << " removed from position : " << front + 1 << "\n";
            // front++;
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
    return 0;
}