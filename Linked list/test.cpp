#include <bits/stdc++.h>
using namespace std;
typedef struct linkedlist tru;
struct linkedlist
{
    int id;
    struct linkedlist *next;
} *node, *head, *last, *temp;

void createatbegin()
{
    node = (tru *)malloc(sizeof(tru));
    cout << "Enter id : ";
    cin >> node->id;
    node->next = '\0';
    if (head == '\0')
        head = last = node;
    else
    {
        node->next = head;
        head = node;
    }
}

void createatlast()
{
    node = (tru *)malloc(sizeof(tru));
    cout << "Enter id : ";
    cin >> node->id;
    node->next = '\0';
    if (head == '\0')
        head = last = node;
    else
    {
        last->next = node;
        last = node;
    }
}

void disp()
{
    temp = head;
    while (temp != '\0')
    {
        cout << temp->id << "-->";
        temp = temp->next;
    }
}

void oddevedisp()
{
    temp = head;
    while (temp != '\0')
    {
        if ((temp->id) % 2 == 0)
            cout << "EVEN \n";
        else
            cout << "ODD\n";
        cout << "ID : " << temp->id << endl;
        temp = temp->next;
    }
}

void condieven()
{
    if (last->id % 2 == 0)
    {
        node = (tru *)malloc(sizeof(tru));
        cout << "Enter id : ";
        cin >> node->id;
        node->next = '\0';
        if (head == '\0')
            head = last = node;
        else
        {
            last->next = node;
            last = node;
        }
    }
    else
    {
        cout << "The value is odd at last -- Can't create\n";
    }
}

void condiodd()
{
    if (last->id % 2 != 0)
    {
        node = (tru *)malloc(sizeof(tru));
        cout << "Enter id : ";
        cin >> node->id;
        node->next = '\0';
        if (head == '\0')
            head = last = node;
        else
        {
            last->next = node;
            last = node;
        }
    }
    else
    {
        cout << "The value is even at last -- Can't create\n";
    }
}

int main()
{
    int ch;
    cout << "1.Add at begin\n2.Add at last\n3.Condition add for even\n4.Condition add for odd\n5.Display\n6.Display odd or even\nEnter Choice :  ";
    cin >> ch;
    switch (ch)
    {
    case 1:
        createatbegin();
        main();
        break;
    case 2:
        createatlast();
        main();
        break;
    case 3:
        condieven();
        main();
        break;
    case 4:
        condiodd();
        main();
        break;
    case 5:
        disp();
        main();
        break;
    case 6:
        oddevedisp();
        main();
        break;
    }
}