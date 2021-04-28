/*
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

struct Employee {
	char name[20];
	bool is_male;
	int position_id;
	double salary;
	long int phone_number;
};

bool is_equal_salary(Employee* e, unsigned int n)
{
    double male_salary=0, female_salary=0;
    int male_n =0, female_n=0;
    double epsilon;
    for (int i = 0; i < n; i++)
    {
        if (e[i].is_male)
        {
            male_salary += e[i].salary;
            male_n++;
        }
        else
        {
            female_salary += e[i].salary;
            female_n++;
        }
    }
    male_salary /= male_n;
    female_salary /= female_n;
    if (male_salary < female_salary)
        epsilon = abs(male_salary - female_salary) / male_salary;
    else
        epsilon = abs(male_salary - female_salary) / female_salary;

    return epsilon <= 0.05;
};


int main()
{
    Employee stat[5] = {
	{"Alice", false, 130, 200.0, 5550712},
	{"Bob", true, 130, 300.0, 5550734},
	{"Charlie", true, 150, 150.0, 5550988},
	{"Daniel", true, 220, 180.0, 5550821},
	{"Emma", false, 150, 230.0, 5550988}
    };
    cout << is_equal_salary(stat, 5) << endl; // ваша функция должна вернуть true
    return 0;
}
*/
