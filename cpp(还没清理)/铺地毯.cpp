#include<bits/stdc++.h>
using namespace std;
int a[10010][4], n, x, y, i, j;
int main()
{ 
	scanf("%d", &n);
	for (i = 1; i <= n; i ++)
		for (j = 0; j < 4; j ++)
			scanf("%d", &a[i][j]);   //�ѵ�̺���ݶ��뵽һ�� n ��4�Ķ�ά���� 
    scanf("%d%d", &x, &y);
	for (i = n; i >= 1; i --)
		if (a[i][0] <= x && a[i][0] + a[i][2] >= x && a[i][1] <= y && a[i][1] + a[i][3] >= y)
		{
			printf("%d", i);    //�����̺�ĸ����Ŀ��㸲��ס 
			return 0;
		}
	printf("-1");  //ѭ��������û�н������һ����û�б�����ס 
	return 0;
}



