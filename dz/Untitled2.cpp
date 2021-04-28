/*
#include <iostream>

using namespace std;

int main()
{
    int n_x, n_y;
    int coord_x, coord_y, k, b;
    int sum = 0;
    char karta[10][10];
    cin >> n_x >> n_y >> k;
    for (int i=0; i < n_x; i++)
    {
        for (int j=0; j < n_y; j++)
            karta[i][j] = '*';
    }
    for (int i=0; i < k; i++)
    {
        cin >> coord_x >> coord_y;
        karta[coord_x][coord_y] = 'T';
    }

    for (int i=0; i < n_x; i++)
    {
        for (int j=0; j < n_y; j++)
        {
            cout << karta[i][j];
            if (j==n_y-1)
                cout << endl;
        }
    }

    for (int i=0; i < n_x; i++)
    {
        for (int j=0; j < n_y; j++)
        {
            if (karta[i][j] == 'T' or karta[i][j] == 'x')
                cout << "boo" << i << j << endl;
                b = i+1;
                while (b < n_x and karta[b][j] == '*')
                    b++;
                if (b < n_x and karta[b][j] != 'x')
                {
                    if (karta[i][j] != 'x')
                    {
                        sum +=2;
                        karta[b][j] = 'x';
                        karta[i][j] = 'x';
                        cout << "boo6" << i << j << endl;
                    }
                    else
                    {
                        sum +=1;
                        karta[b][j] = 'x';
                        cout << "boo7" << i << j << endl;
                    }
                    cout << "boo0" << i << j << endl;
                }
                b = j+1;
                while (b < n_y and karta[i][b] == '*')
                    b++;
                if (b < n_y and karta[i][b] != 'x')
                {
                    if (karta[i][j] != 'x')
                    {
                        sum +=2;
                        karta[i][b] = 'x';
                        karta[i][j] = 'x';
                        cout << "boo8" << i << j << endl;
                    }
                    else
                    {
                        sum +=1;
                        karta[i][b] = 'x';
                        cout << "boo9" << i << j << endl;
                    }
                }
        }
    }

    for (int i=0; i < n_x; i++)
    {
        for (int j=0; j < n_y; j++)
        {
            cout << karta[i][j];
            if (j==n_y-1)
                cout << endl;
        }
    }
    cout << sum;
}
*/
