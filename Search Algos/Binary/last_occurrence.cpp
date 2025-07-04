/*aama aapda ee target number last vakhat kaya index par hato ee code lakhyo che*/

#include <bits/stdc++.h>
using namespace std;

int last_occ(vector<int> arr, int tg)
{
    int st = 0;
    int end = arr.size() - 1;
    int ans = -1;

    while (st <= end)
    {
        int mid = (end + st) / 2;

        /*logic:

        aama aapda ne last aa number kya che ee jovanu che etle aapda ne jyare number malse to ene return nai kariye but eni aagad haju find karisu ke ani aagad koi number to nathi ne
        */
        if (tg == arr[mid])
        {
            ans = mid;
            st = mid + 1;
        }

        else if (tg > arr[mid])
        {
            st = mid + 1;
        }

        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> array = {1, 2, 5, 7, 7, 7, 7, 7, 7, 9, 10};
    int target = 7;

    cout << last_occ(array, target);
    return 0;
}