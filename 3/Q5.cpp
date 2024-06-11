#include <iostream> 
#include <stdio.h> 
using namespace std;

struct Building
{
	char type[200];
	int min;

};

struct City
{
	char name[200];
	int num;
	Building* b;

};

void main()
{
	int N;
	City* c;
	char uc[200];

	cout << "Number of cities" << endl;
	cin >> N;

	c = new City[N];

	for (int i = 0; i < N; i++)
	{
		cout << "enter name" << endl;
		gets_s(c[i].name);

		cout << "enter no.of buildings" << endl;
		cin >> c[i].num;

		c[i].b = new Building[c[i].num];
		cout << "enter details" << endl;
		for (int k = 0; k < c[i].num; k++)
		{
			cout << "type" << endl;
			gets_s(c[i].b[k].type);
			cin >> c[i].b[k].min;
		}

	}

	cout << "Enter city" << endl;
	gets_s(uc);
	int check, ratio = 0, tot = 0;

	for (int i = 0; i < N; i++)
	{
		check = 0;
		for (int r = 0; uc[r] != '\0'; r++)
		{
			if (c[i].name[r] != uc[r])
			{
				check++;
			}
		}

		if (check == 0)
		{
			for (int k = 0; k < c[i].num; k++)
			{
				tot += c[i].b[k].min;

			}

			ratio =  tot/ c[i].num;

		}

	}

	cout << "Ratio:" << ratio << endl;

	cout << "Enter city" << endl;
	gets_s(uc);
	int max = -99999;
	char maxp[200];

	for (int i = 0; i < N; i++)
	{
		max = -99999;
		check = 0;
		for (int r = 0; uc[r] != '\0'; r++)
		{
			if (c[i].name[r] != uc[r])
			{
				check++;
			}
		}

		if (check == 0)
		{
			for (int k = 0; k < c[i].num; k++)
			{
				if (c[i].b[k].min > max)
				{
					max = c[i].b[k].min;
					for (int z = 0; c[i].b[k].type[z] != '\0'; z++)
					{
						maxp[z] = c[i].b[k].type[z];
					}
				}
			}
		}

	}
	cout << maxp << endl;

}
