#include <iostream>
using namespace std;

int main()
{
// while loop

    // int a ,b;
    // cin >> a;
    // cin >> b;
    // if ((a+b)>10){
    //     cout << "you passed and your sum is " << a + b << endl;
    // }
    // else{
    //     cout << "you failed and your sum is" << a + b <<endl;
    // }
    // int c = a + b;
    // while ((c)<=10){
    //     cout << "you are growing" << c << endl;
    //     c++;
    //      if ((c)>10){
    //     cout << "you passed and your sum is " << c << endl;
    // }
    // }

// sum of n no.

    // int n;
    // cin >> n;1
    // int sum = 0;
    // int i = 1;
    // while (i<=n){
    //     cout << "i=  " << i<<endl;
    //    if (i%2==0){
    //        sum = sum + i;
    //    }
    //     i++;
    // }
    // cout << sum;

// prime no. or not

//     int n;
//     int count = 1;
//     cin >> n;
//     int i = 2;
//     while(i<n){if (n%i==0){
//             count++;
//         }
//         i++;
//     }
// if (count>1){
//     cout << n << "is a composite no.";
// }else{
//     cout << n << "isa prime no";
// }

// pattern 1


// int x, y;
// cout << "enter value of length";
// cin >> x;
// cout << "enter value of height";
// cin >> y;
// int i = 0;
// int j = 0;
// while(i<y){
//     // cout << "enter";
//     while(j<x){
//         cout <<x-j;
//         // cout << j;
//         j++;
//     }
//     cout << endl;
//     //  cout << i;
//     i++;
//     j = 0;
// }

// pattern 2


// int x, y;
// cout << "enter value of length";
// cin >> x;
// cout << "enter value of height";
// cin >> y;
// int i = 1;
// int j = 1;
// while(i<y){
//     // cout << "enter";
//     while(j<x){
//         cout <<j;
//         // cout << j;
//         j++;
//     }
//     cout << endl;
//     //  cout << i;
//     i++;
//     j = 1;
// }

// pattern 3


// int x, y;
// cout << "enter value of length";
// cin >> x;
// cout << "enter value of height";
// cin >> y;
// int i = 1;
// int j = 1;
// int z = x;
// while(i<=y){
   
//     while(j<=z){
//         cout <<j;
       
//         j++;
//     }
//     cout << endl;
//     //  cout << i;
//     z = z+x;
//     i++;
 
// }

// alternative
// int x, y;
// cout << "enter value of length";
// cin >> x;
// cout << "enter value of height";
// cin >> y;
// int i = 1;

//   int z = 1;
// while(i<=y){
//     int j = 1;
  
//     while(j<=x){
//         cout <<z;
//         z++;

//         j++;
//     }
//     cout << endl;
//     //  cout << i;

//     i++;
 
// }

// pattern 4

// int x, y;
// // cout << "enter value of length";
// // cin >> x;
// cout << "enter value of height";
// cin >> y;
// int i = 1;
// x = 1;

// while(i<=y){
//     int j = 1;
  
//     while(j<=i){
//         cout <<x;
//         x++;

//         j++;
//     }
//     cout << endl;
//     //  cout << i;
//     x--;

//     i++;
 
// }

// pattern 5


// int n;
// cout << "enter no : ";
// cin >> n;
// int i = 1;

// while(i<=n){
  
//     int j = 1;
//     while(j<=i){
//         cout << i+j-1;

       
//         j=j+1;
//     }
//     cout << endl;
//       i++;

// }

//   note: in pattern ques first make the pattern create a matrix like structure for i and j then try to  observe the values come at particular i and j and find the formula , no need to change anything in code just find the right formula and u r set
     
//    pattern 6

// int n;
// cout << "enter vale of n  :  ";
// cin >> n;
// int i = 1;
// char ch = 'A';
// while(i<=n){
//     int j = 1;
    
//     while(j<=n){
//         cout << ch;
//         j++;

//     }
//     cout << endl;
//     i++;
//     ch=ch+1;

// }

// pattern 7

// int n;
// cout << "enter vale of n  :  ";
// cin >> n;
// int i = 1;
// char ch = 'A';
// while(i<=n){
//     int j = 1;
    
//     while(j<=n){
//         cout << ch;
//         j++;
//         ch=ch+1;

//     }
//     cout << endl;
//     i++;
    

// }

// pattern 8


// int n;
// cout << "enter value of n  :  ";
// cin >> n;
// int i = 1;

// while(i<=n){
//     int j = 1;
//        char ch = 'A'+i-1;
//     while(j<=i){
     
//         cout << ch;
//         j++;
//           ch++;
     

//     }
//     cout << endl;
//     i++;
//     ch++;
//     // note: formula could be A+i+j-2

// }

// pattern 9

// int n;
// cout << "enter a no.: ";
// cin >> n;
// int i = 1;

// while (i<=n)

// {
//     int j = 1;
//     while (j<=i)
//     {char ch = n-i+'A'+j-1;
//         cout << (ch);
//         j++;

//     }
//     cout << endl;
//     i++;

// }

// pattern 10

// int n;
// cout << "enter  a no : ";
// cin >> n;
// int i=1;
// while (i<=n)
// {
//     int j = 1;
//     while (j<=n)
//     {
//         if (j<i)    //  j<i  for another pattern  j<=n-i for this pattern
//         {
//             cout << " ";
//         }
//         else{
//             cout << "*";  //i for another patern
//         }
//         j++;
//     }
//     cout << endl;
//     i++;
// }


// pattern 11

// int n;
// cout<<"enter  a no  :  ";
// cin >> n;
// int i=1;
// while (i<=n)
// {
//     int j = 1;
//     while (j<=n+n-1)
//     {
//         if (j=n)
//         {
//             cout << i;
//         }
//         if (j<i)
//         {
//             /* code */
//         }
        
        
//     }
    
// }
// pattern 12  hardest (final)

int n;
cout << "enetr  a no. : ";

cin >> n;
int i = 1;
while(i<=n){
    int j = 1;
    int start = n - i + 1;
    int end = n + i;
    int s = n;
    while(j<=n+n){
    
        

        if (j <= start)
        {
            cout << j;
        }
        
        if(j>=n-i+2 && j<=n+i-1)
        {
            cout << "*";
        }

     
        if (j>=end && j<=n+n)
        {
          
            cout <<s+n;
        }

        s=s-1;
        j++;
    }


   
    cout<<endl;
    i++;

}
}
