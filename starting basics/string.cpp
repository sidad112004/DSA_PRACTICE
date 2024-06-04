#include <iostream>
using namespace std;
int para(char sid[], int k)
{
    int p = 0;
    int e = k - 1;
    while (e > p)
    {
        if (sid[e--] != sid[p++])
        {
            return 0;
        }
    }
    return 1;
}
int reverse(int n, char sid[])
{
    int s = 0;
    int e = n - 1;
    for (int i = 0; i < n / 2; i++)
    {
        swap(sid[s++], sid[e--]);
    }
}
int lenght(char sid[])
{
    int cnt = 0;
    for (int i = 0; sid[i] != '\0'; i++)
    {
        cnt++;
    }
    return cnt;
}
int main()
{
    char sid[20];
    cout << "enter the string :" << endl;
    cin >> sid;
    cout << sid << endl;
    int k = lenght(sid);
    cout << k << endl;
    reverse(k, sid);
    cout << "reverse of the string is : ";
    cout << sid << endl;
    para(sid, k);
    if (para == 0)
    {
        cout << "no" << endl;
    }
    else
        cout << "yes" << endl;
}