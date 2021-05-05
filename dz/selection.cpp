/*#include <iostream>
#include <random>
#include <ctime>
#include <fstream>

using namespace std;

long int selection_sort(int* a, int n)
{
    int c, min_n;

    unsigned int start_time = clock();

    for (int i=0; i<n-1; i++)
    {
        min_n = i;
        for (int j=i; j<n; j++)
            if(a[min_n]>a[j])
                min_n = j;
        c = a[min_n];
        a[min_n] = a[i];
        a[i] = c;
    }

    unsigned int finish_time = clock();
    return finish_time-start_time;
}

const int start = 50000;
const int finish = 1000000;
const int step = 50000;

int a[finish];

int main()
{
    mt19937 mersenne(static_cast<int>(time(0)));

    ofstream fout;

    fout.open("selection_stats_worst.txt");

    for (int i=start; i <= finish; i+=step)
        fout << i << " ";
    fout << endl;

    for (int N=start; N <= finish; N+=step)
    {
        for (long int i=0; i < N; i++)
            a[i] = mersenne();

        long int time = selection_sort(a, N);

        fout << time << " ";
        cout << time << " ";
    }
    fout.close();
}*/
