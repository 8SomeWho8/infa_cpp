/*#include <iostream>
#include <random>
#include <ctime>
#include <fstream>

using namespace std;

long int insertion_sort(int *a, int n)
{
    int c, j;

    unsigned int start_time = clock();

    for (int i=1; i<n; i++)
    {
        c = a[i];
        j = i-1;
        while(j>=0 and a[j]>c)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = c;
    }

    unsigned int finish_time = clock();
    return finish_time-start_time;
};

const int start = 100000;
const int finish = 1000000;
const int step = 50000;

int a[finish];

int main()
{
    mt19937 mersenne(static_cast<int>(time(0)));

    ofstream fout;

    fout.open("insertion_stats_worst.txt");

    for (int i=start; i <= finish; i+=step)
        fout << i << " ";
    fout << endl;

    for (int N=start; N <= finish; N+=step)
    {
        for (long int i=0; i < N; i++)
            a[i] = mersenne();
        int time = insertion_sort(a, N);
        fout << time << " ";
        cout << time << " ";
    }

    fout.close();

}*/
