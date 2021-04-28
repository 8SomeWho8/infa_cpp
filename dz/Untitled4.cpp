/*
int main()
{
    unsigned int k;
    *k = 0;
    cout << *k;
}


#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::boolalpha;

void reverse_memories(int* begin, unsigned int n)
{
    int* reversed = new int [n];
    for (int i=0; i<n; i++)
        reversed[n-i-1] = *(begin + i);
    for (int i=0; i<n; i++)
        *(begin + i) = reversed[i];
    delete [] reversed;
};
int main()
{
    int memories[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    reverse_memories(memories, 10);
    for (unsigned int i = 0; i < 10; i++)
        cout << memories[i] <<" ";
    cout << endl; // должно вывести: 10 9 8 7 6 5 4 3 2 1

    return 0;
}
*/
