#include <iostream>
using namespace std;
void bubblesort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void selectionsort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int smallestindex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[smallestindex])
            {
                smallestindex = j;
            }
        }
        swap(arr[i], arr[smallestindex]);
    }
}

void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionsort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;

        while (prev >= 0 && arr[prev] > curr)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }

        arr[prev + 1] = curr;
    }
}
int main()
{
    int n = 5;
    int arr[5] = {1, 4, 3, 2, 5};
    // bubblesort(arr, n);
    // selectionsort(arr, n);
    insertionsort(arr, n);
    printarr(arr, n);
    return 0;
}
