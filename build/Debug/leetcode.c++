#include <iostream>
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
}
