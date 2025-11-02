/*#include <iostream>
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
        free(tail);
        tail = temp;
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

i will ace in my tomorrow's test.
this will be the easiest test of my whole life becuase i have gone through much more than this.
i have not come this far to fuckk all the things up.
a person who had faced stroms will not be feared by rainy days.

int count()
{
    int Count = 1;
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
    if (pos == Count || pos == Count + 1)
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
        free(temp2);
    }
}

int main()
{
    int ch;
    // menu
    while (1)
    {
        cout << "\n===== Singly Linked List Menu =====\n";
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

// #include <iostream>
// using namespace std;

// class linkList
// {
// private:
//     int data;
//     linkList *next;

// public:
//     linkList()
//     {
//         next = NULL;
//     }

//     void Sorting();
//     void addatBegin();
//     void addatLast();
//     void delatLast();
//     void delatFirst();
//     int count();
//     void display();
//     void addatPosition();
//     void delatPosition();
// } *head, *tail, *temp, *node, *temp2;

// void linkList::Sorting()
// {
//     temp = head;
//     while (temp != NULL)
//     {
//         temp2 = temp->next;
//         if (temp->data > temp2->data)
//         {
//             swap(temp->data, temp2->data);
//         }
//         temp = temp->next;
//     }
// }

// void linkList::addatBegin()
// {
//     node = new linkList;
//     cout << "\nEnter characters : ";
//     cin >> node->data;

//     if (head == NULL)
//     {
//         head = node;
//         tail = node;
//         head->next = NULL;
//     }
//     else
//     {
//         node->next = head;
//         head = node;
//     }
// }

// void linkList::addatLast()
// {
//     node = new linkList;
//     cout << "\nEnter characters : ";
//     cin >> node->data;

//     if (head == NULL)
//     {
//         head = node;
//         tail = node;
//     }
//     else
//     {
//         tail->next = node;
//         tail = node;
//     }
// }

// int linkList::count()
// {
//     if (head == NULL)
//         return 0;

//     int c = 1;
//     temp = head;
//     while (temp->next != head)
//     {
//         c++;
//         temp = temp->next;
//     }
//     return c;
// }

// void linkList::addatPosition()
// {
//     int pos, Count = count();
//     cout << "\nEnter Position to insert on : ";
//     cin >> pos;

//     if (pos == 1)
//     {
//         addatBegin();
//     }
//     else if (pos == Count + 1)
//     {
//         addatLast();
//     }
//     else if (pos <= 0 || pos > Count + 1)
//     {
//         cout << "\nInvalid position";
//     }
//     else
//     {
//         node = new linkList;
//         cout << "\nEnter characters : ";
//         cin >> node->data;

//         int c = 1;
//         temp = head;
//         while (c < pos - 1)
//         {
//             temp = temp->next;
//             c++;
//         }

//         node->next = temp->next;
//         temp->next = node;
//     }
// }

// void linkList::delatPosition()
// {
//     int pos, Count = count();
//     cout << "\nEnter position to delete from : ";
//     cin >> pos;

//     if (head == NULL)
//     {
//         cout << "\nList is empty.";
//     }
//     else if (pos == 1)
//     {
//         delatFirst();
//     }
//     else if (pos >= Count)
//     {
//         delatLast();
//     }
//     else if (pos <= 0 || pos > Count)
//     {
//         cout << "\nInvalid position.";
//     }
//     else
//     {
//         int C = 1;
//         temp = head;
//         while (C < pos - 1)
//         {
//             temp = temp->next;
//             C++;
//         }
//         temp2 = temp->next;
//         temp->next = temp2->next;
//         delete temp2;
//     }
// }

// void linkList::delatLast()
// {
//     if (head == NULL)
//     {
//         cout << "\nList is empty";
//     }
//     else if (head->next == NULL)
//     {
//         delete head;
//         head = NULL;
//         tail = NULL;
//     }
//     else
//     {
//         temp = head;
//         while (temp->next != NULL)
//         {
//             temp = temp->next;
//         }

//         temp->next = head;
//         delete tail;
//         tail = temp;
//     }
// }

// void linkList::delatFirst()
// {
//     if (head == NULL)
//     {
//         cout << "\nList is empty";
//     }
//     else if (head->next == NULL)
//     {
//         delete head;
//         head = NULL;
//         tail = NULL;
//     }
//     else
//     {
//         temp = head;
//         head = head->next;
//         tail->next = head;
//         delete temp;
//     }
// }

// void linkList::display()
// {
//     if (head == NULL)
//     {
//         cout << "\nList is empty.";
//         return;
//     }

//     temp = head;
//     do
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     } while (temp != head);

//     cout << "\n tail -> next = " << tail->next->data;
//     cout << "\n tail -> data = " << tail->data;
//     cout << "\n head -> next = " << head->next->data;
// }

// int main()
// {
//     int ch;
//     linkList obj; // only to call methods, actual nodes are managed via head/tail
//     while (1)
//     {
//         cout << "\n===== Circular Singly Linked List Menu =====\n";
//         cout << "1. Insert at beginning\n";
//         cout << "2. Insert at last\n";
//         cout << "3. Insert at position\n";
//         cout << "4. Delete at beginning\n";
//         cout << "5. Delete at last\n";
//         cout << "6. Delete at position\n";
//         cout << "7. Count nodes\n";
//         cout << "8. Display list\n";
//         cout << "9. Exit\n";
//         cout << "============================\n";

//         cout << "Enter your choice: ";
//         cin >> ch;

//         switch (ch)
//         {
//         case 1:
//             obj.addatBegin();
//             break;
//         case 2:
//             obj.addatLast();
//             break;
//         case 3:
//             obj.addatPosition();
//             break;
//         case 4:
//             obj.delatFirst();
//             break;
//         case 5:
//             obj.delatLast();
//             break;
//         case 6:
//             obj.delatPosition();
//             break;
//         case 7:
//             cout << "\nTotal number of nodes: " << obj.count();
//             break;
//         case 8:
//             obj.display();
//             break;
//         case 9:
//             exit(0);
//         default:
//             cout << "\nInvalid option. Try again.\n";
//         }
//     }
//     return 0;
// }

// all this code above is of circular single LL

// this code below is of normal single LL

#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
} *temp, *head, *tail, *temp2, *block;

void addF()
{
    block = (node *)malloc(sizeof(node));
    // user input

    block->next = NULL;

    if (head == NULL)
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

void addL()
{
    block = (node *)malloc(sizeof(node));
    // user input
    block->next = NULL;
    if (head == NULL)
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

int count()
{
    if (head == NULL)
        return 0;

    temp = head;
    int c = 0;
    while (temp != NULL)
    {
        c++;
        temp = temp->next;
    }

    return c;
}

void addM()
{
    int pos;

    if (pos > count() + 1 || pos <= 0)
        cout << "enter valid position";

    else if (pos == 1)
        addF();

    else if (pos == count() + 1)
        addL();

    else
    {
        block = (node *)malloc(sizeof(node));

        temp = head;
        int c = 1;

        // making loop to go the desired position
        while (c < pos - 1)
        {
            c++;
            temp = temp->next;
        }

        // setting connections
        block->next = temp->next;
        temp->next = block;
    }
}

void delF()
{
    if (head == NULL)
    {
        cout << "Not enough elements to delete";
    }

    else
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}

void delL()
{
    if (head == NULL)
    {
        cout << "Not enough elements to delete";
    }
    else
    {
        temp = head;

        if (head == tail)
        {
            free(head);
            head = NULL;
            tail = NULL;
        }
        while (temp->next != tail)
        {
            temp = temp->next;
        }
        tail = temp;
        free(temp->next);
        temp->next = NULL;
    }
}

void delM()
{
    int pos;

    if (pos < 1 || pos > count() + 1)
        cout << "Invalid position";

    else if (pos == 1)
        delF();
    else if (pos == count() + 1)
        delL();

    else
    {
        // to get the starting pointer
        int c = 1;
        temp = head;

        while (c < pos)
        {
            c++;
            temp = temp->next;
        }

        // making the links so yhat the middle element can get free
        temp2 = temp->next;
        temp->next = temp2->next;
        temp2->next = NULL;
        free(temp2);
    }
}

int main()
{
    return 0;
}
