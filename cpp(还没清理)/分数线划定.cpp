#include<bits/stdc++.h>
using namespace std;
struct node
{
    int number, score;
} a[5010];

int cmp (node x, node y)
{
    if (x.score == y.score) return x.number < y.number;
    return x.score > y.score;
}

int main()
{
    int n, m; scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i ++) 
		scanf("%d%d", &a[i].number, &a[i].score);
    m = floor(m * 1.5);  //����ȡ��
    sort(a, a + n, cmp);
    int line = a[m-1].score;   //������ 
    for (int i = m; i < n; i ++)
        if (a[i].score == line) m ++;
            else break;   //����������е���� 
    printf("%d %d\n", line, m);  //�����ߺ�����
    for (int i = 0; i < m; i ++) 
		printf("%d %d\n", a[i].number, a[i].score);
    return 0;
 } 
