/*aama aapda ee target number first vakhat kaya index par che ee code lakhyo che*/

#include <bits/stdc++.h>
using namespace std;

int first_occ(vector<int> arr, int tg)
{
    int st = 0;
    int end = arr.size() - 1;
    int ans = -1;

    while (st <= end)
    {
        int mid = (end + st) / 2;
        /*logic:
            first occurence sodhva nu che etle aapde jya number malyo ena thi pachad aj sodhisu kem ke aa sorted array che aagad hoy to ee aapda ne joieto nathi and pachad agar koi number hoy to eno index joie che

            eetle number malya pachi aapde ene direct return nai karie but ene aapde end value samjhi ne eni pachad search karisu

            ane agar ema na male to direct pehla vala nu index jato rehse
        */
        if (tg == arr[mid])
        {
            ans = mid;
            end = mid - 1;
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
    vector<int> array = {1, 2, 5, 7, 7, 7, 7, 7, 8, 9, 10};
    int target = 7;

    cout << first_occ(array, target);
    return 0;
}