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

void bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// USING SHIFTING

// void insertion_sort(int arr[],int n){
//     for (int i = 1; i < n;i++){
//         int target=arr[i];
//         int j = i - 1;
//         while(j>=0 && arr[j]>target){
//             arr[j + 1] = arr[j];
//             j = j - 1;
//         }
//         arr[j + 1] = target;
//     }
// }

//  USING SWAPPING

void insertion_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
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
    // selection_sort(arr, n);
    // cout << " slection Sorted array: \n";
    // print_array(arr, n);
    // bubble_sort(arr, n);
    // cout << " bubble Sorted array: \n";
    // print_array(arr, n);
    insertion_sort(arr, n);
    cout << " insertion Sorted array: \n";
    print_array(arr, n);
    return 0;
}