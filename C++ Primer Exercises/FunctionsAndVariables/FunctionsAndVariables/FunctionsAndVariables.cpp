#include "stdafx.h"
namespace life 
{
	auto meaning = 42;
	auto *pm = &meaning;
	auto &rm = meaning;
}

void functions_and_vars()
{
	cout << "Hello, World!" << endl;

	using namespace life;
	cout << meaning << " takes up " <<
	sizeof(meaning) << " bytes " << endl;

	*pm = 43;
	cout << meaning << endl;
	rm = 42;
	cout << meaning << endl;
}

void stack_and_heap()
{
	string s("hello");
	string *t = new string("world");

	delete t;
	
	int *values = new int[128];

	delete[] values;
}

int add(int a, int b)
{
	return a + b;
}

auto add2(int a, int b) -> int { return a + b; }

void inc(int& a) { a++; }
void inc2(int *a) { (*a)++; }

int main(int argc, char *argv[])
{
	//int n = 10;
	//cout << n << endl;
	//inc(n);
	//cout << n << endl << endl;

	//n = 20;
	//cout << n << endl;
	//inc2(&n);
	//cout << n << endl << endl;

	//cout << argv[0] << endl;
	//cout << argc << endl;

	string s("hello");
	string* t = new string("world");

	delete t;

	getchar();
    return 0;
}

