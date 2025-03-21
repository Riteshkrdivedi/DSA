#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <algorithm>

// array print
// int print1d(vector<int> arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// sum of array
int getsum(int *arr, int size)
{
    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
    {
        cout << "inside " << arr[0] << endl;
        return arr[0];
    }
    int remaining_sum = getsum(arr + 1, size - 1);
    cout << "remaining sum  :" << remaining_sum << endl;
    int sum = arr[0] + remaining_sum;
    cout << "arr[0]  :" << arr[0] << endl;
    cout << "sum  :" << sum << endl;
    return sum;
}

int main()
{
    /* vector<int> nums = {1, 6, 1};
     int k = 3;
     int n = nums.size();
     int m = n * n;
     vector<int> values(m, 1);
     int z = 0;
     for (int i = 0; i < n - 1; i++)
     {
         for (int j = i + 1; j < n; j++)
         {
             int diff = nums[i] - nums[j];
             if (diff < 0)
             {
                 diff = diff * (-1);
             }
             values[z] = diff;
             z++;
         }
     }
     sort(values.begin(), values.end());
     cout << print1d(values, m) << endl;
     cout << values[k - 1];

    // EFFICIENT SOLUTION

    vector<int> nums = {1, 6, 1};
    int k = 3;

    // Step 1: Sort the array
    sort(nums.begin(), nums.end());

    int n = nums.size();
    // Step 2: Set up binary search for the minimum distance
    int low = 0, high = nums[n - 1] - nums[0];

    while (low < high)
    {
        int mid = (low + high) / 2;
        int count = 0, j = 0;

        // Step 3: Count the pairs with distance less than or equal to mid
        for (int i = 0; i < n; i++)
        {
            while (j < n && nums[j] - nums[i] <= mid)
                j++;
            count += j - i - 1;
        }

        // Step 4: Adjust binary search based on the count
        if (count < k)
            low = mid + 1;
        else
            high = mid;
    }

    cout << low;

    // one more way


    vector<int> nums = {1, 6, 1};
    int k = 3;
    int n = nums.size();

    // Sort the input vector
    sort(nums.begin(), nums.end());

    // Calculate differences between adjacent elements
    vector<int> differences;
    for (int i = 1; i < n; ++i)
    {
        differences.push_back(nums[i] - nums[i - 1]);
    }

    // Find the k-th smallest difference
    nth_element(differences.begin(), differences.begin() + k - 1, differences.end());

    cout << differences[k - 1] << endl;


    // 3 sum
    vector<int> nums = {0,0,0,0};
    int n = nums.size();
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());

    for (int i = 0; i < n - 2; i++)
    {
        int s = i + 1;
        int e = n - 1;
        cout << i << endl;
        cout << s << endl;
        cout << e << endl;
        cout << endl;
        if (i > 0)
        {
            if (nums[i] == nums[i - 1])
            {
                i++;
            }
        }
        while (s < e)

        {
            if (nums[s] == nums[s + 1] && nums[e] == nums[e - 1])
            {
                s++;
                e--;
            }
            if (nums[i] + nums[s] + nums[e] == 0)
            {
                ans.push_back({i + 1, s + 1, e + 1});
                cout << nums[i] << endl;
                cout << nums[s] << endl;
                cout << nums[e] << endl;
                cout << endl;
                s++;
                e--;
            }
            else if (nums[i] + nums[s] + nums[e] > 0)
            {
                e--;
                cout << "else if" << endl;
            }
            else
            {
                s++;
                cout << "else" << endl;
            }
        }
        // if (nums[i] == nums[i + 1])
        // {
        //     i++;
        // }
    }
    cout << ans.size();
    return 0;


    // uglu number
    int n = 140;
    if (n == 1)
    {
        cout << 1;
    }
    int count = 1;
    int i = 2;
    int temp = i;
    while (count <= n)
    {
        // cout << i << endl;
        // int temp=i;
        cout << "temp is  :" << temp << endl;
        if (temp % 2 == 0)
        {
            temp = temp / 2;
        }
        else if (temp % 3 == 0)
        {
            temp = temp / 3;
        }
        else if (temp % 5 == 0)
        {
            temp = temp / 5;
        }
        else if (temp == 1)
        {
            count++;
            cout << "count is  : " << count << endl;
            //  break;
            cout << endl;
            i++;
            temp = i;
            if (count == n)
            {
                break;
            }
        }
        else
        {
            i++;
            temp = i;
        }
    }
    cout << i - 1 << endl;


    //
    int n;
    cout << "n   :";
    cin >> n;
    cout << endl;
    int k;
    cout << "k   :";
    cin >> k;
    cout << endl;
    vector<int> arr;
    for (int i = 1; i <= n; i++)
    {
        arr.push_back(i);
    }
    int j = 0;
    int num = 0;
    while (arr.size() > 1)
    {
        int size = arr.size();
        cout << "size  :" << size << endl;
        j = (num) % size;
        cout << "j  :" << j << endl;
        num = (j + k - 1) % size;
        cout << "index  :" << num << endl;
        arr.erase(arr.begin() + num);
    }
    cout << arr[0];


    //
    int n;
    cout << "enter n  :";
    cin >> n;
    vector<int> num;
    for (int i = 1; i <= n; i++)
    {
        num.push_back(i);
    }
    while (num.size() > 1)
    {
        int x = num.size();
        if (x == 2)
        {
            cout <<"a"<< num[1] << endl;
            break;
        }
        for (int i = 0; i < x-1; i = i + 1)
        {
            cout <<"b"<< num[i] << endl;
            num.erase(num.begin() + i);
        }
        int y = num.size();
        if (y == 2)
        {
            cout<<"c" << num[0] << endl;
            break;
        }
        for (int i = y - 1; i >= 0; i = i - 1)
        {
            cout<<"d" << num[i] << endl;
            num.erase(num.begin() + i-1);
        }
    }
    cout << "end";

    */
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -15, -15};
    int k = 5;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << "size is :" << arr.size() << endl;

        cout << "i  :" << arr[i] << endl;
        for (int j = i + 1; j < arr.size(); j++)
        {
            cout << "j  :" << arr[j] << endl;
            if ((arr[i] + arr[j]) >= k && (arr[i] + arr[j]) >= k * (-1) && (arr[i] + arr[j]) % k == 0)
            {
                cout << "j erased  :" << arr[j] << endl;
                arr.erase(arr.begin() + j);
                cout << "i erased :" << arr[i] << endl;
                arr.erase(arr.begin() + i);
                i--;
                break;
            }
        }
    }
    if (arr.size() == 0)
    {
        cout << " true";
    }
    cout << "false";
}
