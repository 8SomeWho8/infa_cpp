/*#include <iostream>
#include <random>
#include <ctime>
#include <fstream>

using namespace std;

long int insertion_sort(unsigned int *a, int n)
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

    fout.open("insertion_stats.txt");

    for (int i=start; i <= finish; i+=step)
        fout << i << " ";
    fout << endl;

    for (int N=start; N <= finish; N+=step)
    {
        for (long int i=0; i < N; i++)
            a[i] = distribution(generator);
        int time = insertion_sort(a, N);
        fout << time << " ";
        cout << time << " ";
    }
    fout.close();
}

*/
