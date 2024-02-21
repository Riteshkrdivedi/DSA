// To make fibonacci series

#include <iostream>
using namespace std;

int main(){
    int a = 0;
    int b = 1;
    int n;
    cout << "enter no. of times you want to run fibonacci series  :";
    cin >> n;
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s = a + b;
        cout << s<<"  ";
        a = b;
        b = s;
    }
    
}