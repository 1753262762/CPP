#include<bits/stdc++.h>
using namespace std;
int n, sum, maxm, pos;   //sum��maxm��pos��¼�����ܶ��߽������ 
struct node
{
    char name[21];   //���� 
    int pj;   //��ĩƽ���ɼ�
    int py;   //�༶����ɼ�
    char gb;  //ѧ���ɲ�
    char xb;  //����ʡ�� 
    int lw;   //����
    int money = 0;  //�������ý���   
} a[110];

int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i ++)
    {
        scanf("%s%d%d%c%c%d", a[i].name, &a[i].pj, &a[i].py, &a[i].gb, &a[i].xb, &a[i].lw);
        if (a[i].pj > 80 && a[i].lw >= 1) a[i].money += 8000;  //Ժʿ��ѧ��
        if (a[i].pj > 85 && a[i].py > 80) a[i].money += 4000;  //���Ľ�ѧ��
        if (a[i].pj > 90) a[i].money += 2000;   //�ɼ����㽱
        if (a[i].pj > 85 && a[i].xb == 'Y') a[i].money += 1000;   //������ѧ��
        if (a[i].py > 80 && a[i].gb == 'Y') a[i].money += 850;    //�༶���׽�
        sum += a[i].money;
        if (a[i].money > maxm)
           pos = i, maxm = a[i].money;
    }
    printf("%s\n%d\n%d", a[pos].name, maxm, sum); 
    return 0;
}


