#include <iostream>
using namespace std;

class linkList
{
private:
    int data;
    linkList *next;

public:
    linkList()
    {
        next = NULL;
    }
    void dup();
    void Sorting();
    void addatBegin();
    void addatLast();
    void delatLast();
    void delatFirst();
    int count();
    void display();
    void addatPosition();
    void delatPosition();
} *head, *tail, *temp, *node, *temp2;

void linkList::dup()
{
    if (head == NULL)
        return;

    for (temp = head; temp != NULL; temp = temp->next)
    {
        if (temp->next == NULL || temp->data != temp->next->data)
        {
            cout << temp->data << " ";
        }
    }
}

void linkList::Sorting()
{
    if (head == NULL || head->next == NULL)
        return;

    linkList *i, *j, *end = NULL;

    for (i = head; i->next != NULL; i = i->next)
    {
        int isSwapped = -1;
        for (j = head; j->next != end; j = j->next)
        {
            if (j->data > j->next->data)
            {
                swap(j->data, j->next->data);
                isSwapped = 0;
            }
        }

        end = j->next;

        if (isSwapped == -1)
            return;
    }
}

void linkList::addatBegin()
{
    node = new linkList;
    cout << "\nEnter characters : ";
    cin >> node->data;

    if (head == NULL)
    {
        head = node;
        tail = node;
        node->next = NULL;
    }
    else
    {
        node->next = head;
        head = node;
    }
}

void linkList::addatLast()
{
    node = new linkList;
    cout << "\nEnter characters : ";
    cin >> node->data;
    node->next = NULL;

    if (head == NULL)
    {
        head = node;
        tail = node;
    }
    else
    {
        tail->next = node;
        tail = node;
    }
}

int linkList::count()
{
    if (head == NULL)
        return 0;

    int c = 0;
    temp = head;
    while (temp != NULL)
    {
        c++;
        temp = temp->next;
    }
    return c;
}

void linkList::addatPosition()
{
    int pos, Count = count();
    cout << "\nEnter Position to insert on : ";
    cin >> pos;

    if (pos == 1)
    {
        addatBegin();
    }
    else if (pos == Count + 1)
    {
        addatLast();
    }
    else if (pos <= 0 || pos > Count + 1)
    {
        cout << "\nInvalid position";
    }
    else
    {
        node = new linkList;
        cout << "\nEnter characters : ";
        cin >> node->data;

        int c = 1;
        temp = head;
        while (c < pos - 1)
        {
            temp = temp->next;
            c++;
        }

        node->next = temp->next;
        temp->next = node;
    }
}

void linkList::delatPosition()
{
    int pos, Count = count();
    cout << "\nEnter position to delete from : ";
    cin >> pos;

    if (head == NULL)
    {
        cout << "\nList is empty.";
    }
    else if (pos == 1)
    {
        delatFirst();
    }
    else if (pos == Count)
    {
        delatLast();
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
        delete temp2;
    }
}

void linkList::delatLast()
{
    if (head == NULL)
    {
        cout << "\nList is empty";
    }
    else if (head->next == NULL)
    {
        delete head;
        head = NULL;
        tail = NULL;
    }
    else
    {
        temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }

        delete tail;
        tail = temp;
        tail->next = NULL;
    }
}

void linkList::delatFirst()
{
    if (head == NULL)
    {
        cout << "\nList is empty";
    }
    else if (head->next == NULL)
    {
        delete head;
        head = NULL;
        tail = NULL;
    }
    else
    {
        temp = head;
        head = head->next;
        delete temp;
    }
}

void linkList::display()
{
    if (head == NULL)
    {
        cout << "\nList is empty.";
        return;
    }

    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    int ch;
    linkList obj;

    obj.addatLast();
    obj.addatLast();
    obj.addatLast();
    obj.addatLast();
    obj.addatLast();
    obj.display();
    cout << "" << endl;
    obj.Sorting();
    obj.display();
    cout << "" << endl;
    obj.dup();

    return 0;
}