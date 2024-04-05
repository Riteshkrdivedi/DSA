#include <iostream>
using namespace std;



void hoja(int arr[],int n){

    // arr[2] = 65;
    cout << "inside hojaa"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<"  ";
    }
    cout <<endl<< "outside hojaa"<<endl;
}




int main(){
// array problems

/*
int max=0;
int num;
cout << "enter how many values you want to compare  :  " ;
cin >> num;
cout << endl;
for (int i = 0; i < num; i++)
{
    cout << "enter no.  :" ;
    int value;
    cin >> value;
    
    cout << "entered value is "<<value<<endl;
    if (value>max)
    {
        max = value;

    }
   
    
}
cout <<"max value is "<< max;
*/
/*
int fruits[5] = {2, 4, 9, 3, 5};       //if you update a value of array in function then it will also update in main array
 hoja(fruits, 5);
 for (int i = 0; i < 5; i++)
    {
        cout << fruits[i]<<"  ";
    }

// swapping without making new array

int array[5] = {1, 2, 3, 4, 5};
int rev[5];                          // naya array banana padega ya sirf swap function use karlo
int n = 5;
for (int i = 0; i < n; i++)
{
    rev[i] = array[(n - 1) - i];
}
hoja(rev, 5);
*/

// swap by swap function


int array[5] = {1, -5,5588,-789,7};
int n = 5;
int start = 0;
int end = n - 1;
while (start<=end)
{
    swap(array[start], array[end]);
    start++;
    end--;
}

hoja(array, n);
}

