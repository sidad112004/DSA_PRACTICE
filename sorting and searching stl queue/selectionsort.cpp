#include <iostream>
using namespace std;
int sort(int a[], int n)
{
    for (int j = 0; j < (n - 1); j++)
    {
        for (int i = j + 1; i < n; i++)
        {
            if (a[j] > a[i])
            {
                swap(a[j], a[i]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
        ;
    }
}
int main()
{
    int n;
    int a[n];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, n);
}