#include <iostream>
#include <stdlib.h>
using namespace std;
// means our user defined data type
// what this node can store so it can store 1 name and address to next node
struct node
{
    char name[50];
    node *next;
} *head, *tail, *temp, *block;

// this will create a node at the begining
void addatBegin()
{
    block = (node *)malloc(sizeof(node));
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
    block = (node *)malloc(sizeof(node));
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
    if (head == '\0')
    {
        cout << "\nlist is empty";
    }

    else
    {
        while (temp->next != tail)
        {
            temp = temp->next;
        }

        if (head->next == '\0')
        {
            free(temp);
            head = '\0';
            tail = '\0';
        }

        else
        {
            temp->next = '\0';
            free(tail);
            tail = temp;
        }
    }
}

void delatFirst()
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
            temp->next = '\0';
            free(temp);
        }
    }
}

int count()
{
    int Count = 0;
    temp = head;
    while (temp != '\0')
    {
        Count++;
        temp = temp->next;
    }
    // cout << Count;
    return Count;
}

void display()
{
    temp = head;
    while (temp != '\0')
    {
        cout << temp->name << " ";
        temp = temp->next;
    }
    // for debugging
    // cout << "\n end";
}

// there can be a bug that after adding 2 to 3 nodes at first or last by insert at position then the count will not be updated so if we try to enter a legit position then the node will be inserted at wrong position maybe...
void addatPosition()
{
    int pos, Count = count();
    cout << "\nEnter posistion to insert the element on : ";
    cin >> pos;
    if (pos > Count)
    {
        cout << "\nYou entered wrong position which is more than the count so we will add your node to last.";
        addatLast();
    }
    else if (pos < 0)
    {
        cout << "\nYou entered wrong position which is less than the count so we will add your node at first.";
        addatBegin();
    }

    else
    {
        // for creating a node block
        block = (node *)malloc(sizeof(node));
        cout << "\nEnter the name : ";
        cin >> block->name;
        // to get the temp variable to pos - 1 so we can add the node in required position
        int C = 0;
        temp = head;
        while (C < pos)
        {
            temp = temp->next;
        }
        // allocating the links between the new node 
        // new node na next ma aapde old node je enu next thase enu address nakhi didhu 
        block->next = temp->next;
        // have jya temp ubho che ene new node nu address api didhu
        temp->next = block;
    }
}
void delatPosition()
{
}
int main()
{
    int ch;

    while (1)
    {
        cout << "\n===== Linked List Menu =====\n";
        cout << "1. Insert at beginning\n";
        cout << "2. Insert at last\n";
        cout << "3. Insert at position\n";
        cout << "4. Delete at beginning\n";
        cout << "5. Delete at last\n";
        cout << "6. Delete at position\n";
        cout << "7. Count nodes\n";
        cout << "8. Display list\n";
        cout << "9. Exit\n";
        cout << "============================\n";

        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            addatBegin();
            break;
        case 2:
            addatLast();
            break;
        case 3:
            addatPosition(); // you’ll implement this
            break;
        case 4:
            delatFirst();
            break;
        case 5:
            delatLast();
            break;
        case 6:
            delatPosition(); // you’ll implement this
            break;
        case 7:
            count();
            break;
        case 8:
            display();
            break;
        case 9:
            exit(0);
            break;
        default:
            cout << "\nInvalid option. Try again.\n";
            break;
        }
    }

    return 0;
}
