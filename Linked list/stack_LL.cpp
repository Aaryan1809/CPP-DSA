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
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp2 = temp->next;
    delete (temp2);
    temp->next = NULL;
}

int stackLL ::insert()
{
    node = new stackLL;
    cout << "Enter the data : ";
    cin >> node->data;

    if (head == NULL)
    {
        node = head;
        node = tail;
    }
    else
    {
        tail->next = node;
        node = tail;
    }
}
int stackLL ::del()
{
}

int main()
{

    return 0;
}