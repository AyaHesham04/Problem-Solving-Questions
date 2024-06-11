#include <iostream>
#include <stdio.h> 
using namespace std;

struct DryCleaningProcess
{
	char tag[200];
	char cp[200];
	int pr;
	int mon;
	int day;

};

struct DryCleaningShop
{
	char name[200];
	int num;
	DryCleaningProcess* P;

};

void main()
{
	int N, in, m, d, ct;
	DryCleaningShop* Sh;

	cout << "Number of shops" << endl;
	cin >> N;

	Sh = new DryCleaningShop[N];


	for (int i = 0; i < N; i++)
	{
		gets_s(Sh[i].name);
		cin >> Sh[i].num;
		Sh[i].P = new DryCleaningProcess[i];
		for (int k = 0; k < Sh[i].num; k++)
		{
			gets_s(Sh[i].P[k].tag);
			gets_s(Sh[i].P[k].cp);
			cin >> Sh[i].P[k].pr;
			cin >> Sh[i].P[k].mon;
			cin >> Sh[i].P[k].day;

		}

	}

	ct = 0;
	cout << "Select shop" << endl;
	cin >> in;
	cout << "Enter date" << endl;
	cout << "Month: " << endl;
	cin >> m;
	cout << "Day: " << endl;
	cin >> d;

	for (int k = 0; k < Sh[in].num; k++)
	{
		if (Sh[in].P[k].day == d && Sh[in].P[k].mon == m)
		{
			ct++;
		}
	}

	cout << ct << endl;

	int max = -99999;
	int tot = 0;
	int mpos;

	cout << "Select shop" << endl;
	cin >> in;
	ct = 1;

	for (; ; )
	{
		if (ct == 13)
		{
			break;

		}

		for (int k = 0; k < Sh[in].num; k++)
		{
			if (Sh[in].P[k].mon == ct)
			{
				tot+ = Sh[in].P[k].pr;

			}
			
		}

		if (tot > max)
		{
			max = tot;
			mpos = ct;
		}
		
		ct++;
	}

	cout << "Month: " << mpos << endl;

}
