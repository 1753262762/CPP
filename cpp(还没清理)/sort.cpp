#include<bits/stdc++.h>
using namespace std;
struct pack
{
	int value; 
	int weight;
} a[10010];

bool cmp(pack x, pack y)
{
	if (x.value == y.value) return x.weight < y.weight;   //等价值则重量轻在前
	return x.value > y.value;   
}

int main()
{
	int n; scanf("%d", &n);
	for (int i = 0; i < n; i ++) 
		scanf("%d%d", &a[i].value, &a[i].weight);
	sort(a, a + n, cmp);
	for (int i = 0; i < n; i ++) 
		printf("%d %d\n", a[i].value, a[i].weight);
	return 0;
 }
 

