#include <iostream>
using namespace std;
void Check(char x[][8], int r, int c, int& check)
{
	int ct = 0;
	//row
	for (int i = 0; i < 8; i++)
	{
		if (x[r][i] == '&')
		{
			ct++;
			if (ct > 1)
			{
				check = 1;
			}
		}
	}

	ct = 0;
	//column
	for (int i = 0; i < 8; i++)
	{
		if (x[i][c] == '&')
		{
			ct++;
			if (ct > 1)
			{
				check = 1;
			}
		}
	}
	//DiagonalUpLeft
	ct = 0;
	for (int i = 0; i < 8; i++)
	{
		if (x[i][i] == '&')
		{
			ct++;
			if (ct > 1)
			{
				check = 1;
			}
		}
	}

	//DiagonalDownLeft
	ct = 0;
	int k = 0;
	for (int i = 7; i > 0 && k < 8; i--, k++)
	{
		if (x[i][k] == '&')
		{
			ct++;
			if (ct > 1)
			{
				check = 1;
			}
		}
	}

}
void main()
{
	char x[8][8];
	int r = 0, c = 0, check = 0;

	cout << "Enter positions of queens" << endl;
	for (int i = 0; i < 8; i++)
	{
		cout << "Queen " << i + 1 << endl;
		cout << "Enter row" << endl;
		cin >> r;
		cout << "Enter column" << endl;
		cin >> c;

		x[r][c] = '&';

	}

	for (int r = 0; r < 8; r++)
	{
		for (int c = 0; c < 8; c++)
		{
			if (x[r][c] == '&')
			{
				Check(x, r, c, check);
				cout << "check:" << check << endl;
				if (check == 1)
				{
					cout << "Error in cell of row: " << r << " and column: " << c << endl;

				}


			}
		}
	}

	if (check == 0)
	{
		cout << "Good solution" << endl;
	}
}
