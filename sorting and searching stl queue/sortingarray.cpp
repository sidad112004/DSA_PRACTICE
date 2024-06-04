#include <iostream>
// sorting an array
using namespace std;
int main()
{
    int a[6] = {2, 7, 6, 9, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        int l = i;
        for (int j = i + 1; j < 6; j++)
        {
            if (a[j] < a[l])
            {
                l = j;
            }
        }
        swap(a[i], a[l]);
    }
    for (int i = 0; i < 6; i++)
    {
        cout << "  " << a[i];
    }
}