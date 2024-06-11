#include <iostream>
using namespace std;
void main()
{
	int x[100][200], ct = 0, ctr = 0, ctc = 0, posr1, posc1, posr2, posc2;
	cout << "Enter values by row" << endl;
	for (int r = 0; r < 100; r++)
	{
		for (int c = 0; c < 200; c++)
		{
			cin >> x[r][c];
		}
	}
	cout << "Enter target:" << endl;
	int target;
	cin >> target;
	for (int r = 0; r < 100; r++)
	{
		for (int c = 0; c < 200; c++)
		{
			if (x[r][c] == target)
			{
				ct++;
				if (ct == 1)
				{
					posr1 = r, posc1 = c;
				}
				if (ct == 2)
				{
					posr2 = r, posc2 = c;
					break;
				}
				if (ct > 2)
				{
					ct = 0;
					posr1 = 0, posr2 = 0, posc1 = 0, posc2 = 0;
					break;
				}
			}
		}
	}
	int tot = 0;
	for (int r = posr1; r <= posr2; r++)
	{
		for (int c = posc1; c <= posc2; c++)
		{
			tot += x[r][c];
		}
	}
	cout << endl;
	cout << "total: " << tot << endl;
}