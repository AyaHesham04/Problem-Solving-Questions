#include <iostream>
using namespace std;

void Check(char x[][3], char p1, char p2, int& check)
{
	check = 0;
	for (int i = 0; i < 3; i++)
	{
		if (x[i][0] == x[i][1] && x[i][1] == x[i][2])
		{
			check = 1;
			if (x[i][0] == p1) { cout << "Congratulations!! Winner is Player 1"; }
			else { cout << "Congratulations!!Winner is Player 2"; }
			break;
		}
		if (x[0][i] == x[1][i] && x[1][i] == x[2][i])
		{
			check = 1;
			if (x[i][0] == p1) { cout << "Congratulations!! Winner is Player 1"; }
			else { cout << "Congratulations!!Winner is Player 2"; }
			break;
		}
	}
	if (x[0][0] == x[1][1] && x[1][1] == x[2][2])
	{
		check = 1;
		if (x[0][0] == p1) { cout << "Congratulations!! Winner is Player 1"; }
		else { cout << "Congratulations!!Winner is Player 2"; }

	}
	if (x[0][2] == x[1][1] && x[1][1] == x[2][0])
	{
		check = 1;
		if (x[0][2] == p1) { cout << "Congratulations!! Winner is Player 1"; }
		else { cout << "Congratulations!!Winner is Player 2"; }

	}

}


void main()
{
	char x[3][3], p1, p2;
	int sr, sc, check = 0;

	x[0][0] = '1', x[0][1] = '2', x[0][2] = '3', x[1][0] = '4', x[1][1] = '5', x[1][2] = '6', x[2][0] = '7', x[2][1] = '8', x[2][2] = '9';
	for (int r = 0; r < 3; r++)
	{
		for (int c = 0; c < 3; c++)
		{
			cout << x[r][c] << " ";
		}
		cout << endl;
	}

	cout << "Player 1 choose X or O" << endl;
	cin >> p1;
	if (p1 == 'X')
	{
		p2 = 'O';
	}
	else
	{
		p2 = 'O';
	}

	for (int i = 0; ; i++)
	{
		if (i % 2 == 0)
		{
			cout << "Player 1 turn" << endl;
			cout << endl;
			cout << "Enter row" << endl;
			cin >> sr;
			cout << "Enter column" << endl;
			cin >> sc;

			x[sr][sc] = p1;
			Check(x, p1, p2, check);
			if (check == 1)
			{
				break;
			}

		}
		if (i % 2 != 0)
		{
			cout << "Player 2 turn" << endl;
			cout << endl;
			cout << "Enter row" << endl;
			cin >> sr;
			cout << "Enter column" << endl;
			cin >> sc;

			x[sr][sc] = p2;
			Check(x, p1, p2, check);
			if (check == 1)
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
		int ct = 0;
		for (int r = 0; r < 3; r++)
		{
			for (int c = 0; c < 3; c++)
			{
				if (x[r][c] != '1' && x[r][c] != '2' && x[r][c] != '3' && x[r][c] != '4' && x[r][c] != '5' && x[r][c] != '6' && x[r][c] != '7' && x[r][c] != '8' && x[r][c] != '9')
				{
					ct++;

				}
			}

		}
		if (ct == 9)
		{
			cout << "It's a tie :(" << endl;
			break;
		}
	}

	cout << endl;
	for (int r = 0; r < 3; r++)
	{
		for (int c = 0; c < 3; c++)
		{
			cout << x[r][c] << " ";
		}
		cout << endl;
	}
}