#include <iostream>
using namespace std;

void main()
{
	char x[20][40];
	int s[5][2];
	char uc;

	cout << "Enter matrix as follows:" << endl;
	cout << endl;
	cout << "Represent obstacle by #" << endl << "Represent open area by space" << endl << "Represent final cell by @" << endl;
	cout << endl;
	
	for (int r = 0; r < 20; r++)
	{
		for (int c = 0; c < 40; c++)
		{
			cin>> x[r][c];
		}
	}

	cout << endl;
	cout << "Enter snake (5 cells represented as ~)";
	for (int r = 0; r < 5; r++)
	{
		for (int c = 0; c < 2; c++)
		{
			cin>> s[r][c];
		}
	}

	int xr, xc;

	for (int r = 0; r < 5; r++)
	{
		int c = 0;
		xr = s[r][c];
		xc = s[r][c + 1];
		x[xr][xc] = '~';

	}
	cout << endl;
	for (int r = 0; r < 20; r++)
	{
		for (int c = 0; c < 40; c++)
		{
			cout << x[r][c] << " ";
		}
		cout << endl;
	}

	int check = 0;
	for (;check!=1 ;)
	{
		cout << "Enter direction ( u for up , d for down , r for right, l for left" << endl;
		cin >> uc;


		if (uc == 'u')
		{
			x[s[4][0]][s[4][1]] = '.';
			for (int i = 4; i > 0; i--)
			{
				s[i][0] = s[i - 1][0];
				s[i][1] = s[i - 1][1];
			}

			s[0][0] = s[0][0] - 1;


			for (int r = 0; r < 5; r++)
			{
				int c = 0;
				xr = s[r][c];
				xc = s[r][c + 1];

				if (x[xr][xc] == '@')
				{
					cout << endl;
					cout << "WINNER!!" << endl;
					check = 1;
					break;
				}
				if (x[xr][xc] == '#')
				{
					cout << endl;
					cout << "YOU LOST" << endl;
					check = 1;
					break;
				}

				x[xr][xc] = '~';


			}
		}

		if (uc == 'd')
		{
			x[s[4][0]][s[4][1]] = '.';
			for (int i = 4; i > 0; i--)
			{
				s[i][0] = s[i - 1][0];
				s[i][1] = s[i - 1][1];
			}

			s[0][0] = s[0][0] + 1;


			for (int r = 0; r < 5; r++)
			{
				int c = 0;
				xr = s[r][c];
				xc = s[r][c + 1];

				if (x[xr][xc] == '@')
				{
					cout << endl;
					cout << "WINNER!!" << endl;
					check = 1;
					break;
				}
				if (x[xr][xc] == '#')
				{
					cout << endl;
					cout << "YOU LOST" << endl;
					check = 1;
					break;
				}

				x[xr][xc] = '~';


			}
		}

		if (uc == 'l')
		{
			x[s[4][0]][s[4][1]] = '.';
			for (int i = 4; i > 0; i--)
			{
				s[i][0] = s[i - 1][0];
				s[i][1] = s[i - 1][1];
			}

			s[0][1] = s[0][1] - 1;


			for (int r = 0; r < 5; r++)
			{
				int c = 0;
				xr = s[r][c];
				xc = s[r][c + 1];

				if (x[xr][xc] == '@')
				{
					cout << endl;
					cout << "WINNER!!" << endl;
					check = 1;
					break;
				}
				if (x[xr][xc] == '#')
				{
					cout << endl;
					cout << "YOU LOST" << endl;
					check = 1;
					break;
				}

				x[xr][xc] = '~';


			}
		}

		if (uc == 'r')
		{
			x[s[4][0]][s[4][1]] = '.';
			for (int i = 4; i > 0; i--)
			{
				s[i][0] = s[i - 1][0];
				s[i][1] = s[i - 1][1];
			}

			s[0][1] = s[0][1] + 1;


			for (int r = 0; r < 5; r++)
			{
				int c = 0;
				xr = s[r][c];
				xc = s[r][c + 1];

				if (x[xr][xc] == '@')
				{
					cout << endl;
					cout << "WINNER!!" << endl;
					check = 1;
					break;
				}
				if (x[xr][xc] == '#')
				{
					cout << endl;
					cout << "YOU LOST" << endl;
					check = 1;
					break;
				}

				x[xr][xc] = '~';


			}
		}

		cout << endl;
		for (int r = 0; r < 20; r++)
		{
			for (int c = 0; c < 40; c++)
			{
				cout << x[r][c] << " ";
			}
			cout << endl;
		}
	}
}



