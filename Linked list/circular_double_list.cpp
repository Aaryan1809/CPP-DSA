// display , at pos del and add and count baki che 

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

int count()
{
    int c = 0;
    temp = head;

    // for only 1 element
    if (head->next == head)
    {
        c = c + 1;
        return c;
    }

    // for 0 element
    else if (head == NULL)
    {
        return 0;
    }

    // for normal case
    else
    {
        do
        {
            c++;
            temp = temp->next;
        } while (temp->next = head);
        return c;
    }
}

void addatBegin()
{
    block = (node *)malloc(sizeof(node));
    cout << "\nEnter the name : ";
    cin >> block->name;

    block->next = NULL;
    block->previous = NULL;

    if (head == NULL)
    {
        head = block;
        tail = block;
        head->next = head;
    }

    else
    {
        block->next = head;
        head->previous = block;
        tail->next = block;
        head = block;
    }
}

void addatLast()
{
    block = (node *)malloc(sizeof(node));
    cout << "\nEnter the name : ";
    cin >> block->name;

    block->next = NULL;
    block->previous = NULL;

    if (head == NULL)
    {
        head = block;
        tail = block;
        head->next = head;
    }

    else
    {
        tail->next = block;
        block->previous = tail;
        block->next = head;
        tail = block;
    }
}

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
    }
}

void delatFirst()
{
    if (head == NULL)
    {
        cout << "\nList is empty.";
    }

    else if (head->next == head)
    {
        head->next = NULL;
        free(head);
    }

    else
    {
        temp = head;
        head->next->previous = tail;
        head->next = NULL;
        head->previous = NULL;
        head = head->next;
        tail->next = head;
        free(temp);
    }
}

void delatLast()
{
    if (head == NULL)
    {
        cout << "\nList is empty.";
    }

    else if (head->next == head)
    {
        head->next = NULL;
        free(head);
    }

    else
    {
        temp = tail->previous;
        temp->next = head;
        head->previous = temp;
        tail->next = NULL;
        tail->previous = NULL;
        free(tail);
        tail = temp;
    }
}

// there can be a bug that after adding 2 to 3 nodes at first or last by insert at position then the count
// will not be updated so if we try to enter a legit position then the node will be inserted at wrong position maybe...

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
    }
}

void display()
{
    // for 0 element
    if (head == NULL)
    {
        cout << "\nList is empty.";
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
