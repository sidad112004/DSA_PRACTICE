#include <iostream>
using namespace std;
int sum(int arr[], int size)
{
    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
    {
        return arr[0];
    }
    int remain = sum(arr + 1, size - 1);
    int ans = arr[0] + remain;
    return ans;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    cout << sum(arr, size) << endl;
}