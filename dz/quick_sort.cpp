/*#include <iostream>
#include <random>
#include <ctime>
#include <fstream>

using namespace std;

void quick_sort(int *a, int start, int finish)
{
    if (start < finish)
    {
        int c;
        int opornik = a[(start+finish)/2];
        int i = start, j = finish;
        while (i <= j)
        {
            while (a[i] < opornik)
                i++;
            while (a[j] >= opornik)
                j--;
            if (i >= j)
                break;
            c = a[i];
            a[i] = a[j];
            a[j] = c;
        }
        if (j > start)
        {
            quick_sort(a, start, j);
            quick_sort(a, j+1, finish);
        }
    }
}

const int start = 1000000;
const int finish = 10000000;
const int step = 20000;

int a[finish];

int main()
{
    int c, j;

    mt19937 mersenne(static_cast<int>(time(0)));

    ofstream fout;

    fout.open("quicksort_stats_best.txt");

    for (int i=start; i <= finish; i+=step)
        fout << i << " ";
    fout << endl;

    for (int N=start; N <= finish; N+=step)
    {
        for (long int i=0; i < N; i++)
            a[i] = mersenne();

        unsigned int start_time = clock();

        quick_sort(a, 0, N-1);

        unsigned int finish_time = clock();

        fout << finish_time - start_time << " ";
        cout << finish_time - start_time << " ";
    }
    fout.close();

}
*/
