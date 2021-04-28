/*#include <iostream>
using namespace std;

struct Order {
	unsigned int part_id;
	double total_cost;
	char type; // 'c' -- cpu, 'g' -- gpu, 'm' -- motherboard, 'r' -- ram;
	int count;

};
void process_orders(const Order* all_orders, unsigned int old_n, Order** processed_orders, unsigned int* new_n)
{
    for (int i=0; i < old_n; i++)
        if (all_orders[i].type != 'g')
            *new_n += all_orders[i].count;
    if (*new_n != 0)
        *processed_orders = new Order [*new_n];
    cout << 0;

    int k = 0;

    for (int i=0; i < old_n; i++)
    {
        if (all_orders[i].type != 'g')
        {
            for (int j=0; j<all_orders[i].count; j++)
            {
                *processed_orders[k] = all_orders[i];
                (*processed_orders[k]).count = 1;
                k++;
            }
        }
    }
};

int main()
{


    Order orders[] = {
	{12270,  500.0, 'r', 4},
	{15644,  1220.0, 'g', 2},
	{2330,  700.0, 'c', 1},
    };

    Order* processed_orders = NULL;
    unsigned int new_n = 0;
    process_orders(orders, 3, &processed_orders, &new_n);

    for (unsigned int i = 0; i < new_n; i++)
        cout << processed_orders[i].part_id  << " " << processed_orders[i].total_cost
		<< " " <<  processed_orders[i].type << " " << processed_orders[i].count << endl;

// ожидаемый результат:
// 12270 125.0 r 1
// 12270 125.0 r 1
// 12270 125.0 r 1
// 12270 125.0 r 1
// 2330 700.0 c 1

    delete [] processed_orders;
    return 0;
}
*/
