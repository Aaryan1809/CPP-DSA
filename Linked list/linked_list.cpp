#include <iostream>
#include <stdlib.h>
using namespace std;
int Count = 0;
// means our user defined data type
// what this node can store so it can store 1 name and address to next node
struct node
{
    char name[50];
    node *next;
} *head, *tail, *temp;

// this will create a node at the begining
void addatBegin()
{
    struct node *block = (node *)malloc(sizeof(node));
    cout << "\nEnter the name : ";
    cin >> block->name;

    block->next = '\0';

    if (head == '\0')
    {
        head = block;
        tail = block;
    }

    else
    {
        block->next = head;
        head = block;
    }
}

void addatLast()
{
    struct node *block = (node *)malloc(sizeof(node));
    cout << "\nEnter the name : ";
    cin >> block->name;

    block->next = '\0';

    if (head == '\0')
    {
        head = block;
        tail = block;
    }

    else
    {
        tail->next = block;
        tail = block;
    }
}

void delatLast()
{
    temp = head;
    while (temp != Count - 1)
    {
        temp = temp->next;
    }

    if (tail == '\0')
    {
        cout << "list is empty";
    }

    else
    {
        free(tail);
        temp->next = '\0';
        tail = temp;
    }
}

void delatFisrt()
{
    if (head == '\0')
    {
        cout << "\nlist is empty";
    }

    else
    {
        temp = head;
        if (head->next == '\0')
        {
            free(temp);
            head = '\0';
            tail = '\0';
        }
        else
        {
            head = head->next;
            temp -> next = '\0';
            free(temp);
        }
    }
}

void count()
{
    temp = head;
    while (temp->next != '\0')
    {
        temp = temp->next;
        Count++;
    }
    cout << Count;
}

void display()
{
    count();
    temp = head;
    for (int i = 0; i <= Count; i++)
    {
        cout << temp->name;
        cout << " ";
        temp = temp->next;
        //        cout << Count;
        //        cout << " .hello";
    }
    cout << "\n end ";
}

int main()
{
    int ch;
    node test;
    while (1)
    {
        cout << "\n1 for insert at first.";
        cout << "\n5 for insert at last.";
        cout << "\n7 for delete at first.";
        cout << "\n8 for delete at last.";
        cout << "\n3 for display.";
        cout << "\n4 for count.";
        cout << "\n6 for exit.";

        cout << "\nEnter the choice : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            addatBegin();
            break;
        case 2:
            // atLast();
            break;
        case 3:
            display();
            break;
        case 4:
            count();
            break;
        case 5:
            addatLast();
            break;
        case 6:
            exit(0);
            break;
        case 7:
            delatFirst() break;
        case 8:
            delatLast();
            break;
        default:
            cout << "\ninvalid option.";
            break;
        }
    }
    cout << Count;
    cout << "Over";
    return 0;
}
