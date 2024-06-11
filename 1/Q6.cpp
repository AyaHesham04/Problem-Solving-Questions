#include <iostream>
using namespace std;
void main()
{
	int x[100][100], sr, z;
	char diagonal;

	cout << "Enter values (by each row)" << endl;
	for (int r = 0; r < 100; r++)
	{
		for (int c = 0; c < 100; c++)
		{
			cin >> x[r][c];
		}
	}
	cout << endl;
	cout << "Enter row by choice" << endl;
	cin >> sr;
	cout << endl;
	cout << "Enter diagonal by choice (L for left , R for right)" << endl;
	cin >> diagonal;

	if (diagonal == 'L')
	{
		int c = 0;
		for (int r = 0; r < 100; r++)
		{
			z = x[sr][c];
			x[sr][c] = x[r][c];
			x[r][c] = z;
			c++;
		}
	}

	if (diagonal == 'R')
	{
		int c = 99;
		for (int r = 0; r < 100; r++)
		{
			z = x[sr][c];
			x[sr][c] = x[r][c];
			x[r][c] = z;
			c--;
		}
	}

	for (int r = 0; r < 100; r++)
	{
		for (int c = 0; c < 100; c++)
		{
			cout << x[r][c] << " ";
		}
		cout << endl;
	}
}
