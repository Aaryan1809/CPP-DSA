#include <bits/stdc++.h>
using namespace std;

class abc
{
public:
    int a, data = 10;
};

int main()
{
    abc a;
    abc *b = &a;
    a.data = 199;
    // b->data = 100;
    cout << a.data;
    cout << b->data;
    return 0;
}