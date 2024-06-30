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

        */

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