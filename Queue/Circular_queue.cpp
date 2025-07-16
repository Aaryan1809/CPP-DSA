
// #include <bits/stdc++.h>
// using namespace std;

// #define size 5

// class Circular_queue
// {
// public:
//     int front, back;
//     int q[size];
//     Circular_queue()
//     {
//         front = -1;
//         back = -1;
//     }

//     void push(int val)
//     {
//         if ((back + 1) % size == front)
//         {
//             cout << "queue is full\n";
//         }

//         else
//         {
//             if (front == -1)
//             {
//                 front = 0;
//             }

//             back = (back + 1) % size;
//             q[back] = val;
//             // cout << front << endl;
//             // cout << back << endl;
//             // cout << q[front] << endl;
//             // cout << q[back] << endl;
//         }
//     }

//     int pop()
//     {
//         int ele;
//         if (front == -1)
//         {
//             cout << "Queue is empty nothing can be removed.\n";
//             return 0;
//         }

//         else
//         {
//             ele = q[front];
//             if (front == back)
//             {
//                 front = back = -1;
//             }

//             else
//             {
//                 front = (front + 1) % size;
//             }
//             cout << "Removed ";
//         }
//         return ele;
//     }

//     void display()
//     {
//         for (int i = 0; i <= back; i++)
//         {
//             cout << q[i] << " ";
//         }
//         cout << endl;
//     }
// };

// int main()
// {
//     Circular_queue a;
//     a.push(10); // f = 0 , r = 0
//     a.push(20); // f = 0 , r = 1
//     a.push(30);
//     a.push(40);
//     a.push(50);
//     a.display();

//     cout << a.pop() << endl;
//     cout << a.pop() << endl;
//     cout << a.pop() << endl;
//     cout << a.pop() << endl;
//     cout << a.pop() << endl;

//     a.push(60);
//     a.push(70);
//     a.push(80);
//     a.display();

//     cout << a.pop() << endl;
//     cout << a.pop() << endl;
//     cout << a.pop() << endl;

//     a.push(90);
//     a.push(100);
//     a.display();

//     cout << a.pop() << endl;
//     cout << a.pop() << endl;
//     a.display();
//     return 0;
// }

// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .

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
};

int main()
{
    Queue a;

    a.push(10);
    a.push(10);
    a.push(10);
    a.push(10);

    cout << a.pop();
    cout << a.pop();
    cout << a.pop();
    cout << a.pop();
    cout << a.pop();
    cout << a.pop();
    cout << a.pop();
    cout << a.pop();

    return 0;
}