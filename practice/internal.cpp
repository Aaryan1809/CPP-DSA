/*
question:
data inputs = rollNo and score.
constraints :
1. rno should be unique.
2. if score is a  multiple of 5 then add at last.
    if not then add after last multiple of 5.
    if not multiple of 5 is there then add at begin.
    count the numbers that are multiple of 5.
3. diplay the ll.
4. display all the nums that are multiple of 5.
*/

#include <bits/stdc++.h>
using namespace std;

struct node
{
    int rno;
    int score;
    node *next;
} *head, *temp, *tail, *last5;

void displayall()
{
    if (head == NULL)
        return;
    else
    {
        temp = head;
        while (temp != NULL)
        {
            cout << temp->rno << "-";
            cout << temp->score << " ";
            temp = temp->next;
        }
    }
}

void displaymultipleof5()
{
    if (head == NULL)
        return;
    else
    {
        temp = head;
        while (temp != NULL)
        {
            if (temp->score % 5 == 0)
                cout << temp->score << " ";
            temp = temp->next;
        }
    }
}

int count()
{
    if (head == NULL)
        return 0;
    else
    {
        temp = head;
        int c = 0;
        while (temp != NULL)
        {
            c++;
            temp = temp->next;
        }
        return c;
    }
}

void afterlastmultipleof5(node *block)
{
    if (head == NULL)
    {
        head = block;
        tail = block;
        return;
    }

    temp = head;
    last5 = NULL;
    while (temp != NULL)
    {
        if (temp->score % 5 == 0)
        {
            last5 = temp;
        }
        temp = temp->next;
    }

    if (last5 == NULL)
    {
        block->next = head;
        head = block;
    }
    else
    {
        block->next = last5->next;
        last5->next = block;
    }
}

void addatlast(node *block)
{
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

int isUnique(int rno)
{
    if (head == NULL)
        return 1;
    else
    {
        temp = head;
        while (temp != NULL)
        {
            if (temp->rno == rno)
                return 0;
            temp = temp->next;
        }
        return 1;
    }
}

int countmulitpleof5()
{
    if (head == NULL)
        return 0;
    else
    {
        temp = head;
        int cm5 = 0;
        while (temp != NULL)
        {
            if (temp->score % 5 == 0)
                cm5++;

            temp = temp->next;
        }
        return cm5;
    }
}

int search()
{
    if (head == NULL)
        cout << "there is no element present";
    else
    {
        temp = head;
        int tg, flag;
        cout << "enter the target element";
        cin >> tg;

        while (temp != NULL)
        {
            if (temp->score == tg)
                flag = 1;
            temp = temp->next;
        }
        return flag;
    }
}

void inputs()
{
    node *block = (node *)malloc(sizeof(node));
    block->next = NULL;
    while (1)
    {
        cout << "Enter Rno";
        cin >> block->rno;
        if (isUnique(block->rno) == 1)
            break;
        else
        {
            cout << "RNo should be unique enter again";
        }
    }

    cout << "enter score";
    cin >> block->score;

    if (block->score % 5 == 0)
        addatlast(block);

    else
    {
        afterlastmultipleof5(block);
    }
}

int main()
{
    int n;
    cout << "How many records? ";
    cin >> n;

    for (int i = 0; i < n; i++)
        inputs();

    cout << "\nFull list:\n";
    displayall();

    cout << "\nNumbers that are multiple of 5:\n";
    displaymultipleof5();

    cout << "\nCount of multiples of 5: " << countmulitpleof5() << endl;

    cout << count();
    return 0;
}
