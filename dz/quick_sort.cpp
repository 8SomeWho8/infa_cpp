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

const int start = 50000;
const int finish = 300000;
const int step = 10000;

unsigned int a[finish];

int main()
{
    int c, j;

    default_random_engine generator;
    uniform_int_distribution<unsigned int> distribution(10, 2*finish);
    unsigned int dice_roll;
    dice_roll = distribution(generator);

    ofstream fout;

    fout.open("buble_stats.txt");

    for (int i=start; i <= finish; i+=step)
        fout << i << " ";
    fout << endl;

    for (int N=start; N <= finish; N+=step)
    {
        for (long int i=0; i < N; i++)
            a[i] = distribution(generator);

        unsigned int start_time = clock();

        quick_sort(a, 0, finish-1);

        unsigned int finish_time = clock();

        fout << finish_time - start_time << " ";
        cout << finish_time - start_time << " ";
    }
    fout.close();

    for (int i=0; i<finish; i++)
        cout << a[i] << ' ';
}
*/
