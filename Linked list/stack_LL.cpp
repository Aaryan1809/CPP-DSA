#include <bits/stdc++.h>
using namespace std;

class stackLL
{
private:
    int data;
    stackLL *next;

public:
    stackLL()
    {
        next = NULL;
    }

    int del();
    int insert();
    void disp();
} *node, *head = NULL, *tail = NULL, *temp = NULL, *temp2 = NULL;

void stackLL::disp()
{
    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int stackLL ::insert()
{
    node = new stackLL;
    cout << "Enter the data : ";
    cin >> node->data;

    if (head == NULL)
    {
        head = node; // Point head to the new node
        tail = node; // Point tail to the new node
    }
    else
    {
        tail->next = node; // Link old tail to new node
        tail = node;       // Update tail to new node
    }
}
int stackLL ::del()
{
    if (head == NULL)
    {
        cout << "\nStack is Underflow add some elements.";
    }

    else
    {
        // while loop is used to get the pointer to the second last node so we can remove it easily
        temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }

        // to delete the last node so our last node gets deleted
        temp2 = temp->next;
        delete (temp2);
        temp->next = NULL;
    }
}

int main()
{
    stackLL obj;

    obj.insert();
    obj.del();
    return 0;
}