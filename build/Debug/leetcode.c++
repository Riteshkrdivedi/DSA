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
        if (nums[mid] > target)
        {
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
        if (nums[mid] < target)
        {
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




    //    ques 34  :   first and last occurance of int in an array

    int arr[] = {1, 2, 2, 2, 2, 2, 3};
    int len = (sizeof(arr) / sizeof(int));
    cout << "first occurance " << firstoccurance(arr, len, 2) << endl;
    cout << "last occurance " << lastoccurance(arr, len, 2) << endl;




    string s = "hello";
    int n = s.size();
    int ans = 0;
    int sol = 0;
    for (int i = 1; i < n; i++)
    {
        ans = s[i - 1] - s[i];
        cout << s[i - 1] - s[i] << endl;
        if (ans < 0)
        {
            ans = ans * (-1);
        }
        sol += ans;
    }
    cout << "ans is : " << sol << endl;

*/

    // ques 67  add binary

    string a = "11";
    string b = "1";

    int lena = a.length();
    cout << "length of a is :  " << lena << endl;
    int lenb = b.length();
    cout << "length of b is :  " << lenb << endl;
    string newstr;
    if (lena >= lenb)
    {
        int j = lenb - 1;
        for (int i = lena - 1; i >= 0; i--)
        {
            int rem = 0;
            if (j >= 0)
            {
                cout << a[i] << endl;
                cout << b[j] << endl;
                cout << a[i] + b[j] << endl;
                if (a[i] + b[j] == 96)
                {
                    newstr = newstr + '0';
                    cout << "1";
                }
                if (a[i] + b[j] == 97)
                {
                    newstr += '1';
                    cout << "2";
                }
                if (a[i] + b[j] == 98)
                {
                    newstr += '0';
                    rem = 1;
                    cout << "3";
                }
                if (a[i] + b[j] == 99)
                {
                    newstr += '1';
                    rem = 1;
                    cout << "4";
                }
                j--;
            }
            else
            {
                if (a[i] == 96)
                {
                    newstr += '0';
                }
                if (a[i] == 97)
                {
                    newstr += '1';
                }
                if (a[i] == 98)
                {
                    newstr += '0';
                    rem = 1;
                }
            }

            if (i - 1 < 0)
            {
                cout << "here" << endl;
                newstr += to_string(rem);
            }
            else
            {
                a[i - 1] += rem;
            }

            cout << "newstr is :" << newstr << endl;
        }
    }
    else
    {
        int j = lena - 1;
        for (int i = lenb - 1; i >= 0; i--)
        {
            int rem = 0;
            if (j >= 0)
            {
                if (b[i] + a[j] == 96)
                {
                    newstr += '0';
                }
                if (b[i] + a[j] == 97)
                {
                    newstr += '1';
                }
                if (b[i] + a[j] == 98)
                {
                    newstr += '0';
                    rem = 1;
                }
                if (b[i] + a[j] == 99)
                {
                    newstr += '1';
                    rem = 1;
                }
                j--;
            }
            else
            {
                if (b[i] == 96)
                {
                    newstr += '0';
                }
                if (b[i] == 97)
                {
                    newstr += '1';
                }
                if (b[i] == 98)
                {
                    newstr += '0';
                    rem = 1;
                }
            }
            if (i - 1 < 0)
            {
                newstr += to_string(rem);
            }
            else
            {
                b[i - 1] += rem;
            }
            cout << "newstr is :" << newstr << endl;
        }
    }

    int len = newstr.length();
    string ans;
    for (int k = len - 1; k >= 0; k--)
    {
        ans += newstr[k];
    }
    cout << "answer string is  " << ans;
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