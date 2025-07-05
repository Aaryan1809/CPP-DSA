// most imp rule of Stack

// *** LIFO = Last In First Out...

// means agar stack ma last value aapde 10 add kari hase ane display ma 1st value aapde joisu to aaopda ne last added value dekhadvi joie

#include <bits/stdc++.h>
using namespace std;

#define size 10
// asfaas
class Stack
{
private:
    int array[size];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    // push function to add value in the stack
    int push(int val)
    {
        if (top >= size - 1)
        {
            cout << "Stack is full new value cannot be added.";
            return 0;
        }

        else
        {
            top++;
            array[top] = val;
            cout << val << " is added to stack at position " << top + 1 << endl;
            ;
        }
    }

    // display to show all elements of the stack.
    int display()
    {
        if (top == -1)
        {
            cout << "\nStack is empty.";
        }

        else
        {
            cout << "\nStack is ";
            for (int a = 0; a <= top; a++)
            {
                cout << array[a] << " ";
            }
        }
    }

    // to remove the last added element of the stack
    int pop()
    {
        if (top <= -1)
        {
            cout << "\nStack is empty.";
        }

        else
        {
            cout << "\n"
                 << array[top] << " is removed from stack.";
            top--;
        }
    }

    // to watch the last element
    int peek()
    {
        if (top <= -1)
        {
            cout << "\nStack is empty.";
        }
        else
        {
            cout << "\nTop element is " << array[top];
        }
    }

    // to update position's element
    int update(int pos, int val)
    {
        if (pos <= 0 || pos > (top + 1))
        {
            cout << "\nNo position exist at " << pos;
        }

        else
        {
            array[top - pos + 1] = val;
            cout << "\nChanged value " << val << " at position " << pos;
        }
    }

    // to see a demanded positions value
    int peep(int position)
    {
        if (position > (top + 1) || position <= 0)
        {
            cout << "\nPosition does not exist in the array.\n";
        }

        else
        {
            cout << "\nValue = " << array[top - position + 1] << " at position " << position;
        }
    }
};

int main()
{
    Stack a;

    a.push(100);
    a.push(200);
    a.push(300);
    a.push(400);
    a.push(500);
    a.push(600);
    a.push(700);
    a.push(800);
    a.push(900);
    a.push(1000);

    a.peep(1);
    a.peep(2);
    a.peep(3);
    a.peep(4);
    a.peep(5);
    a.peep(6);
    a.peep(7);
    a.peep(8);
    a.peep(9);
    a.peep(10);

    a.display();

    a.pop();
    a.pop();
    a.pop();
    a.display();

    a.peek();

    a.update(7, 69);
    a.display();

    a.peek();
    return 0;
}