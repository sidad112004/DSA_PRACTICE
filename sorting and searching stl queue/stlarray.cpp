#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 4> a = {1, 2, 3, 4};
    int s = a.size();
    cout << s << endl;
    cout << a.at(2) << endl;
    cout << a.front() << endl;
    cout << a.back() << endl;
}