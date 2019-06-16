#include<bits/stdc++.h>
using namespace std;
int a[10010], b[10010], n, ans; 
void merge(int L, int R)
{
	if (L == R) return;
	int mid = (L + R) / 2;
	merge(L, mid);
	merge(mid + 1, R);
	int i = L, j = mid + 1, k = L;
	while (i <= mid && j <= R)
	{
		if (a[i] <= a[j]) b[k++] = a[i++];   
			else b[k++] = a[j++], ans += mid - i + 1;
		//如果a[i]比a[j]大，那么a[i]后面的数都能跟a[j]构成逆序对 
	}
	while (i <= mid) b[k++] = a[i++]; 
	while (j <= R) b[k++] = a[j++];
	for (int i = L; i <= R; i ++) a[i] = b[i];
}

int main()
{
	scanf("%d", &n);
	for (int i = 0; i < n; i ++) scanf("%d", &a[i]);
	merge(0, n - 1);
	printf("%lld", ans);
	return 0;
}
