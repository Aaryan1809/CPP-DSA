#include <bits/stdc++.h>
using namespace std;

class LL
{
private:
    char data[50];
    LL *next;

public:
    LL *head = NULL, *tail = NULL, *temp = NULL, *node = NULL, *temp2 = NULL LL()
    {
        next = NULL;
    }

    void input(char data);
    void addatBegin();
    void addatLast();
    void delatLast();
    void delatFirst();
    int count();
    void display();
    void addatPosition();
    void delatPosition();
};

int main()
{

    return 0;
}