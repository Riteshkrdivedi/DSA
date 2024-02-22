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

    int n;
    cout << "enter the no : ";
    cin>>n;
    int reverse = 0;

    while (n!=0)
    {
        int last=n%10;
        reverse = reverse * 10 + last;
        n = n / 10;
    }
    cout << "reverse no. is  : " << reverse;
}

  