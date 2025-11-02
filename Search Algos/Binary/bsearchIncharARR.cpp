#include <bits/stdc++.h>
using namespace std;

int bs(char arr[][50], char tg[])
{
    int st = 0;
    int end = 6;
    int mid;
    while (st <= end)
    {
        mid = (st + end) / 2;

        if (strcmp(arr[mid], tg) < 0)
            st = mid + 1;
        else if (strcmp(arr[mid], tg) > 0)
            end = mid - 1;
        else
            return mid;
    }
    return -1;
}

int main()
{
    char arr[6][50] = {
        "AFG", "ASFG", "DSGHFJ", "SADGFH", "ERYRTUJ", "DFHG"};
    char tg[] = "AFG";

    int pos = bs(arr, tg);
    if (pos != -1)
        cout << "Found at index: " << pos;
    else
        cout << "Not found";

    return 0;
}
