// find the target number or give output of nearest greatest number.
#include <bits/stdc++.h>
using namespace std;

// in this find the ceiling of array
int ceiling(vector<int> &arr, int tg)
{
    int start = 0;
    int end = arr.size() - 1;

    if (tg > arr[arr.size() - 1])
    {
        return -1;
    }

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (tg == arr[mid])
        {
            return mid;
        }

        else if (tg < arr[mid])
        {
            end = mid - 1;
        }

        else
        {
            start = mid + 1;
        }
    }
    if (start < arr.size())
    {
        return arr[start];
    }

    else
    {
        cout << "No near number not exist.";
    }
}

// in this find the floor of array
int floor(vector<int> &arr, int tg)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (tg == arr[mid])
        {
            return mid;
        }

        else if (tg < arr[mid])
        {
            end = mid - 1;
        }

        else
        {
            start = mid + 1;
        }
    }
    if (end < arr.size())
    {
        return arr[end];
    }

    else
    {
        return -1;
    }
}

int main()
{
    vector<int> array = {12, 14, 15, 16, 19, 21, 25, 29, 39};
    int target = 230;

    cout << ceiling(array, target);
    // cout << floor(array, target);
    return 0;
}
