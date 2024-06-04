#include <iostream>
using namespace std;
int num(int a[6], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (a[mid] == key)
        {
            cout << "present" << endl;
            return 0;
        }

        else if (a[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    cout << "not present" << endl;
}

int main()
{
    int a[6] = {2, 3, 4, 5, 6};
    num(a, 6, 1);
}