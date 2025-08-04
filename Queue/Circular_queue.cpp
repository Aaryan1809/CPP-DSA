#include <bits/stdc++.h>
using namespace std;

#define max 5

class Queue
{
public:
    int front, rear, q[max];
    Queue()
    {
        front = -1;
        rear = -1;
    }

    void push(int val)
    {
        if (front == rear + 1 || rear == max - 1 && front == 0)
        {
            cout << "Queue is full\n";
        }

        else
        {
            if (front == -1)
            {
                front++;
            }

            if (rear == max - 1)
            {
                rear = 0;
            }
            else
            {
                rear++;
            }
            q[rear] = val;
        }
    }

    int pop()
    {
        int ans;
        if (rear == -1 && front == -1)
        {
            cout << "Queue is empty.\n";
        }

        else
        {
            ans = q[front];

            if (front == rear)
            {
                front = -1;
                rear = -1;
            }

            if (front >= max - 1)
            {
                front = 0;
            }

            else
            {
                front++;
            }

            return ans;
        }
    }

    void disp()
    {
        if (rear == -1)
        {
            cout << "\nStack is empty.";
        }

        else
        {
            if (front == 0 && rear == max - 1)
            {
                for (int a = 0; a <= rear; a++)
                {
                    cout << q[rear - a] << " ";
                }
            }

            else
            {
                for (int a = front; a <= rear; a++)
                {
                    cout << q[rear - a] << " ";
                }

                for (int a = 0; a <= front; a++)
                {
                    cout << q[rear - a] << " ";
                }
            }
        }
    }
};

int main()
{
    Queue a;

    return 0;
}