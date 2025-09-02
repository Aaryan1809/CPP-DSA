#include <iostream>
using namespace std;
// means our user defined data type
// what this node can store so it can store 1 name and address to next node
class node
{
    char name[50];
    struct node *next;
    int Count = 0;

public:
    // this will create a node at the begining
    void atBegin()
    {
        node *block = (node *)malloc(sizeof(node));
        cout << "\nEnter the name : ";
        cin >> block->name;

        block->next = nullptr;

        if (head != nullptr)
        {
            block->next = head;
            block = head;
        }

        else
        {
            head = block;
            tail = block;
        }
    }

    void atLast()
    {
        node *block = (node *)malloc(sizeof(node));
        cout << "\nEnter the name : ";
        cin >> block->name;

        block->next = nullptr;

        if (tail != nullptr)
        {
            tail->next = block;
            block = tail;
        }

        else
        {
            head = block;
            tail = block;
        }
    }

    void count()
    {
        temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
            Count++;
        }
    }

    void display()
    {
        count();
        temp = head;
        for (int i = 0; i <= Count; i++)
        {
            cout << temp->name;
            temp = temp->next;
        }
    }
} *head, *tail, *temp;

int main()
{
    node test;
    test.atBegin();
    test.atBegin();
    return 0;
}
