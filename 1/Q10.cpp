#include <iostream>
using namespace std;

void main()
{
	int x[20][20], tot = 0, max = -99999;
	int a, b;
	int posr = 0, posc = 0, limr = 0, limc1 = 0, limc2 = 0;

	cout << "Enter values" << endl;
	for (int r = 0; r < 20; r++)
	{
		for (int c = 0; c < 20; c++)
		{
			cin >> x[r][c];
		}
	}


	for (int r = 0; r < 20; r++)
	{
		for (int c = 1; c < 19; c++)
		{
			tot = 0;
			tot += x[r][c];
			a = c - 1;
			b = c + 1;
			for (int r1 = r + 1; r1 < 20; r1++)
			{
				if (a - 1 < 0 && r1 + 1 >= 21 || b + 1 > 19 && r1 + 1 >= 21)
				{
					break;
				}
				if (a == 0)
				{
					for (int i = 0; i < 20; i++)
					{
						tot += x[r1][i];
					}
				}
				if (a > 0)
				{
					tot += x[r1][a];
					tot += x[r1][c];
					tot += x[r1][b];
				}
				a--, b++;

				if (tot > max)
				{
					max = tot;
					posr = r;
					posc = c;
				}

			}
		}
	}
	cout << "max:" << max << endl;

	cout << "     " << x[posr][posc] << "     " << endl;
	cout << "   " << x[posr + 1][posc - 1] << " " << x[posr + 1][posc] << " " << x[posr + 1][posc + 1] << endl;

	int ct = 1;

	for (int r = posr + 2; r < 20; r++)
	{
		ct++;
		int c;
		for (c = posc - ct; c < posc + ct + 1; c++)
		{
			cout << x[r][c] << " ";
		}
		cout << endl;
		if (c - 1 < 0)
		{
			break;
		}
	}
}
