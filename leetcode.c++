#include <iostream>
#include<math.h>
using namespace std;
int main(){
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

    int n;
    cout<<"enter binary no. : ";
    cin>>n;
    int digit;
    int i=0;
    int ans = 0;
    while (n!=0)
    {
        digit = n % 10;
        if (digit==1)
        {
            ans = ans + pow(2, i);
        }
        i++;
        n = n /10;
       
        }
        cout << "decimal no. is : " << ans;
}

  