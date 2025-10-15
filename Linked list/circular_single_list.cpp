/*
// green and blue lines will show the new lines of code for circular linked list
#include <iostream>
#include <stdlib.h>
using namespace std;
// means our user defined data type
// what this node can store so it can store 1 name and address to next node
struct node
{
    char name[50];
    node *next;
} *head, *tail, *temp, *block, *temp2;

// this will create a node at the begining
// done
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
        head->next = head;
    }

    else
    {
        block->next = head;
        head = block;
        tail->next = head;
    }
}
// done
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
        head->next = head;
    }

    else
    {
        block->next = head;
        tail->next = block;
        tail = block;
    }
}

// done
void delatLast()
{
    if (head == '\0')
    {
        cout << "\nlist is empty";
    }

    else if (head->next == head)
    {
        free(head);
        head = '\0';
        tail = '\0';
    }

    else
    {
        temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }

        temp->next = head;
        free(tail);
        tail = temp;
    }
}

// done
void delatFirst()
{
    if (head == '\0')
    {
        cout << "\nlist is empty";
    }

    else if (head->next == head)
    {
        free(head);
        head = '\0';
        tail = '\0';
    }

    else
    {
        temp = head;
        head = head->next;
        free(temp);
        tail->next = head;
    }
}

// done
int count()
{
    if (head == NULL)
        return 0;
    int Count = 1;
    temp = head;
    while (temp->next != head)
    {
        Count++;
        temp = temp->next;
    }
    // cout << Count;
    return Count;
}

// done
void display()
{
    temp = head;
    if (head == '\0')
    {
        cout << "\nlist is empty.";
        return;
    }

    do
    {
        cout << temp->name << " ";
        temp = temp->next;
    } while (temp != head);

    cout << "\n tail -> next = " << tail->next->name;
    cout << "\n tail -> name = " << tail->name;
    cout << "\n head -> next = " << head->next->name;
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
        // cout << "\nYou entered wrong position which is more than the count so we will add your node to last.";
        addatLast();
    }
    else if (pos <= 1)
    {
        // cout << "\nYou entered wrong position which is less than the count so we will add your node at first.";
        addatBegin();
    }

    else if (pos <= 0 || pos > Count)
    {
        cout << "\nInvalid position.";
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
        // allocating the links between the new node
        // new node na next ma aapde old node je enu next thase enu address nakhi didhu
        block->next = temp->next;
        // have jya temp ubho che ene new node nu address api didhu
        temp->next = block;
    }
}

void delatPosition()
{
    int pos, Count = count();
    cout << "\nEnter posistion to delete the element from : ";
    cin >> pos;
    if (head == '\0')
    {
        cout << "\nList is empty.";
    }

    else if (pos >= Count)
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
        free(temp2);
    }
}

int main()
{
    int ch;
    // menu
    while (1)
    {
        cout << "\n===== Circular Singly Linked List Menu =====\n";
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
*/
#include <bits/stdc++.h>
using namespace std;

class linkList
{
private:
    char data[50];
    linkList *next;

public:
    linkList()
    {
        next = NULL;
    }

    void addatBegin();
    void addatLast();
    void delatLast();
    void delatFirst();
    int count();
    void display();
    void addatPosition();
    void delatPosition();
} *head, *tail, *temp, *node, *temp2;

void linkList::addatBegin()
{
    node = new linkList;
    cout << "\nEnter characters : ";
    cin >> node->data;

    if (head == NULL)
    {
        head = node;
        tail = node;
        head->next = head;
    }
    else
    {
        node->next = head;
        tail->next = node;
        head = node;
    }
}

void linkList::addatLast()
{
    node = new linkList;
    cout << "\nEnter characters : ";
    cin >> node->data;

    if (head == NULL)
    {
        head = node;
        tail = node;
        head->next = head;
    }
    else
    {
        node->next = head;
        tail->next = node;
        tail = node;
    }
}

int linkList ::count()
{
    if (head == NULL)
    {
        return 0;
    }

    else
    {
        int c = 1;
        temp = head;
        while (temp->next != head)
        {
            c++;
            temp = temp->next;
        }
        return c;
    }
}

void linkList ::addatPosition()
{
    int pos;
    cout << "\nEnter Position to enter on : ";
    cin >> pos;

    if (pos == 1)
        addatBegin();

    else if (pos == pos + 1)
        addatLast();

    else if (pos < 1 || pos > count())
        cout << "\nInvalid position";

    else
    {
        node = new linkList;
        cout << "\nEnter characters : ";
        cin >> node->data;

        // making a counting variable so we can get to know where to add the new node
        int c = 1;
        // making temp = heaed beacause traversals cannot be made by head itself
        temp = head;

        // loop to get behind the block where we want to add the new node
        while (c != pos - 1)
        {
            c++;
            temp = temp->next;
        }

        // adding the node and making the connections
        node->next = temp->next;
        temp->next = node;
    }
}

void linkList ::delatPosition()
{
    int pos, Count = count();
    cout << "\nEnter posistion to delete the element from : ";
    cin >> pos;
    if (head == '\0')
    {
        cout << "\nList is empty.";
    }

    else if (pos >= Count)
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
        delete(temp2);
    }
}

void linkList ::delatLast()
{
    if (head == '\0')
    {
        cout << "\nlist is empty";
    }

    else if (head->next == head)
    {
        delete(head);
        head = '\0';
        tail = '\0';
    }

    else
    {
        temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }

        temp->next = head;
        delete(tail);
        tail = temp;
    }
}

void linkList ::delatFirst()
{
    if (head == '\0')
    {
        cout << "\nlist is empty";
    }

    else if (head->next == head)
    {
        delete(head);
        head = '\0';
        tail = '\0';
    }

    else
    {
        temp = head;
        head = head->next;
        delete(temp);
        tail->next = head;
    }
}

void linkList::display()
{
    temp = head;
    if (head == '\0')
    {
        cout << "\nlist is empty.";
        return;
    }

    // aa vadu loop tyare jyari aapdi pase count na hoy tyare but agar count function hoy to biju loop chalavanu
    while (temp->next != head)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    // more simple and sorted so more and more can be code readability
    for (int i = 0; i < count(); i++)
    {
        cout << temp->data << " ";
    }

    cout << "\n tail -> next = " << tail->next->data;
    cout << "\n tail -> data = " << tail->data;
    cout << "\n head -> next = " << head->next->data;
    // for debugging
    // cout << "\n end";
}

int main()
{
    int ch;
    linkList obj;
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
            obj.addatBegin();
            break;
        case 2:
            obj.addatLast();
            break;
        case 3:
            obj.addatPosition();
            break;
        case 4:
            obj.delatFirst();
            break;
        case 5:
            obj.delatLast();
            break;
        case 6:
            obj.delatPosition();
            break;
        case 7:
            cout << "\nTotal number of nodes are : " << obj.count();
            break;
        case 8:
            obj.display();
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
