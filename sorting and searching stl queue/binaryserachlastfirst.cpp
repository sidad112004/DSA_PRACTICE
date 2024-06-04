#include <iostream>
//wrong method

using namespace std;
int arr(int a[6], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (a[mid] == key)
        {
            while (a[mid] ==key)
            {
                mid--;
                if (a[mid] < key)
                {
                    cout << "least number of i" << mid + 1 << endl;
                    break;
                } 
            }

            while (a[mid] == key)
            {
                mid++;
                if (a[mid] > key)
                {
                    cout << "most number of i" << mid - 1 << endl;
                    break;
                }
            }
        }
        else if (mid > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }return 0;
}
int main()
{
    int a[6] = {1, 2, 3, 4, 4, 4};
    arr(a, 6, 4);
}