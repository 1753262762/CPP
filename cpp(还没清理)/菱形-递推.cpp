#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m, i, j;
	cin >> m;
	for (i = 1; i <= 2 * m - 1; i ++)
	{
		for (j = 1; j <= abs(i - m); j ++) cout << " ";
		for (j = 1; j <= (2 * m - 1) - 2 * abs(i - m); j ++) cout << "*";
		cout << endl;
	}
	return 0;
}
