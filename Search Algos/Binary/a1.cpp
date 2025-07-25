#include <bits/stdc++.h>
using namespace std;
int main()
{
    ofstream abc("nums.txt");
    abc << "{ ";
    for (int a = 0; a <= 1000000; a = a + 7)
    {
        abc << a << " , ";
    }
    abc  << " }";
    return 0;
}