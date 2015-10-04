#include <iostream>
#include <cassert>

using namespace std;

void task_1()
{
	const int n = 10;
	int a[n];
}

void task_2()
{
	int a[5] = { 0 };
	assert(!a[4]);
}


int task_3_zero()
{
	int a[5] = { 0 };
	assert(!a[4]);
	return a[4];
}

void task_4()
{
	int a[5] = {1,2,3,4,5};
	assert(a[0] == 1);
	assert(a[1] == 2);
	assert(a[2] == 3);
	assert(a[3] == 4);
	assert(a[4] == 5);
}

// copy arr1 to arr2
void task_5_copy(int * arr1, int * arr2, int size)
{
	for (int i = 0; i < size; i++)
		arr2[i] = arr1[i];
}

// copy array `arr1` to array `arr2` of the same size
void task_6_poor_copy(int * arr1, int * arr2)
{

	for (int i = 0; i <= sizeof(arr1); i++)
	{
		arr2[i] = arr1[i];
	}
}

// print array `arr`
void task_7_print(int * arr, int size, char delim = ' ')
{
	for (int i = 0; i < size; ++i)
		cout << arr[i] << delim;
}


