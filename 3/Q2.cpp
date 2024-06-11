#include <iostream>
#include <stdio.h> 
using namespace std;

struct Mail
{
	char ns[100];
	int date;
	char mt[200];
	int risk;
	char nd[100];
};

struct Inbox
{
	int num;
	Mail* M;
};

void main()
{
	int N, s, e, in;
	Inbox* I;

	cout << "Enter no.of inboxes" << endl;
	cin >> N;

	I = new Inbox[N];


	cout << "Enter values" << endl;
	for (int i = 0; i < N; i++)
	{
		cin >> I[i].num;
		I[i].M = new Mail[I[i].num];

		for (int k = 0; k < I[i].num; k++)
		{
			gets_s(I[i].M[k].ns);
			cin >> I[i].M[k].date;
			gets_s(I[i].M[k].mt);
			cin >> I[i].M[k].risk;
			gets_s(I[i].M[k].nd);

		}
	}

	cout << "Enter range of risk" << endl;
	cin >> s >> e;


	for (int i = 0; i < N; i++)
	{
		for (int k = 0; k < I[i].num; k++)
		{
			if (I[i].M[k].risk >= s && I[i].M[k].risk <= e)
				cout << I[i].M[k].mt << endl;

		}
	}

	int ct = 0;
	cout << "Enter inbox" << endl;
	cin >> in;

	for (int k = 0; k < I[in].num; k++)
	{
		if (I[in].M[k].risk > 50)
		{
			ct++;
		}
	}

	cout << ct << endl;

}
