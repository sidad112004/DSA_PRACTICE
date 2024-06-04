#include <iostream>
using namespace std;
int st(int a)
{
    if (a < 0)
    {
        return 0;
    }
    if (a == 0)
    {
        return 1;
    }
    int ans = st(a - 1) + st(a - 2);
    return ans;
}
int main()
{
    int a = 5;
    cout << st(a);
}