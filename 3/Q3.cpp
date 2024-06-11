#include <iostream>
#include <stdio.h> 
using namespace std;

struct Chicken
{
	char gender;
	int age;
	char IsFlu;

};

struct Farm
{
	int num;
	Chicken* c;
	char city[200];
};

void main()
{
	int N, ct = 0, inf;
	Farm* f;
	char un[200];

	cout << "Enter no.of farms" << endl;
	cin >> N;

	f = new Farm[N];

	cout << "Enter information" << endl;
	for (int i = 0; i < N; i++)
	{
		cin >> f[i].num;

		f[i].c = new Chicken[f[i].num];
		for (int k = 0; k < f[i].num; k++)
		{
			cin >> f[i].c[k].gender;
			cin >> f[i].c[k].age;
			cin >> f[i].c[k].IsFlu;
		}

		gets_s(f[i].city);

	}

	cout << "Enter city's name" << endl;
	gets_s(un);
	int check;

	for (int i = 0; i < N; i++)
	{
		check = 0;
		for (int r = 0; un[r] != '\0'; r++)
		{
			if (f[i].city[r] != un[r])
			{
				check++;
			}
		}

		if (check == 0)
		{
			ct++;
		}

	}

	cout << ct << endl;
	ct = 0;
	cout << "Enter farm index" << endl;
	cin >> inf;

	for (int i = 0; i < f[inf].num; i++)
	{
		if (f[inf].c[i].IsFlu == 'y')
		{
			ct++;
		}
	}

	cout << (ct / f[inf].num) * 100 << endl;

}
