#include <iostream>
#include <stdio.h> 
using namespace std;

struct Term
{
	int cof;
	int power;
	int val;
	char name;
};

struct PolyEq
{
	int num;
	Term* T;
};

void main()
{
	int N,sp,eval,f;
	char sv;
	PolyEq* P;

	cout << "Enter N" << endl;
	cin >> N;

	P = new PolyEq[N];

	for (int i = 0; i < N; i++)
	{
		cin >> P[i].num;

		P[i].T = new Term[P[i].num];

		for (int k = 0; k < P[i].num; k++)
		{
			cin >> P[i].T[k].cof;
			cin >> P[i].T[k].power;
			cin >> P[i].T[k].val;
			cin >> P[i].T[k].name;
		}

	}

	cout << "Enter specific variable name" << endl;
	cin >> sv;

	for (int i = 0; i < N; i++)
	{
		for (int k = 0; k < P[i].num; k++)
		{
			if (P[i].T[k].name == sv)
			{
				P[i].T[k].cof *= P[i].T[k].power;
				P[i].T[k].power -= 1;
			}
		}
	}

	cout << "Enter specific power" << endl;
	cin >> sp;
	cout << "Enter specific variable name" << endl;
	cin >> sv;

	eval = 0;
	for (int i = 0; i < N; i++)
	{
		eval = 0;
		for (int k = 0; k < P[i].num; k++)
		{
			if (P[i].T[k].name == sv && P[i].T[k].power == sp)
			{
				f = P[i].T[k].val;
				for (int z = 0; z <= P[i].T[k].power; z++)
				{
					P[i].T[k].val *= f;
				}

				P[i].T[k].val *= P[i].T[k].cof;
				eval += P[i].T[k].val;

			}
		}

		cout << eval << endl;
	}


}
