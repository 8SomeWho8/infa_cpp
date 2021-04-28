/*#include <iostream>
using std::cin;
using std::cout;
using std::endl;

struct Op1Abonent { 	// Operator1 data
	float x, y; 	// coordinates
	long int cur_balance;	// current balance of abonent (in 1/100th roubles)
	long int phone_num; // phone number (like 7XXXXXXXXXX)
	Op1Abonent* next;
};
struct Op2Abonent { 	// Operator2 data
	Op2Abonent* next;
	Op2Abonent* relatives[5];
	long int cur_balance;		// current balance of abonent (in roubles)
	long int phone_num; // phone number (like XXXXXXXXXX)
	float x, y, z; 		// coordinates
};

void push(Op1Abonent** root, Op1Abonent dummy)
{
	Op1Abonent* tmp = new Op1Abonent;
	*tmp = dummy;
	tmp->next = *root;
	*root = tmp;
}

void print(Op1Abonent* root)
{
	while (root)
	{
		cout << root->x << " " << root->y << " " << root->cur_balance << " " << root->phone_num << endl;
		root = root->next;
	}
}

void clean(Op1Abonent** root)
{
	Op1Abonent* tmp = *root;
	while (*root)
	{
		*root = (*root)->next;
		delete tmp;
		tmp = *root;
	}
}

void pushOp2(Op2Abonent** root, Op2Abonent dummy)
{
	Op2Abonent* tmp = new Op2Abonent;
	*tmp = dummy;
	tmp->next = *root;
	*root = tmp;
}

void cleanOp2(Op2Abonent** root)
{
	Op2Abonent* tmp = *root;
	while (*root)
	{
		*root = (*root)->next;
		delete tmp;
		tmp = *root;
	}
}

void mergeOp2(Op1Abonent **root1, Op2Abonent **root2)
{
    Op2Abonent* tmp_to_delete = *root2;
    Op1Abonent tmp;
    while (*root2)
    {
        tmp.x = tmp_to_delete->x;
        tmp.y = tmp_to_delete->y;
        tmp.cur_balance = tmp_to_delete->cur_balance;
        tmp.phone_num = (tmp_to_delete->phone_num) + 70000000000;
        push(root1, tmp);
        *root2 = (*root2)->next;
        delete tmp_to_delete;
        tmp_to_delete = *root2;
    }
};



int main()
{
	/* ������ �����:
	5
	1 1 79035439512 12000
	2 2 78005553535 101004
	3 3 78932089320 0
	4 4 74950000000 90404
	5 5 79623826517 123
	4
	6 6 1 9623826362 1
	7 7 23 9623826422 922
	8 7 9000 8002006200 9000
	8 8 0 4957480748 1000

	unsigned int n;
	cin >> n;
	Op1Abonent* abonents1 = NULL;
	for (unsigned int i = 0; i < n; i++)
	{
		Op1Abonent tmp;
		cin >> tmp.x >> tmp.y >> tmp.phone_num >> tmp.cur_balance;
		push(&abonents1, tmp);
	}
	unsigned int m;
	cin >> m;
	Op2Abonent* abonents2 = NULL;
	for (unsigned int i = 0; i < m; i++)
	{
		Op2Abonent tmp;
		cin >> tmp.x >> tmp.y >> tmp.z >> tmp.phone_num >> tmp.cur_balance;
		pushOp2(&abonents2, tmp);
	}

	mergeOp2(&abonents1, &abonents2);
	print(abonents1);

	clean(&abonents1);
	/* ������ ������:
	5 5 79623826517 123
	4 4 74950000000 90404
	3 3 78932089320 0
	2 2 78005553535 101004
	1 1 79035439512 12000
	8 8 74957480748 100000
	8 7 78002006200 900000
	7 7 79623826422 92200
	6 6 79623826362 100

	return 0;
}
*/
