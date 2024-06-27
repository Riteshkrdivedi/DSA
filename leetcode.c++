#include <iostream>
#include <math.h>
using namespace std;
#include <vector>

void AP()
{
   int a, n, d;
   cout << "enter first term : ";
   cin >> a;

   cout << "enter  difference : ";
   cin >> d;

   cout << "which term you want : ";
   cin >> n;

   cout << "your answer is : " << a + (n - 1) * d;
}

int totalbits(int a, int b)
{
   int n1 = 0;
   int n2 = 0;
   for (int i = 0; i < 32; i++)
   {

      if (a & 1)
      {
         n1 = n1 + 1;
         // cout << "one more for first" << endl;
      }
      if (b & 1)
      {
         n2 = n2 + 1;
         // cout << "one more for second" << endl;
      }
      a = a >> 1;
      b = b >> 1;
   }
   cout << "bits for one : " << n1 << endl;
   cout << "bits for two : " << n2 << endl;
   return n1 + n2;
}

void print(int num[], int count)
{
   for (int i = 0; i < count; i++)
   {
      cout << num[i];
      /* code */
   }
}

void printV(vector<int> num)
{

   int count = sizeof(num) / 4;
   for (int i = 0; i < count; i++)
   {
      cout << num[i];
      /* code */
   }
}

