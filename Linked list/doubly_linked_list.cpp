// code of single linked list will be converted into double (simple)
#include <iostream>
#include <stdlib.h>
using namespace std;
// means our user defined data type
// what this node can store so it can store 1 name and address to next node
struct node
{
    char name[50];
    node *next, *previous;
} *head, *tail, *temp, *block, *temp2;

// this will create a node at the begining
void addatBegin()
{
    block = (node *)malloc(sizeof(node));
    cout << "\nEnter the name : ";
    cin >> block->name;

    block->next = '\0';
    block->previous = '\0';

    if (head == '\0')
    {
        head = block;
        tail = block;
    }

    // done
    else
    {
        head->previous = block;
        block->next = head;
        head = block;
        head->previous = '\0';
    }
}

void addatLast()
{
    block = (node *)malloc(sizeof(node));
    cout << "\nEnter the name : ";
    cin >> block->name;

    block->next = '\0';
    block->previous = '\0';

    if (head == '\0')
    {
        head = block;
        tail = block;
    }

    else
    {
        tail->next = block;
        block->previous = tail;
        tail = block;
        tail->next = '\0';
    }
}

void delatLast()
{
    temp = head;
    if (head == '\0')
    {
        cout << "\nlist is empty";
    }

    if (head->next == '\0')
    {
        free(temp);
        head = '\0';
        tail = '\0';
    }

    else
    {
        while (temp->next != tail)
        {
            temp = temp->next;
        }
        temp->next = '\0';
        tail->previous = '\0';
        free(tail);
        tail = temp;
    }
}

void delatFirst()
{
    temp = head;
    if (head == '\0')
    {
        cout << "\nlist is empty";
    }

    else if (head->next == '\0')
    {
        free(temp);
        head = '\0';
        tail = '\0';
    }
    else
    {
        head = head->next;
        temp->next = '\0';
        head->previous = '\0';
        free(temp);
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
    // int dispCh;
    // cout << "\n1. Ascending";
    // cout << "\n2. Descending";
    // cout << "\nEnter in what order do you want to show the linked list : ";
    // cin >> dispCh;

    // if (dispCh == 1)
    // {
        temp = head;
        while (temp != nullptr)
        {
            cout << temp->name << " ";
            temp = temp->next;
        }
    // }
    // else if (dispCh == 2)
    // {
    cout << "\n";
        temp = tail;
        while (temp != nullptr)
        {
            cout << temp->name << " ";
            temp = temp->previous;
        }
    // }

    // else
    // {
    //     cout << "\nInvalid choice";
    // }
}

// there can be a bug that after adding 2 to 3 nodes at first or last by insert at position then the count will not be updated so if we try to enter a legit position then the node will be inserted at wrong position maybe...
void addatPosition()
{
    int pos, Count = count();
    cout << "\nEnter posistion to insert the element on : ";
    cin >> pos;
    if (pos == Count)
    {
        // cout << "\nYou entered wrong position which is more than the count so we will add your node to last.";
        addatLast();
    }
    else if (pos == 1)
    {
        // cout << "\nYou entered wrong position which is less than the count so we will add your node at first.";
        addatBegin();
    }

    else
    {
        // for creating a node block
        block = (node *)malloc(sizeof(node));
        cout << "\nEnter the name : ";
        cin >> block->name;
        // to get the temp variable to pos - 1 so we can add the node in required position
        int C = 1;
        temp = head;
        while (C < pos - 1)
        {
            temp = temp->next;
            C++;
        }
        temp2 = temp->next;
        // allocating the links between the new node
        // new node na next ma aapde old node je enu next thase enu address nakhi didhu
        block->next = temp->next; // ✅
        block->previous = temp;
        // have jya temp ubho che ene new node nu address api didhu
        temp->next = block;
        temp2->previous = block;
    }
}

void delatPosition()
{
    int pos, Count = count();
    cout << "\nEnter posistion to delete the element from : ";
    cin >> pos;
    if (pos > Count)
    {
        // cout << "\nYou entered wrong position which is more than the count so we will add your node to last.";
        delatLast();
    }
    else if (pos == 1)
    {
        // cout << "\nYou entered wrong position which is less than the count so we will add your node at first.";
        delatFirst();
    }

    else if (pos <= 0 || pos > Count)
    {
        cout << "\nInvalid position.";
    }

    else
    {
        int C = 1;
        temp = head;
        while (C < pos - 1)
        {
            temp = temp->next;
            C++;
        }
        temp2 = temp->next;

        temp->next = temp2->next;
        temp2->next->previous = temp;
        free(temp2);
    }
}

int main()
{
    int ch;
    // menu
    while (1)
    {
        cout << "\n===== Doubly Linked List Menu =====\n";
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
            cout << "\nTotal number of nodes are : " << count();
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
