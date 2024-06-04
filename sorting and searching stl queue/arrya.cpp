#include <iostream>
// swape alternate

using namespace std;
// int f(int a[i]){

// }
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
    for (int i = 0; i < n; i++)
    {
        int k;
        k = i;
        i = i + 1;
        cout << a[i];
        i--;
        cout << a[i];
        i++;
        i++;
    }
}