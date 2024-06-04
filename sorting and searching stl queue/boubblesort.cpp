#include <iostream>
using namespace std;
int sort(int a[], int n)
{
   for (int j = 0; j < (n - 1); j++)
   {

      for (int i = 0; i < (n - 1); i++)
      {

         if (a[i] > a[i + 1])
         {
            swap(a[i], a[i + 1]);
         }
      }
   }
   for (int i = 0; i < n; i++)
   {
      cout << a[i] << "  " << endl;
   }
}
int main()
{
   int n;v
   cin >> n;
   int a[n];
   for (int i = 0; i < n; i++)
   {
      cin >> a[i];
   }
   sort(a, n);
}