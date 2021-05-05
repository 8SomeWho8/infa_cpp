/*#include <iostream>

using namespace std;

int a[8][8];

void draughts(int a[8][8], int i, int j)
{
    if (i == 0)
        a[i][j] = 1;
    else
    {
        a[i][j] = 0;
        if (j == 0)
        {
            if (a[i-1][j+1] == -1)
                draughts(a, i-1, j+1);
            a[i][j] += a[i-1][j+1];
        }
        else if(j == 7)
        {
            if (a[i-1][j-1] == -1)
                draughts(a, i-1, j-1);
            a[i][j] += a[i-1][j-1];
        }
        else
        {
            if (a[i-1][j-1] == -1)
                draughts(a, i-1, j-1);
            a[i][j] += a[i-1][j-1];
            if (a[i-1][j+1] == -1)
                draughts(a, i-1, j+1);
            a[i][j] += a[i-1][j+1];
        }

    }
}

int main()
{
    int x, y;

    cin >> x >> y;

    for (int i=0; i<8; i++)
        for (int j=0; j<8; j++)
            a[i][j] = -1;

    draughts(a, 8-y, x);

    cout << a[8-y][x];
}
*/
