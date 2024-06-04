#include <iostream>
#include <vector>
// vector is dynamic memory of any array
using namespace std;
int main()
{
    vector<int> a;
    vector<int> k(a);
    cout << "capacity " << a.capacity() << endl;
    a.push_back(4);
    cout << "capacity " << a.capacity() << endl;
    a.push_back(2);
    cout << "capacity " << a.capacity() << endl;
    a.push_back(3);
    cout << "capacity " << a.capacity() << endl;
    cout << "front " << a.front() << endl;
    cout << "back " << a.back() << endl;
    cout << "value at index 2 " << a.at(2) << endl;
    for (int i : a)
    {
        cout << i << " ";
    }
    a.pop_back();
    a.clear();
    cout << "capacity " << a.capacity() << endl;
    cout << "size " << a.size() << endl;
}