#include <iostream>
using namespace std;
void main()
{
	int x[20][15];
	cout << "Enter attendance" << endl;
	for (int r = 0; r < 20; r++)
	{
		cout << "Enter for student " << r << endl;
		for (int c = 0; c < 15; c++)
		{
			cin >> x[r][c];
		}
	}

	/*6 days of the week is school*/
	float ct = 6 * 15;

	int max = -99999; int min = 99999; int posx, posn;
	for (int r = 0; r < 20; r++)
	{
		float tot = 0;
		for (int c = 0; c < 15; c++)
		{
			if (x[r][c] != 0)
			{
				tot += 6 - x[r][c];
				
			}

			if (x[r][c] == 0)
			{
				tot += 6;
			}
		}
		float avg = tot / ct;
		cout << "Avg absents: " << avg << endl;

			if (tot > max)
			{
				max = tot;
				posx = r;
			}
		if (tot < min)
		{
			min = tot;
			posn = r;
		}
	}
	cout << endl;
	cout << "Student with max absence: student " << posx << endl;
	cout << "Student with min absence: student " << posn << endl;
}
