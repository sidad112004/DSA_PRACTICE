#include <iostream>
int fun1(int a[], int size, int key)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s < e)
    {
        if (a[mid] == key)
        {ans=mid;
        mid=mid-1;
        }
        else if (a[mid] > key)
        {e=mid-1;
        }
        else if (a[mid] < key)
        {s=mid+1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
    

int main()
{
    int a[7] = {1, 2, 2, 2, 2, 3, 4};
    fun1(a, 7, 2);
}