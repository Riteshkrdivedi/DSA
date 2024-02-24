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

    int n;
    cout << "enter rupees  :";
    cin >> n;
    cout << endl;
    cout << "no. of hundred notes :" << n / 100<<endl;
    int a = n % 100;
    if (a>=50)
    {
        cout << "no. of 50 notes : " << a / 50<<endl;

    }
    else if (a<20)
    {
       
    cout << "no. od 1 rs notes :" << a<<endl;
        
    }
    else{
        cout << "no. of 20 notes : " << a / 20<<endl;
    }

    
}

  