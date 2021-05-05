/*#include <iostream>

using namespace std;

void shoko(int* a, int n)
{
    a[n] = 1;
    if (n != 0)
    {
        a[n]--;
        for (int i=2; i <= n; i += 2)
        {
            if (a[n-i] == -1)
                shoko(a, n-i);
            a[n] += 2 * a[n-i];
        }
        a[n] += a[n-2];
    }
};

int main()
{
    int n;
    cin >> n;
    if (n > 0 && n%2==0)
    {
        int* a = new int [n+1];
        for (int i=0; i <= n; i++)
            a[i] = -1;
        shoko(a, n);
        cout << a[n];
        delete [] a;
    }
    else
        cout << 0;
}
*/
