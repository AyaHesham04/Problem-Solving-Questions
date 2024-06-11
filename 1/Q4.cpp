#include <iostream>
using namespace std;
void main()
{
	int x[3][2];
	char y[200];
	cout << "Enter values by row" << endl;
	for (int r = 0; r < 3; r++)
	{
		for (int c = 0; c < 2; c++)
		{
			cin >> x[r][c];
		}
	}
	cout << "enter char y" << endl;
	gets_s(y);
	int r = 0;
	int c;
	for (int k = 0; y[k] != '\0'; k++)
	{
		if (y[k] == 'a')
		{
			c = 0;
			r = x[r][c];
		}
	
		else
		{
			c = 1;
			r = x[r][c];
		}
	}
	if (r == 2)
	{
		cout << "accepted";
	}
	else
	{
		cout << "unaccepted";
	}
}
