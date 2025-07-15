#include <iostream>
#include <vector>
using namespace std;

int find_x(vector<int> arr, int tg)
{
    int st = 0;
    int end = arr.size() - 1;

    while (st <= end)
    {
        int mid = st + end / 2;

        if (tg > arr[mid])
        {
            st = mid + 1;
        }

        else if (tg < arr[mid])
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

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 9;

    cout << find_x(arr, target);

    return 0;
}