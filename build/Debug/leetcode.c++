#include <iostream>
#include <string>
using namespace std;

// array items function

int arrayitems(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ,  ";
    }
}

// first occurance

int firstoccurance(int nums[], int size, int target)
{

    int s = 0;
    int e = size - 1;
    int first = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (nums[mid] == target)
        {
            first = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return first;
}

// last occurance

int lastoccurance(int nums[], int size, int target)
{

    int s = 0;
    int e = size - 1;
    int last = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (nums[mid] == target)
        {
            last = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return last;
}

int main()
{

    // two pointer method

    /*
        int nums[] = {0, 1, 2, 2, 3, 0, 4, 2};
        int val = 2;
        int n = sizeof(nums) / sizeof(int);
        cout << "size of array  : " << n << endl;
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] != val)
            {
                nums[j] = nums[i];
                j++;
            }
        }
        cout << "final answer :";
        cout << arrayitems(nums, n) << endl;
        cout << "count is : " << j << endl;



    //    palindrome no

    int x = 125521;
    string y = to_string(x);
    int size = y.size();
    string newstr;
    for (int i = size - 1; i >= 0; i--)
    {
        newstr += y[i];
    }
    // int nw = stoi(newstr);
    if (y==newstr)
    {
        cout << "palindrome" << endl;
    }else{

        cout << "not  palindrome" << endl;

    }



    int arr[] = {1, 3, 2};
    int len = sizeof(arr) / sizeof(int);
    int count = 0;
    for (int i = 0; i <= len - 1; i++)
    {
        if ((arr[i] % 2) == 1)
        {
            count++;
            cout << arr[i] << endl;
            for (int j = i + 1; j < len; j++)
            {
                if ((arr[j] % 2) == 1)
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            if (count >= 3)
            {
                cout << "true" << endl;
            }
            else
            {
                count = 0;
            }
        }
    }
    cout << "false";



     */

    //    ques 34  :   first and last occurance of int in an array

    int arr[] = {1, 2, 2, 2, 2, 2, 3};
    int len = (sizeof(arr) / sizeof(int));
    cout << "first occurance " << firstoccurance(arr, len, 2) << endl;
    cout << "last occurance " << lastoccurance(arr, len, 2) << endl;
}

// rough
/*class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int n = nums.size();
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == nums[i + 1])
            {

                count++;
                int k = i + 1;
                for (int j = i + 1; j < n; j++)
                {
                    if (nums[j] != nums[i])
                    {
                        nums[k] = nums[j];
                        k++;
                    }
                    n--;
                }
                i--;
            }
        }
        return n - count;
    }
};

*/