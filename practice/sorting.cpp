// #include <bits/stdc++.h>
// using namespace std;

// void bubble_sort(char arr[][30])
// {

//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             if (arr[j] > arr[j+1])
//             {
//                 swap(arr[j] , arr[j+1]);
//             }

//         }
//     }
// }

// void display(char arr[])
// {
//     int n = strlen(arr);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

// }

// int main()
// {
//     char arr[10][30];
//     cout << "Enter number of cities : ";
//     int c;
//     cin >> c;
//     for (int i = 0; i < c; i++)
//     {
//         cin >> arr[i];
//     }

//     bubble_sort(arr);
//     display(arr);
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
} *block, *head, *tail, *temp;

void aaf()
{
    block = (node *)malloc(sizeof(node));
    cout << "Enter data : \n";
    cin >> block->data;

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

void aal()
{
    block = (node *)malloc(sizeof(node));
    cout << "Enter data : \n";
    cin >> block->data;

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

void aam()
{

    int n = count();
    int pos;
    cout << "Enter position to enter : ";
    cin >> pos;

    if (head == NULL)
        cout << "List is empty";

    else if (pos == 0)
        aaf();

    else if (pos == n + 1)
        aal();

    else
    {
        block = (node *)malloc(sizeof(node));
        cout << "Enter data : \n";
        cin >> block->data;
        block->next = NULL;
        int a = 0;
        while (a < pos)
        {
            a++;
            temp = temp->next;
        }
        block->next = temp->next;
        temp->next = block;
    }
}

int main()
{

    return 0;
}