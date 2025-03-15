#include <bits/stdc++.h>

using namespace std;

void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minimum = i;
        for (int j = i + 1; j < n; j++)
        {

            if (arr[j] < arr[minimum])
            {
                minimum = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[minimum];
        arr[minimum] = temp;
    }
}
void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    selection_sort(arr, n);
    cout << "Sorted array: \n";
    print_array(arr, n);
    return 0;
}