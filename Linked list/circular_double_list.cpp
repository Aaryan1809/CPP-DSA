#include <bits/stdc++.h>
using namespace std;

class circularDoubleLL
{
private:
    char name[50];
    circularDoubleLL *next, *previous;

public:
    circularDoubleLL()
    {
        next = NULL;
        previous = NULL;
    }
    void addatBegin();
    void addatLast();
    void delatLast();
    void delatFirst();
    int count();
    void display();
    void addatPosition();
    void delatPosition();
} *temp, *head, *tail, *temp2, *node, obj;

void circularDoubleLL::addatBegin()
{
    node = new circularDoubleLL;
    cout << "\nEnter the name : ";
    cin >> node->name;

    if (head == NULL)
    {
        head = node;
        tail = node;
        head->next = head;
        head->previous = head;
    }
    else
    {
        node->next = head;
        node->previous = tail;
        head->previous = node;
        tail->next = node;
        head = node;
    }
}
void circularDoubleLL::addatLast()
{
    node = new circularDoubleLL;
    cout << "\nEnter the name : ";
    cin >> node->name;

    if (head == NULL)
    {
        head = node;
        head->next = head;
        head->previous = head;
        tail = head;
    }
    else
    {
        node->next = head;
        node->previous = tail;
        head->previous = node;
        tail->next = node;
        tail = node;
    }
}
void circularDoubleLL::delatLast()
{
    if (head == NULL)
    {
        cout << "\nlinked List is empty.";
    }
    else
    {
        if (head == tail)
        {
            delete (head);
            head = NULL;
            tail = NULL;
        }
        else
        {
            temp = tail->previous;
            head->previous = temp;
            temp->next = tail->next;
            tail->next = NULL;
            tail->previous = NULL;
            delete (tail);
            tail = temp;
        }
    }
}
void circularDoubleLL::delatFirst()
{
    if (head == NULL)
    {
        cout << "\nlinked List is empty.";
    }
    else
    {
        if (head == tail)
        {
            delete (head);
            head = NULL;
            tail = NULL;
        }
        else
        {
            temp = head->next;
            temp->previous = tail;
            tail->next = temp;
            head->previous = NULL;
            head->next = NULL;
            delete (head);
            head = temp;
        }
    }
}
int circularDoubleLL::count()
{
    int c = 1;
    if (head == NULL)
        return 0;
    else if (head == head->next)
        return 1;
    else
    {
        temp = head;
        while (temp->next != head)
        {
            c = c + 1;
            temp = temp->next;
        }
        // c = c + 1;
        return c;
    }
}
void circularDoubleLL::display()
{
    if (head == NULL)
        cout << "\nList is empty.";
    else
    {
        temp = head;
        while (temp->next != head)
        {
            cout << temp->name << " ";
            temp = temp->next;
        }
        cout << temp->name;
    }
}
void circularDoubleLL::addatPosition()
{
    if (head == NULL)
    {
        cout << "\nlinked List is empty.";
    }
    else
    {
        int pos;
        cout << "\nEnter the postition : ";
        cin >> pos;

        if (pos == 1)
            addatBegin();

        else if (pos == count() + 1)
            addatLast();

        else if (pos < 1 || pos > count())
            cout << "\nInvalid Position";

        else
        {
            node = new circularDoubleLL;
            cout << "\nEnter the name : ";
            cin >> node->name;

            int c = 1;
            temp = head;
            while (c != pos - 1)
            {
                temp = temp->next;
                c++;
            }
            temp2 = temp->next;

            node->next = temp2;
            node->previous = temp;
            temp->next = node;
            temp2->previous = node;
        }
    }
}
void circularDoubleLL::delatPosition()
{
    if (head == NULL)
    {
        cout << "\nlinked List is empty.";
    }
    else
    {
        int pos;
        cout << "\nEnter the postition : ";
        cin >> pos;

        if (pos == 1)
            delatFirst();

        else if (pos == count())
            delatLast();

        else if (pos < 1 || pos > count())
            cout << "\nInvalid Position";

        else
        {
            int c = 1;
            temp = head;
            while (c != pos - 1)
            {
                temp = temp->next;
                c++;
            }
            temp2 = temp->next;

            temp->next = temp2->next;
            temp2->next->previous = temp;
            temp2->next = NULL;
            temp2->previous = NULL;
            delete (temp2);
        }
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
            obj.addatBegin();
            break;
        case 2:
            obj.addatLast();
            break;
        case 3:
            obj.addatPosition(); // youâ€™ll implement this
            break;
        case 4:
            obj.delatFirst();
            break;
        case 5:
            obj.delatLast();
            break;
        case 6:
            obj.delatPosition(); // youâ€™ll implement this
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
