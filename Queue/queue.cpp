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
        // we can use both if statement but the when we use second we need to put a if in the else and reset the values to -1 ,
        // but in first we just need to put this if and nothing more and we will get correct ans.
        // if (front > back)
        if (front == -1)
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

    int peep(int pos)
    {
        if (front == -1)
        {
            cout << "\nQueue is Empty.";
        }

        // if (pos > back || pos < front)
        else if (pos < front + 1 || pos > back + 1)
        {
            cout << "\nNo valid position exist.\n";
        }

        else
        {
            cout << pos << " = " << queue[pos - 1] << endl;
        }
    }

    int update(int pos, int value)
    {
        if (front == -1)
        {
            cout << "\nQueue is Empty.";
        }

        else if (pos < front + 1 || pos > back + 1)
        {
            cout << "\nNo valid position exist.\n";
        }

        else
        {
            queue[pos - 1] = value;
            cout << "\nValue updated " << value << " at " << pos;
        }
    }

    void display()
    {
        if (front == -1)
        {
            cout << "\nQueue is Empty.";
        }

        else
        {
            for (int i = front; i <= back; i++)
            {
                cout << endl
                     << queue[i] << " ";
            }
        }
    }

    void peek()
    {
        if (front == -1)
        {
            cout << "\nQueue is Empty.";
        }   

        else
        {
            cout << endl
                 << queue[back];
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
    a.peek();

    a.display();

    // cout << a.front << endl
    // << a.back << endl;

    // a.peep(0);
    // a.peep(1);

    a.update(4, 10);
    a.display();

    return 0;
}