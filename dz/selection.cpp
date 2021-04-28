/*
#include <iostream>
#include <random>
#include <ctime>
#include <fstream>

using namespace std;

long int selection_sort(unsigned int* a, int n)
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

    fout.open("selection_stats.txt");

    for (int i=start; i <= finish; i+=step)
        fout << i << " ";
    fout << endl;

    for (int N=start; N <= finish; N+=step)
    {
        for (long int i=0; i < N; i++)
            a[i] = distribution(generator);
        int time = selection_sort(a, N);
        fout << time << " ";
        cout << time << " ";
    }
    fout.close();
}

*/
