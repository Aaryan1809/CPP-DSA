// // most imp rule of Stack

// // *** LIFO = Last In First Out...

// // means agar stack ma last value aapde 10 add kari hase ane display ma 1st value aapde joisu to aaopda ne last added value dekhadvi joie

// #include <bits/stdc++.h>
// using namespace std;

// #define size 10
// // asfaas
// class Stack
// {
// private:
//     int array[size];
//     int top;

// public:
//     Stack()
//     {
//         top = -1;
//     }

//     // push function to add value in the stack
//     void push(int val)
//     {
//         if (top >= size - 1)
//         {
//             cout << "Stack is full new value cannot be added.";
//         }

//         else
//         {
//             top++;
//             array[top] = val;
//             cout << val << " is added to stack at position " << top + 1 << endl;
//         }
//     }

//     // display to show all elements of the stack.
//     int display()
//     {
//         if (top == -1)
//         {
//             cout << "\nStack is empty.";
//         }

//         else
//         {
//             cout << "\nStack is ";
//             for (int a = 0; a <= top; a++)
//             {
//                 cout << array[top - a] << " ";
//             }
//         }
//     }

//     // to remove the last added element of the stack
//     int pop()
//     {
//         if (top <= -1)
//         {
//             cout << "\nStack is empty.";
//             return -1;
//         }

//         else
//         {
//             int reply = array[top];
//             cout << "\n"
//                  << array[top] << " is removed from stack.";
//             top--;
//             return reply;
//         }
//     }

//     // to watch the last element
//     int peek()
//     {
//         if (top <= -1)
//         {
//             cout << "\nStack is empty.";
//         }
//         else
//         {
//             cout << "\nTop element is " << array[top];
//         }
//     }

//     // to update position's element
//     int update(int pos, int val)
//     {
//         if (pos <= 0 || pos > (top + 1))
//         {
//             cout << "\nNo position exist at " << pos;
//         }

//         else
//         {
//             array[top - pos + 1] = val;
//             cout << "\nChanged value " << val << " at position " << pos;
//         }
//     }

//     // to see a demanded positions value
//     int peep(int position)
//     {
//         if (position > top - position + 1)
//         {
//             cout << "\nPosition does not exist in the array.\n";
//         }

//         else
//         {
//             cout << "\nValue = " << array[top - position + 1] << " at position " << position;
//         }
//     }

//     int rev_display()
//     {
//         if (top == -1)
//         {
//             cout << "\nStack is empty.";
//         }

//         else
//         {
//             cout << "\nStack is ";
//             for (int a = 0; a <= top; a++)
//             {
//                 cout << array[a] << " ";
//             }
//         }
//     }
// };

// int main()
// {
//     Stack a;
//     int ch, val, ans;
//     while (1)
//     { // menu
//         cout << "\n1.for Push.";
//         cout << "\n2.for Pop.";
//         cout << "\n3.for Peep.";
//         cout << "\n4.for Change.";
//         cout << "\n5.for exit.";

//         cout << "\nEnter choice : ";
//         cin >> ch;

//         switch (ch)
//         {
//         case 1:
//             cout << "\nEnter value";
//             cin >> val;
//             a.push(val);
//             break;

//         case 2:
//             ans = a.pop();
//             if (ans != -1)
//                 cout << ans << " is deleted.\n";
//             break;

//         case 3:

//         default:
//             break;
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define MAX 5
int top = -1;
int arr[MAX];

void push(int val)
{
    if (top == MAX - 1)
        cout << "\nOverflow.";
    else
    {
        top++;
        arr[top] = val;
    }
}

int pop()
{
    if (top == -1)
        cout << "\nUnderflow.";
    else
    {
        int ans = arr[top];
        top--;
        return ans;
    }
}

void search()
{
    int s;
    cout << "search ele : ";
    cin >> s;

    int temp = top;

    while (temp != -1)
    {
        if (s == arr[temp])
        {
            cout << arr[temp];
        }
        temp--;
    }
}

void update(int val, int pos)
{
    if (pos > MAX || pos <= -1)
    {
        cout << "invalid ";
    }

    else
    {
        arr[top - pos + 1] = val;
    }
}

void display()
{
    for (int i = 0; i <= top; i++)
    {
        cout << arr[i] << " ";
    }
}

void display2()
{
    for (int i = 0; i < MAX; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    push(10);
    push(10);
    push(10);
    push(10);
    push(10);
    display();
    search();
    return 0;
}