int main()
{

   // class Solution(object){}
   // def subtractProductAndSum(self, n):
   //    int product=1;
   //    int sum=0;
   //     while(n!=0){
   //         int no=n%10;
   //         product=product*no;
   //         sum=sum+no;
   //         n=n/10;

   //         }
   //     cout<<product-sum;
   //     return int;

   // decimal to binary converter

   //   int n;
   //   cout << "enter  a no. :";
   //   cin >>n;
   //   cout <<  endl;
   //   int i = 0;
   //   int bin=0;

   //   while (n!=0)
   //   {
   //       int a = n & 1;
   //       bin = (a * pow(10,i)) + bin;
   //       i++;
   //       n = n >>1;
   //   }
   //   cout << "binary is :" << bin;

   // to reverse a no.

   // int n;
   // cout << "enter the no : ";
   // cin>>n;
   // int reverse = 0;

   // while (n!=0)
   // {
   //     int last=n%10;
   //     reverse = reverse * 10 + last;       //formula for same flow    same=a*10^i +same
   //     n = n / 10;
   // }
   // cout << "reverse no. is  : " << reverse;

   // binary to decimal converter

   // int n;
   // cout<<"enter binary no. : ";
   // cin>>n;
   // int digit;
   // int i=0;
   // int ans = 0;
   // while (n!=0)
   // {
   //     digit = n % 10;
   //     if (digit==1)
   //     {
   //         ans = ans + pow(2, i);
   //     }
   //     i++;
   //     n = n /10;

   //     }
   //     cout << "decimal no. is : " << ans;

   // reverse integer

   // cout << "enter  a integer : ";
   // int n;
   // cin >> n;
   // double rev=0;
   // int sorry = 0;
   // if ((n>=(pow(2,31)-1)) || (n<=(-pow(2,31)))){
   //     cout << "oops-1";
   //     // return 0;

   // }
   // else{
   //     while (n!=0)
   //     {
   //         int l = n % 10;
   //         rev = rev * 10 + l;
   //         n = n / 10;
   //         if ((rev>=(pow(2,31)-1)) || (rev<=(-pow(2,31)))){
   //         cout << "oops-2";
   //         sorry = 1;
   //         break;
   //     // return 0;

   // }
   //     }
   //     if (sorry==1)
   //     {
   //         cout << "sorry answer is bigger than expected";
   //     }

   //    else{ // return rev;

   //     cout << rev;}
   //     }

   //     // rough leetcode
   //         double rev = 0;
   //     int sorry = 0;
   //     if ((x >= (pow(2, 31) - 1)) || (x <= (-pow(2, 31)))) {

   //         return 0;

   //     } else {
   //         while (x != 0) {
   //             int l = x % 10;
   //             rev = rev * 10 + l;
   //             x = x / 10;
   //             if ((rev >= (pow(2, 31) - 1)) || (rev <= (-pow(2, 31)))) {

   //                 sorry = 1;
   //                 break;
   //             }
   //         }
   //         if (sorry == 1) {
   //             return 0;
   //         } else {
   //             return rev;
   //         }
   //     }

   // 1009 complement of base 10 integer

   // wrong approach

   // cout << "enter  a no. :";
   // int n;
   // cin >> n;

   // int i = 0;
   // int ans = 0;
   // while (n != 0)
   // {
   //     if (n & 1)
   //     {
   //         ans = ans;
   //     }
   //     else
   //     {
   //         ans = ((1 * pow(10, i)) + ans);
   //     }
   //     cout<<"ans : " << ans << endl;
   //     i++;
   //     n = n >> 1;
   //     }
   //     i=0;

   //     int sol=0;
   //     while(ans!=0){
   //         if(ans % 10){
   //             sol=pow(2,i)+sol;
   //             cout <<"sol : "<< sol<<endl;
   //         }
   //         i++;
   //         ans=ans/10;
   //     }
   //     cout << sol;

   //     // right approach

   //       int m =n;
   // int mask=0;     //first make a mask or filter which can do & with each bit
   // if (n==0){
   //     return 1;     // to create this mask create  a loop as no. of times as value is entered and left shift mask and add 1 means do or operation
   // }                   //  with each bit
   // while(m!=0)
   // {
   //     mask=(mask<<1)|1;
   //     m=m>>1;
   // }
   //  int ans=(~n)&mask;
   // return ans;

   // love babbr ki practice

   // int a,b;
   // cout << "eneter value of a  " ;
   // cin >> a;
   //  cout << "eneter value of b  " ;
   // cin >> b;
   // char ch;
   // cout << "enter operation as +,-,*,/  " ;
   // cin >> ch;

   // switch (ch)
   // {
   // case '+' :
   //     cout << "solution is :" << a + b << endl;
   //     break;
   // case '-' :
   //     cout << "solution is :" << a - b << endl;
   //     break;
   // case '*' :
   //     cout << "solution is :" << a * b << endl;
   //     break;
   // case '/' :
   //     cout << "solution is :" << a / b << endl;
   //     break;

   // default:
   //     cout << "dhang t daaal le " << endl;
   //     break;
   // }
   /*     int n;
        cout << "enter rupees  :";
        cin >> n;

       int h = n / 100;
        cout << "no. of hundred notes :" << h<<endl;
        int a =n-(h*100) ;

        int b = a / 50;
        cout << "no. of 50 notes : " << b << endl;

        int c = a - (b * 50);
        int d = c / 20;
        cout << "no. of 20 rs notes :" << d<<endl;
        int e = c - (d * 20);


        cout << "no. of 1 notes : " <<e << endl;*/

   // using switch case

   /*

    int n;
        cout << "enter rupees  :";
        cin >> n;

        switch (n)
        {
        case  :

           break;

        default:
           break;
        }

        */

   // arithmetic progression  function
   //  AP();

   //  total no. of 1 in bits of 2 or more no.c
   /*
   int a, b;
   cout << "enter number 1 :";
   cin >> a;

   cout << "enter number 2 :";
   cin >> b;


   int ans = totalbits(a , b);
   cout<<"total bits are : "<< ans ;

   int m[]={-1,5,-2,3,-5,0};
   int count = 6;
   int res[100]={0};


   for (int i = 0; i < count; i++)
   {
     for (int j = i; j<6; j++)
     {
        for (int k = j; k < 6; k++)
        {
           if ((m[i]+m[j]+m[k]==0) && ((i!=j)&&(j!=k)&&(i!=k)))
           {
              cout << m[i] << "," << m[j] << "," << m[k];
              // res[0] = {m[i], m[j], m[k]};
           }

        }

     }

   }


  //  ques 442

  int nums[]={2,3,1,4,1,5,3,7};
  int count = 8;
  vector<int> sol;
  int inp = 0;
  for (int i = 0; i < count; i++)
  {
     for (int j = i; j < count; j++)
     {
        if (nums[i]==nums[j])
        {
           sol[inp] = nums[i];
           inp++;
        }

     }

  }
  // int length = (sizeof(sol)) / 4;
  cout << "solution array is  : " ;
  printV(sol);
*/

   // ques 1089
   // int arr[6] = {1, 3, 0, 2, 5, 3};
   // int count = sizeof(arr) / 4;
   // for (int i = 0; i < count; i++)
   // {
   //    if (arr[i] == 0)
   //    {
   //       arr[i + 1] = {0};
   //       i = i + 2;
   //    }

   //      }
   //      print(arr, 6);

   //   cout<<"enter  even word   :   ";
   //   string s;

   //   cin >>s ;
   //   int A = 0;
   //   int B = 0;
   //   int length = s.length();
   //   for (int i = 0; i < (length / 2);i++){
   //    if (s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u'|| s[i]=='A'|| s[i]=='E'|| s[i]=='I'|| s[i]=='O'|| s[i]=='U'){
   //       A++;
   //    }
   //   }
   //   for (int i = (length / 2); i <length ;i++){
   //    if (s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u'|| s[i]=='A'|| s[i]=='E'|| s[i]=='I'|| s[i]=='O'|| s[i]=='U'){
   //       B++;
   //    }
   //   }
   //   if (A==B){
   //      cout << "TRUEEEE";
   //   }

   /*
          cout<<"enter big   word   :   ";
          string big;
          cin >>big ;
          cout<<"enter small   word   :   ";
          string small;
          cin >>small ;

          int length = big.length();
          int slen = small.length();
          int i = 0;
          while( i<length)
          {
           if( big[i]==small[0])
             {int a = i;
             string newword;
             string next;
             for (int j = 0; j < slen; j++)
             {
                next = big[i];
                newword += next;
                i++;
          }
          i = a;

          cout << newword;
          if (newword == small)
          {
             cout << i <<"        " ;
             break;
              }
              cout << "clear";}
             i++;
          }

  }

      int length = haystack.length();
          int slen = needle.length();
         if (slen>length){return -1;}
          for (int i = 0; i < length; i++)
          {
             int a = i;
             string newword;
             string next;
             for (int j = 0; j < slen; j++)
             {
                next = haystack[i];
                newword += next;
                i++;
          }
          i = a;


          if (newword == needle)
          {
             return i ;
              }




          }
          return -1;


   // ques 268
   int nums[] = {3, 5, 1, 2, 0, 6};

   int len = sizeof(nums) / sizeof(int);

   int flag = 0;
   for (int i = 0; i <= len; i++)
   {

      for (int j = 0; j < len; j++)
      {
         if (i == nums[j])
         {

            flag = 1;
            break;
         }
      }

      if (flag == 0)
      {
         cout << "missing value is  :   ";
         cout << i;
      }
      flag = 0;
   }



   // ques 1980

   int nums[] = {1, 3, 5, 6, 7, 9, 11};

   const int n = sizeof(nums) / sizeof(nums[0]);

   int start = 0;
   int end = n - 1;
   int target = 1;

   while (start <= end)
   {
      int mid = (start + end) / 2;

      if (nums[mid] == target)
      {
         cout << "Target found at index: " << mid << endl;
         break;
      }
      else if (nums[mid] < target)
      {
         start = mid + 1;
      }

      else
      {
         end = mid - 1;
      }
   }

   // Handle case where target is not found
   if (start > end)
   {
      cout << "Target not found in the array." << endl;
   }


   // ques 201
   cout << "start   :   ";
   int left = 1;
   int right = 2147483647;
   int k = 0;
   while ((2 ^ k) <= right)
   {
      if ((2 ^ k) == right)
      {
         return 0;
      }
      k++;
   }
   int i = 2 ^ k;
   int ans = 0;
   while (i <= right)
   {

      ans = ans & i;
      i++;
   }
   return ans;
   cout << "end  :   ";



   // ques 852
   int start=0;
        int end=arr.size()-1;
        int mid=start+(end-start)/2;
        while(start<end){
            if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
                return mid;
            }
            if(arr[mid]<arr[mid+1] ){
                start=mid+1;
            }
            if( arr[mid]<arr[mid-1]){
                end=mid ;

            }
            mid=start+(end-start)/2;

        }

   int nums[] = {-1,-1,-1,-1,0,1};
   int s = 0;
   int e = sizeof(nums) / sizeof(int) - 1;
   cout << "size of array  : " << e + 1 << endl;
   int last = sizeof(nums) / sizeof(int) - 1;
   int mid = s + (e - s) / 2;
   int ls = 0, rs = 0;
   while (s <= e)
   {
      cout << "mid value : " << mid << endl;
      for (int i = 0; i < mid; i++)
      {
         cout << "nums  :" << nums[i];
         ls += nums[i];
      }
      cout << "sum of left  : " << ls << endl;
      for (int j = mid + 1; j <= last; j++)
      {
         rs += nums[j];
      }
      cout << "sum of right  : " << rs << endl;
      if (ls == rs)
      {
         cout << "pivot index is :" << mid;
         break;
      }
      if (ls < rs)
      {
         s = mid + 1;
      }
      else
      {
         e = mid - 1;
      }
      mid = s + (e - s) / 2;
      ls = 0;
      rs = 0;
   }

   // second approach for pivot
   int nums[] = {2,1,-1};
   int j = 1;
   int len = sizeof(nums) / sizeof(int);
   if (len == 1)
   {
      return 0;
   }

   cout << "length is " << len << endl;
   int sum[len];
   sum[0] = nums[0];
   for (int i = 1; i < len; i++)
   {
      sum[j] = sum[j - 1] + nums[i];
      cout << sum[j] << endl;
      j++;
   }

   cout << "sum array  : " << sum[len - 1] << endl;

// linear search

   for (int i = 0; i < len - 1; i++)
   {
      if (sum[len - 1] == sum[0])
      {
         cout << "first if :" << 0;
         break;
      }
      if (sum[len - 1] == sum[i] + sum[i + 1])
      {
         cout << "second if : " << i + 1;
         break;
      }
   }
//   binary search
   int s = 0;
   int e = len - 1;
   int mid = s + (e - s) / 2;
   while (s < e)
   {
      if (sum[len - 1] == sum[mid] + sum[mid + 1])
      {
         cout << "answer is :  " << mid + 1 << endl;
         break;
      }

      if (sum[len - 1] < sum[mid] + sum[mid + 1])
      {
         e = mid;
      }
      if (sum[len - 1] == sum[0])
      {
         cout << "answer is : " << 0 << endl;
         break;
      }

      else
      {
         s = mid + 1;
      }
      mid = s + (e - s) / 2;
   }


   // leetcode code




   // class Solution
// {
// public:
//    int pivotIndex(vector<int> &nums)
//    {

//       int j = 1;
//       int len = nums.size();
//       if (len == 1)
//       {
//          return 0;
//       }
//       int sum[len];
//       sum[0] = nums[0];
//       for (int i = 1; i < len; i++)
//       {
//          sum[j] = sum[j - 1] + nums[i];
//          j++;
//       }
//       for (int i = 0; i < len - 1; i++)
//       {
//          if (sum[len - 1] == sum[0])
//          {
//             return 0;
//          }
//          if (sum[len - 1] == sum[i] + sum[i + 1])
//          {
//             return i + 1;
//          }
//       }

//       return -1;
//    }
// };





*/
}
