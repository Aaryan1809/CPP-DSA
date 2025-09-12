//     1
//    21
//   321
//  4321
// 54321

#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j > 0; j--)
        {
            cout << " ";
        }

        for (int k = 0; k < i; k++)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}