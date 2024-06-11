#include <iostream>
using namespace std;

void main()
{
	int x[3][3], a, ar, ac, b, br, bc, c, cr, cc, d, dr, dc;
	int region;
	char direction;

	cout << "Enter values (by each row)" << endl;
	for (int r = 0; r < 3; r++)
	{
		for (int c = 0; c < 3; c++)
		{
			cin >> x[r][c];
		}
	}
	cout << endl;

	
	for (; ;)
	{
		cout << "Enter region (1,2,3,4)" << endl;
	    cin >> region;

	    cout << "Enter direction (L,R)" << endl;
	    cin >> direction;

		if (region == 1)
		{
			a = x[1][1], ar = 1, ac = 1;
			b = x[1][2], br = 1, bc = 2;
			c = x[2][1], cr = 2, cc = 1;
			d = x[2][2], dr = 2, dc = 2;
		}
		if (region == 2)
		{
			a = x[1][0], ar = 1, ac = 0;
			b = x[1][1], br = 1, bc = 1;
			c = x[2][0], cr = 2, cc = 0;
			d = x[2][1], dr = 2, dc = 1;
		}
		if (region == 3)
		{
			a = x[0][1], ar = 0, ac = 1;
			b = x[0][2], br = 0, bc = 2;
			c = x[1][1], cr = 1, cc = 1;
			d = x[1][2], dr = 1, dc = 2;
		}
		if (region == 4)
		{
			a = x[0][0], ar = 0, ac = 0;
			b = x[0][1], br = 0, bc = 1;
			c = x[1][0], cr = 1, cc = 0;
			d = x[1][1], dr = 1, dc = 1;
		}
		if (direction == 'L')
		{
			x[cr][cc] = a;
			x[ar][ac] = b;
			x[br][bc] = d;
			x[dr][dc] = c;

		}
		if (direction == 'R')
		{
			x[br][bc] = a;
			x[ar][ac] = c;
			x[cr][cc] = d;
			x[dr][dc] = b;
		}

		int ct = 0;
		for (int r = 0; r < 3; r++)
		{
			for (int c = 0; c < 2; c++)
			{
				if (x[r][c+1]-x[r][c] ==1 )
				{
					ct++;
				}
			}
		}

		if (ct == 6)
		{
			break;
		}
	}
	for (int r = 0; r < 3; r++)
	{
		for (int c = 0; c < 3; c++)
		{
			cout << x[r][c] << " ";
		}
		cout << endl;
	}

}