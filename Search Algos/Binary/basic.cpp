// #include <bits/stdc++.h>
// using namespace std;

// int bs(vector<int> arr, int tg)
// {
//     int start = 0;
//     int end = arr.size() - 1;

//     while (start <= end)
//     {
//         int mid = (end + start) / 2;

//         if (tg < arr[mid])
//         {
//             end = mid - 1;
//         }

//         else if (tg > arr[mid])
//         {
//             start = mid + 1;
//         }

//         else
//         {
//             return mid;
//         }
//     }
//     return -1;
// }

// int bs_desc(vector<int> arr, int tg)
// {    
//     int start = 0;
//     int end = arr.size() - 1;

//     while (start <= end)
//     {
//         int mid = (end + start) / 2;

//         if (tg < arr[mid])
//         {
//             start = mid + 1;
//         }

//         else if (tg > arr[mid])
//         {
//             end = mid - 1;
//         }

//         else
//         {
//             return mid;
//         }
//     }
//     return -1;
// }

// int auto_bs(vector<char> arr, char tg)
// {
//     int start = 0;
//     int end = arr.size() - 1;

//     while (start <= end)
//     {
//         int mid = (start + end) / 2;
//         bool asc = arr[start] < arr[end];
//         if (tg == arr[mid])
//         {
//             return mid;
//         }

//         if (asc)
//         {
//             if (tg < arr[mid])
//             {
//                 end = mid - 1;
//             }
//             else
//             {
//                 start = mid + 1;
//             }
//         }

//         else
//         {
//             if (tg < arr[mid])
//             {
//                 start = mid + 1;
//             }
//             else
//             {
//                 end = mid - 1;
//             }
//         }
//     }
// }

// int main()
// {
//     // ascending order array
//     vector<char> array = {'a', 's', 'd', 'g', 'f', 'c', 'q', 'e', 'h', 'x', 'f', 'l'};

//     // descending order array
//     vector<char> array2 = {'a', 'c', 'q', 'e', 'h', 'f', 'l', 's', 'd', 'g', 'f', 'c'};

//     char target = 'x';
//     // cout << bs(array, target);
//     // cout << bs_desc(array2, target);
//     cout << auto_bs(array, target);
//     // cout << auto_bs(array2, target);
//     return 0;
// }

