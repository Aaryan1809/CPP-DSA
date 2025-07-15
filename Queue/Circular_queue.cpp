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

            back = (back + 1) % size;
            q[back] = val;
            // cout << front << endl;
            // cout << back << endl;
            // cout << q[front] << endl;
            // cout << q[back] << endl;
        }
    }

    int pop()
    {
        int ele;
        if (front == -1)
        {
            cout << "Queue is empty nothing can be removed.\n";
            return 0;
        }

        else
        {
            ele = q[front];
            if (front == back)
            {
                front = back = -1;
            }

            else
            {
                front = (front + 1) % size;
            }
        }
        return ele;
    }

    void display()
    {
        for (int i = 0; i < size; i++)
        {
            cout << q[i] << " ";
        }
        cout << endl;
        
    }
};

int main()
{
    Circular_queue a;
    a.push(10); // f= 0 , r = 0
    a.push(20); // f= 0 , r = 1
    a.push(30);
    a.push(40);
    a.push(50);
    a.display();
    
    cout << a.pop() << endl;
    cout << a.pop() << endl;
    cout << a.pop() << endl;
    cout << a.pop() << endl;
    cout << a.pop() << endl;
    
    a.push(60);
    a.push(70);
    a.push(80);
    a.display();
    
    cout << a.pop() << endl;
    cout << a.pop() << endl;
    cout << a.pop() << endl;

    a.push(90);
    a.push(100);

    a.display();
    return 0;
}