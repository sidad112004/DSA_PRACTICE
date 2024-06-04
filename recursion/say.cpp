#include <iostream>
using namespace std;
void say(int n, string a[])
{
    // base case
    if (n == 0)
    {
        return;
    }

    // processing part

    int digt = n % 10;

    n = n / 10;

    say(n, a);

    cout << a[digt] << endl;
}
int main()
{
    int n = 123;
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    say(n, arr);
}