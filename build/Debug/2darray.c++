#include <iostream>
using namespace std;
#include <string>
#include <vector>

// int print2d(int arr[m][n], int m, int n)
// {

//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
int print1d(vector<int> arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

int getpivot(int nums[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid;
    while (s < e)
    {
        mid = s + (e - s) / 2;
        cout << "mid is   : " << mid << endl;
        if (mid == 0)
        {
            return mid + 1;
        }
        if (nums[mid] > nums[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return s;
}

int main()
{ /*
     int matrix[3][4] = {{1, 3, 5, 7},
                         {10, 11, 16, 20},
                         {23, 30, 34, 60}};
     int target = 60;
     int m = sizeof(matrix) / sizeof(matrix[0]);
     int n = sizeof(matrix[0]) / sizeof(matrix[0][0]);
     int sm = 0;
     int em = m - 1;
     cout << m << endl;
     cout << n << endl;
     int sn = 0;
     int en = n - 1;
     int check = 0;
     while (sm <= em)
     {
         int mid = sm + (em - sm) / 2;
         cout << mid << endl;

         if (target >= matrix[mid][0] && target <= matrix[mid][n - 1])
         {
             cout << "inside" << endl;
             while (sn <= en)
             {
                 int midn = sn + (en - sn) / 2;
                 if (matrix[mid][midn] == target)
                 {
                     check = 1;
                 }
                 if (matrix[mid][midn] > target)
                 {
                     en = midn - 1;
                 }
                 else
                 {
                     sn = midn + 1;
                 }
             }
         }
         if (target > matrix[mid][0])
         {
             sm = mid + 1;
         }
         else
         {
             em = mid - 1;
         }
     }

     if (check == 0)
     {
         cout << "false" << endl;
     }
     else
     {
         cout << "true" << endl;
     }

    int original[6] = {1, 2, 3, 4, 5, 6};

    int m = 2;
    int n = 3;
    int newarray[2][3];
    int k = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            newarray[i][j] = original[k];
            k++;
        }
    }

    cout << print2d(newarray) << endl;


    string s = "hello world";
    int count = 0;
    int size = s.size();
    int check = 0;
    for (int j = size - 1; j >= 0; j--)
    {
        if (s[j] != ' ')
        {
            while (s[j] != ' ')
            {
                cout << "inside" << endl;
                count++;
                if (j > 0)
                {
                    j--;
                }
                else
                {
                    break;
                }
            }
            cout << count << endl;
        }
        if (check > 1)
        {
            break;
        }
    }
    cout << count;

    //  ques 153
    int nums[5] = {10, 1, 10, 10, 10};
    int n = sizeof(nums) / sizeof(nums[0]);
    int pivot = getpivot(nums, n);
    cout << "pivot is : " << pivot << endl;
    if (nums[pivot] <= nums[0] && nums[pivot] <= nums[n - 1])
    {
        cout << "first :" << nums[pivot] << endl;
    }
    else if (nums[n - 1] <= nums[0] && nums[n - 1] <= nums[pivot])
    {
        cout << "second :" << nums[n - 1] << endl;
    }
    else
    {
        cout << "last :" << nums[0] << endl;
    }

    //   ques 50
    int x = 2;
    int n = 10;
    float r = 1;
    while (n > 0)
    {
        if (n & 1)
        {
            r = r * x;
        }
        x = x * x;
        n = n >> 1;

        cout << "hell" << endl;
    }
    cout << r;

    // ques 746
    int cost[3] = {10, 15, 25};
    int sum = 0;
    int n = sizeof(cost) / sizeof(cost[0]);

    int i = 0;
    if (i >= n - 2)
    {
        i = 0;
        sum += cost[i];
    }
    else if (i + 1 >= n - 2)
    {
        i = 1;
        sum += cost[1];
    }
    else if (cost[i] < cost[i + 1])
    {
        sum += cost[i];
        i = 0;
    }
    else
    {
        i = 1;
        sum += cost[1];
    }
    cout << "sum is :" << sum << endl;
    cout << "value if i :" << i << endl;
    while (i <= n)
    {

        if (cost[i + 1] < cost[i + 2])
        {
            i = i + 1;
        }
        else
        {
            i = i + 2;
        }
        sum += cost[i];
        cout << "sum is :" << sum << endl;
        cout << "value if i :" << i << endl;

        if ((n == i + 1) || (n == i + 2))
        {
            break;
        }

    }

    cout << "final ans is :" << sum << endl;

    //   ques 56
    int intervals[4][2] = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    cout << intervals[0] << endl;

    int n = sizeof(intervals) / sizeof(intervals[0]);
    int merged[4][2];

    merged[0] = intervals[0];
    for (int i = 1; i < n; i++)
    {
        if (intervals[i][0] <= merged[i - 1][1])
        {
            merged[i - 1][1] = intervals[i][1];
        }
        else
        {
            merged[i] = intervals[i];
        }
    }
    cout << print2d(merged, 4, 2) << endl;

    //    ques 42
    int height[12] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int n = sizeof(height) / sizeof(height[0]);
    int x = 0;
    int y = 1;
    int mux;
    int ans = 0;
    while (y < n)
    {
        if (x == y)
        {
            y++;
            cout << "y is :" << y << endl;
        }
        if (height[y] == 0)
        {
            y++;
            cout << "y is :" << y << endl;
        }
        if (height[x] == 0)
        {
            x++;
            cout << "x is :" << x << endl;
        }
        else
        {
            mux = min(height[x], height[y]) * (y - x);
            cout << "mux  :" << mux << endl;
            ans += mux;
            cout << "ans  :" << ans << endl;
            x++;
            y++;
        }
    }
    cout << "final is :" << ans << endl;
      */
    //  ques 436

    int intervals[4][2] = {{1, 2}, {2, 3}, {3, 4}, {1, 3}};
    int n = sizeof(intervals) / 4;
    vector<int> ans(n);
    cout<<n<<endl;
    if (n == 1)
    {
        cout << -1 << endl;
    }

    int counter = 1;
    for (int i = 1; i < n; i = i + 2)
    {
        for (int j = 0; j < n; j = j + 2)
        {
            if (intervals[j] >= intervals[i])
            {
                counter++;
                ans.push_back(counter);
            }
            else
            {
                ans.push_back(-1);
            }
        }
    }
    cout << print1d(ans, n) << endl;
}

/*class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        for (int i = 0; i < m; i++) {
            int sn = 0;
            int en = n - 1;
            while (sn <= en) {
                int midn = sn + (en - sn) / 2;
                if (matrix[i][midn] == target) {
                    return true;
                }
                if (matrix[i][midn] > target) {
                    en = midn - 1;
                } else {
                    sn = midn + 1;
                }
            }
        }
        return false;
    }
};*/
