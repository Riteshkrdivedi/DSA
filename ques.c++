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
 */
    // one more
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
}
