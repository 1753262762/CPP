#include<bits/stdc++.h>
using namespace std;
string n;
int main()
{
	int m; cin >> n >> m;
	int len = n.size();
	while (m --)
	{
		int k = len - 1;
		for (int i = 0; i < len - 1; i ++)
			if (n[i] > n[i+1]) {k = i; break;}
		n.erase(k, 1);
		len --;
	}
	while (n[0] == '0') n.erase(0, 1);  //�����λ�� 
	if (n != "") cout << n;  //�п������ n��ɾ�� 
		else cout << "0";
	return 0;
}


