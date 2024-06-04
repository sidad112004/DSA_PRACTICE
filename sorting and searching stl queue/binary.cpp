#include <iostream>
using namespace std;
int fun(int a[7], int size, int key)
{
    int s = 0;
    int e = size - 1;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (a[mid] == key)
        {
            ans = mid;
            mid = mid - 1;
        }
        else if (a[mid] < key)
        {
            s = mid + 1;
        }
        else if (a[mid] > key)
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int a[7] = {1, 2, 2, 2, 2, 3, 4};
    fun(a, 7, 2);
    cout << "first index is" << fun<< endl;
}