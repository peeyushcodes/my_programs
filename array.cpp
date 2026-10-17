// C++ program to find the smallest element in an array
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int nums[5] = {5, 15, 22, 1, -15};
    int smallest = INT_MAX;
    int size = sizeof(nums) / sizeof(int);
    cout << "The size of the array is: " << size << endl;
    for (int i = 0; i < size; i++)
    {
        smallest = min(smallest, nums[i]);
    }
    cout << " smallest = " << smallest << endl;
    return 0;
}