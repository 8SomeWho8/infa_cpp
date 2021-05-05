/*#include <iostream>
#include <random>
#include <ctime>
#include <fstream>

using namespace std;

void heapify(int* a, int i, int n)
{
    int k_largest_child, k_left_child, k_right_child, tmp;
    while (true)
    {
        k_largest_child = i;
        k_left_child = 2*i + 1;
        k_right_child = 2*i + 2;

        if (k_right_child < n && a[k_right_child] > a[k_largest_child])
            k_largest_child = k_right_child;

        if (k_left_child < n && a[k_left_child] > a[k_largest_child])
            k_largest_child = k_left_child;

        if (k_largest_child == i)
            break;

        tmp = a[i];
        a[i] = a[k_largest_child];
        a[k_largest_child] = tmp;

        i = k_largest_child;
    }
}


void build_heap(int* a, int n)
{
    for (int i = n/2; i >= 0; i--)
        heapify(a, i, n);
}

void heapSort(int* a, int n)
{
    build_heap(a, n);
    int tmp;
    for (int i=n-1; i>=0; i--)
    {
        tmp = a[i];
        a[i] = a[0];
        a[0] = tmp;

        heapify(a, 0, i-1);
    }
}


const int start = 1000000;
const int finish = 10000000;
const int step = 20000;

int a[finish];

int main()
{
    mt19937 mersenne(static_cast<int>(time(0)));

    ofstream fout;

    fout.open("heap_stats_best.txt");

    for (int i=start; i <= finish; i+=step)
        fout << i << " ";
    fout << endl;

    for (int N=start; N <= finish; N+=step)
    {
        for (long int i=0; i < N; i++)
            a[i] = mersenne();

        unsigned int start_time = clock();

        heapSort(a, N);

        unsigned int finish_time = clock();

        fout << finish_time - start_time << " ";
        cout << finish_time - start_time << " ";
    }

    fout.close();

}
*/
