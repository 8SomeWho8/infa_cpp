/*#include <iostream>

using namespace std;

int fibonacci(int* a, int n)
{
    if (n <= 2)
        a[n] = 1;
    else
    {
        if (a[n-1] == 0)
            fibonacci(a, n-1);
        if (a[n-2] == 0)
            fibonacci(a, n-2);
        a[n] = a[n-1] + a[n-2];
    }
}


int main()
{
    int n;
    cin >> n;
    int* fib = new int [n];
    for (int i = 0; i < n; i++)
        fib[i] = 0;
    fibonacci(fib, n);
    cout << fib[n];
    delete fib;
}
*/
