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
		day ++;  //��ǰ���ʱ�׼���˼���
		ans ++;  //���й��ʱ�׼�ܹ����˼���
		if (day == num)
			num ++, day = 0;
	}
	cout << ans - 1;
	return 0;
}


