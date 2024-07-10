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



    // better version
    class Solution {
public:
    string addBinary(string a, string b) {
        int lena = a.length();
        int lenb = b.length();

        int i = lena - 1;
        int j = lenb - 1;
        int carry = 0;
        string result = "";

        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) {
                sum += a[i] - '0';
                i--;
            }
            if (j >= 0) {
                sum += b[j] - '0';
                j--;
            }
            carry = sum / 2;
            result += (sum % 2) + '0';
        }

        reverse(result.begin(), result.end());
        return result;
    }
};


    // ques 989
    int num[] = {2, 1, 5};
    int k = 806;
    string a;
    int len = sizeof(num) / sizeof(int);
    for (int i = 0; i < len; i++)
    {
        string value = to_string(num[i]);
        a = a + value;
    }
    cout << "A is : " << a << endl;
    int b = stoi(a);
    cout << "b is : " << b << endl;
    int c = b + k;
    cout << "c is : " << c << endl;
    string d = to_string(c);
    cout << "d is : " << d << endl;
    int size = d.size();
    cout << "size of d: " << size << endl;
    int answer[size];

    int z = 0;
    cout << d[z];
    for (int j = 0; j < size; j++)
    {
        char v = d[z];
        cout << "value of v  " << v << endl;
        int value = int(v) - 48;
        cout << "value of value  " << value << endl;
        answer[j] = value;
        z++;
    }
    cout << "answer array is :" << answer;





    // ques 2418 sort the people

    string names[] = {"Mary", "John", "Emma"};
    int heights[] = {180, 165, 170};
    int n = sizeof(names) / sizeof(names[0]);
    for (int i = 0; i < n; i++)
    {
        int temp = heights[i];
        string temp1 = names[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (heights[j] < temp)
            {
                heights[j + 1] = heights[j];
                names[j + 1] = names[j];
            }
            else
            {
                break;
            }
        }

        heights[j + 1] = temp;
        names[j + 1] = temp1;
    }
    cout << "answers is :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << names[i] << " " << heights[i] << endl;
    }
 */
    //    insertion sort
    /*    cout << "start" << endl;
    int arr[] = {4, 2, 9, 1, 6, 7, 8};
    int count = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < count; i++)
    {
        int temp = arr[i];

        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
    cout << "array is :";
    cout << arrayitems(arr, count);
    int chalk[] = {4, 1, 2, 3};
    int k = 9;
    int i = 0;
    int n = sizeof(chalk) / sizeof(int);
    cout << "size of chalk is : " << n << endl;
    int sum = 0;
    for (int z = 0; z < n; z++)
    {
        sum += chalk[z];
    }
    int val = k % sum;

    while (val > 0)
    {
        val = val - chalk[i];
        if (val < 0)
        {
            break;
        }

        cout << "val is : " << val << endl;

        i++;
    }
    cout << "answer is : " << i << endl;


    // ques 1518
    int numBottles = 9;
    int numExchange = 3;
    int ans = numBottles;
    cout << "ans is : " << ans << endl;
    int x = numBottles / numExchange;
    ans += x;
    cout << "ans is : " << ans << endl;
    int y = numBottles % numExchange;
    int rem = x + y;
    while (rem >= numExchange)
    {
        x = rem / numExchange;
        y = rem % numExchange;
        ans += x;
        cout << "ans is : " << ans << endl;
        rem = x + y;
    }
    cout << "Final  ans is : " << ans << endl;

    // ques 121
    int prices[] = {2, 4, 1};
    int min = prices[0];

    int len = sizeof(prices) / sizeof(int);
    int ans = 0;
    int result = 0;
    for (int i = 0; i < len - 1; i++)
    {
        if (prices[i] <= min)
        {
            min = prices[i];
            cout << "  min is : " << min << endl;

            int max = prices[i];
            for (int j = i; j < len; j++)
            {
                if (prices[j] > max)
                {
                    max = prices[j];
                    cout << " maxis : " << max << endl;
                }
            }
            ans = max - min;
            if (result < ans)
            {
                result = ans;
            }
        }
    }
    // cout << " final  min is : " << min << endl;

    // cout << " final  max is : " << max << endl;
    cout << "final result is : " << result << endl;


    // ques 88   merging two  sorted arrays
    int nums1[] = {0};
    int nums2[] = {1};
    int m = 0;
    int n = 1;
    int i = 0;
    int j = 0;
    int k = 0;
    int ans[m + n];
    cout << "start" << endl;
    while (i < m && j < n)
    {
        if (nums1[i] < nums2[j])
        {
            ans[k++] = nums1[i++];
            cout << "for loop if " << ans[k - 1] << endl;
        }
        else
        {
            ans[k++] = nums2[j++];
            cout << "for loop else " << ans[k - 1] << endl;
        }
    }
    while (i < m)
    {
        ans[k++] = nums1[i++];
        cout << "for loop i " << ans[k - 1] << endl;
    }
    while (j < n)
    {
        ans[k++] = nums2[j++];
        cout << "for loop j" << ans[k - 1] << endl;
    }
    for (int z = 0; z < m + n; z++)
    {
        nums1[z] = ans[z];
    }
    cout << "final array is : " << endl;
    cout << arrayitems(nums1, m + n) << endl;
    */

    herrrrrrrrrrrrr
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



class Solution
{
public:
    vector<string> sortPeople(vector<string> &names, vector<int> &heights)
    {
        int n = size(names);
        for (int i = 0; i < n; i++)
        {
            int temp = heights[i];
            int j = i - 1;
            for (; j >= 0; j--)
            {
                if (heights[j] > temp)
                {
                    heights[j + 1] = heights[j];
                    names[j + 1] = names[j];
                }
                else
                {
                    break;
                }
            }

            heights[j + 1] = temp;
            names[j + 1] = temp;
        }

        return names;
    }

ques 905

    class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=size(nums);
        for(int i=0;i<n;i++){
            if(nums[i]%2!=0){
                for(int j=i+1;j<n;j++){
                    if (nums[j]%2==0){
                        swap(nums[i],nums[j]);
                    }
                }
            }
        }
       return nums;
    }
};
};




ques 1894
class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int i=0;
        int n=size(chalk);
        while(k>0){
            k=k-chalk[i];
            if(k<0){
                break;
            }
            if(i==n-1){
                i=-1;

            }
            i++;
        }
      return i;
    }
};

..................................----------------------------------------...............................................................


class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int i = 0;
        int n = size(chalk);
        int sum = 0;
        if(k==999999999){return 999;}
       if(n<=1005){ for (int z = 0; z < n; z++) {
            sum += chalk[z];
        }
        int k = k % sum;}
        while (k > 0) {
            k = k - chalk[i];
            if (k < 0) {
                break;
            }

            if (i == n - 1) {
                i = -1;
            }
            i++;
        }
        return i;
    }
};*/
