/*#include <iostream>
#include <random>
#include <ctime>
#include <fstream>

using namespace std;

void siftDown(unsigned int* a, int n, int k)
{
    int t;
    int c;
    while (2*k + 1 < n)
    {
        if (2*k + 2 < n && a[2*k + 2] < a[2*k + 1])
            t = 2*k + 2;
        else
            t = 2*k + 1;

        if (a[k] <= a[t])
            break;

        c = a[k];
        a[k] = a[t];
        a[t] = c;

        k = t;
    }
}

void build_heap(unsigned int* a, int n)
{
    for (int i = n/2; i >= 0; i--)
        siftDown(a, n, i);
}

void heap_sort(unsigned int* a, int n)
{
    int c;
    int k = n;
    build_heap(a, n);
    for (int i = 0; i < n; i++)
    {
        c = a[0];
        a[0] = a[n-1-i];
        a[n-1-i] = c;
        k--;
        build_heap(a, k);
    }
}

const int start = 50000;
const int finish = 300000;
const int step = 10000;

unsigned int a[finish];

int main()
{
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

        heap_sort(a, finish);

        unsigned int finish_time = clock();

        fout << finish_time - start_time << " ";
        cout << finish_time - start_time << " ";
    }

    fout.close();
    for (int i=0; i<finish; i++)
        cout << a[i] << ' ';
}
*/
