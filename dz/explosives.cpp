/*#include <iostream>

using namespace std;

int a[51][51][3]; // три таблицы с заполнением количества безопасных вариантов для фиксированного количества всех ящиков, взрывоопасных ящиков и заложенных на предыдущих слоях взрывоопасных ящиках

void n_explosive(int a[51][51][3], int N, int n_a, int p)
{
    a[N][n_a][p] = 0;
    if (N >= n_a)
    {
        if (n_a == 0)
            a[N][n_a][p]++;
        else if (n_a == N && p == 0 && (n_a==1 || n_a==2))
            a[N][n_a][p]++;
        else if (n_a == N && p == 1 && n_a==1)
            a[N][n_a][p]++;
        else if (N > n_a)
        {
            if (a[N-1][n_a][0] == -1)
                n_explosive(a, N-1, n_a, 0); // не закладываем мину, всегда можно сделать
            a[N][n_a][p] += a[N-1][n_a][0];
            if (p<2) // если количество заложенных мин меньше двух, можно пробовать заложить ещё одну, иначе считать безопасные расположения бессмысленно
            {
                if (a[N-1][n_a-1][p+1] == -1)
                    n_explosive(a, N-1, n_a-1, p+1); // закладываем мину
                a[N][n_a][p] += a[N-1][n_a-1][p+1];
            }
        }
    }
}
int main()
{
   int n;
   cin >> n;

   int sum = 0;

   for (int i=0; i<=n; i++)
       for (int j=0; j<=n; j++)
           for (int k=0; k<=2; k++)
                a[i][j][k] = -1;

   for (int i=n; i >= 0; i--)
   {
       n_explosive(a, n, i, 0);
       sum += a[n][i][0];
   }
   cout << sum;
}
*/
