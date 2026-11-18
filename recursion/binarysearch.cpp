#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int> &arr, int low, int high, int target)
{
    if (low > high)
    {
        return -1;
    }
    int mid = low + (high - low) / 2;
    if (arr[mid] == target)
    {
        return mid;
    }
    if (target < arr[mid])
    {
        return binarySearch(arr, low, mid - 1, target);
    }
    return binarySearch(arr, mid + 1, high, target);
}
int main()
{
    int n;
    cout << "Enter the size: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the numbers in sorted order: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cout << "Enter the target: ";
    cin >> target;
    int index = binarySearch(arr, 0, n - 1, target);
    if (index == -1)
        cout << "Element not found";
    else
        cout << "The index is: " << index;
    return 0;
}