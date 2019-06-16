#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("knight9.in", "r", stdin);
	freopen("knight9.out", "w", stdout);
	int n, day = 0, num = 1, sum = 0, ans = 0;
	cin >> n;
	while (sum <= n)
	{
		sum += num;
		day ++;  //当前工资标准拿了几天
		ans ++;  //所有工资标准总共拿了几天
		if (day == num)
			num ++, day = 0;
	}
	cout << ans - 1;
	return 0;
}


