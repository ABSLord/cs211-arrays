#include "arrays.h"
#include<iostream>
using namespace std;

int main()
{
	task_1();

	task_2();

	cout << task_3_zero() << endl;

	task_4();

	int  a1[5] = { 1, 2, 3, 4, 5 };
	int  a2[5];
	task_5_copy(a1, a2, 5);
	task_7_print(a2, 5);
	cout << endl;

	int  a3[5] = { 1, 2, 3, 4, 5 };
	int  a4[5];
	task_6_poor_copy(a3, a4);
	task_7_print(a4, 5);
	cout << endl;
}
