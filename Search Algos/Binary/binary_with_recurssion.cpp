#include <bits/stdc++.h>
using namespace std;

int bs_rec(vector<int> arr, int tg, int st, int end)
{
    while (st <= end)
    {
        int mid = (st + end) / 2;

        if (tg == arr[mid])
        {
            return mid;
        }

        else if (tg < arr[mid])
        {  
            return bs_rec(arr, tg, st, mid - 1);
        }

        else
        {
            return bs_rec(arr, tg, mid + 1, end);
        }
    }

    return -1;
}

int main()
{
    vector<int> array = {1, 2, 3, 4, 5, 6, 6, 7, 89, 90, 100};
    int tg = 90;

    cout << bs_rec(array, tg, 0, array.size() - 1);
    return 0;
}