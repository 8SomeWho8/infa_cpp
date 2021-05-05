/*#include <iostream>
#include <random>
#include <ctime>
#include <fstream>

using namespace std;

void merge_sort(int *a, int start, int finish)
{

    if (finish - start > 1)
    {
        merge_sort(a, start, (finish+start)/2);
        merge_sort(a, (finish+start)/2+1, finish);

        int* c = new int [(finish+start)/2 + 1 - start];
        int* d = new int [finish + 1 - (finish+start)/2-1];

        for (int k=start; k<=(finish+start)/2; k++)
            c[k-start] = a[k];
        for (int k=(finish+start)/2+1; k<=finish; k++)
            d[k-(finish+start)/2-1] = a[k];

        int i = 0, j = 0, k = start;

        while (i <= (finish+start)/2 - start && j <= finish - (finish+start)/2-1)
        {
            if (c[i] < d[j])
            {
                a[k] = c[i];
                i++;
                k++;
            }
            else
            {
                a[k] = d[j];
                j++;
                k++;
            }
        }
        if (i > (finish+start)/2 - start)
            for (int t=0; t+k<=finish; t++)
                a[t+k] = d[j+t];
        else
            for (int t=0; t+k<=finish; t++)
                a[t+k] = c[i+t];

        delete [] c;
        delete [] d;
    }
    else if (finish - start == 1)
    {
        int c;
        if(a[start] > a[finish])
        {
            c = a[start];
            a[start] = a[finish];
            a[finish] = c;
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

    fout.open("merge_stats_best.txt");

    for (int i=start; i <= finish; i+=step)
        fout << i << " ";
    fout << endl;

    for (int N=start; N <= finish; N+=step)
    {
        for (long int i=0; i < N; i++)
            a[i] = mersenne();

        unsigned int start_time = clock();

        merge_sort(a, 0, N-1);

        unsigned int finish_time = clock();

        fout << finish_time - start_time << " ";
        cout << finish_time - start_time << " ";
    }
    fout.close();

}
*/
