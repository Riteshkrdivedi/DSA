#include <iostream>
using namespace std;
#include <string>

int print2d(int arr[2][3])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
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
     */

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
              cout << count<<endl;
        }
        if(check >1)
        {
            break;
        }
    }
        cout << count;
 
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
