#include <iostream>
#include<math.h>
using namespace std;



void AP(){
   int a, n, d;
   cout << "enter first term : ";
   cin >> a;

   cout << "enter  difference : ";
   cin >> d;

   cout << "which term you want : ";
   cin >> n;

   cout << "your answer is : " << a + (n - 1) * d;
}

int totalbits(int a , int b){
   int n1 = 0;
   int n2 = 0;
   for (int i = 0; i <32; i++)
   {
      
      if (a&1)
      {
         n1=n1+1;
         // cout << "one more for first" << endl;
      }
      if (b&1)
      {
         n2=n2+1;
         // cout << "one more for second" << endl;
      }
      a = a >> 1;
      b = b >> 1;
      
   }
    cout << "bits for one : "<< n1<<endl;
    cout << "bits for two : "<< n2<<endl;
   return  n1 + n2;
   
}








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
    cout<<"total bits are : "<< ans ;*/

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
               res[0] = {m[i], m[j], m[k]};
            }
            
         }
         
      }
      
    }
    
}

  