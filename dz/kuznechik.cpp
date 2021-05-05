/*#include <iostream>

using namespace std;

void grasshopper(int* dp, int* numbers, int i, int n)
{
    dp[i] = 0;
    if (i == n - 1)
        dp[i]++;
    else
    {
        if (dp[i+1] == -1)
            grasshopper(dp, numbers, i+1, n);
        dp[i] += dp[i+1];

        if (i + numbers[i] < n and numbers[i] != 1)
        {
            if (dp[i+numbers[i]] == -1)
                grasshopper(dp, numbers, i+numbers[i], n);
            dp[i] += dp[i+numbers[i]];
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int* dp = new int [n];
    int* numbers = new int [n];

    for (int i = 0; i<n; i++)
    {
        cin >> numbers[i];
        dp[i] = -1;
    }
    grasshopper(dp, numbers, 0, n);
    cout << dp[0];
    delete [] dp;
}
*/
