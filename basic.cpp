#include <bits/stdc++.h>
using namespace std;

int bs(vector<int> arr, int tg)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        int mid = (end + start) / 2;

        if (tg < arr[mid])
        {
            end = mid - 1;
        }

        else if (tg > arr[mid])
        {
            start = mid + 1;
        }

        else
        {
            return mid;
        }
    }
    return -1;
}

int bs_desc(vector<int> arr, int tg)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        int mid = (end + start) / 2;

        if (tg < arr[mid])
        {
            start = mid + 1;
        }

        else if (tg > arr[mid])
        {
            end = mid - 1;
        }

        else
        {
            return mid;
        }
    }
    return -1;
}

int auto_bs(vector<int> arr, int tg)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {

        if (arr[start] < arr[end])
        {
            int mid = (end + start) / 2;
            if (tg < arr[mid])
            {
                end = mid - 1;
            }

            else if (tg > arr[mid])
            {
                start = mid + 1;
            }

            else
            {
                return mid;
            }
        }

        else if (arr[start] > arr[end])
        {
            int mid = (end + start) / 2;
            if (tg < arr[mid])
            {
                start = mid + 1;
            }

            else if (tg > arr[mid])
            {
                end = mid - 1;
            }

            else
            {
                return mid;
            }
        }
        else
        {
            return -1;
        }
    }
}

int main()
{
    // ascending order array
    vector<int> array = {1, 2, 3, 4, 5, 5, 6, 7, 8, 9};

    // descending order array
    vector<int> array2 = {9, 8, 7, 6, 5, 5, 4, 3, 2, 1};

    int target = 20;
    cout << bs(array, target);
    cout << bs_desc(array2, target);
    cout << auto_bs(array, target);
    return 0;
}
