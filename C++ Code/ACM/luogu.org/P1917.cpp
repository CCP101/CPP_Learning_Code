#include<iostream>
using namespace std;
int main()
{
	int count = 0;
	char array[3][3];
	for (int i = 0; i < 3; i++)
		for (int r = 0; r < 3; r++)
		{
			cin >> array[i][r];
			if (array[i][r] != '-')
				count++;
		}
	if (array[0][2] == 'X' || array[1][0] == 'X' || array[1][2] == 'X' || array[2][1] == 'X')
		cout << "xiaoa will win.";
	else
		cout << "Dont know.";
	cout <<endl<<count;
}