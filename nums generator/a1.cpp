#include <bits/stdc++.h>
using namespace std;
int main()
{
    ofstream abc("nums.txt");
    abc << "{ ";
    for (int a = 0; a <= 10000; a = a + 12)
    {
        abc << a << " , ";
    }
    abc  << " }";
    return 0;
}