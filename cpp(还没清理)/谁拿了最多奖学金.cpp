#include<bits/stdc++.h>
using namespace std;
int n, sum, maxm, pos;   //sum、maxm、pos记录奖金总额、最高奖金额及序号 
struct node
{
    char name[21];   //姓名 
    int pj;   //期末平均成绩
    int py;   //班级评议成绩
    char gb;  //学生干部
    char xb;  //西部省份 
    int lw;   //论文
    int money = 0;  //该生所得奖金   
} a[110];

int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i ++)
    {
        scanf("%s%d%d%c%c%d", a[i].name, &a[i].pj, &a[i].py, &a[i].gb, &a[i].xb, &a[i].lw);
        if (a[i].pj > 80 && a[i].lw >= 1) a[i].money += 8000;  //院士奖学金
        if (a[i].pj > 85 && a[i].py > 80) a[i].money += 4000;  //五四奖学金
        if (a[i].pj > 90) a[i].money += 2000;   //成绩优秀奖
        if (a[i].pj > 85 && a[i].xb == 'Y') a[i].money += 1000;   //西部奖学金
        if (a[i].py > 80 && a[i].gb == 'Y') a[i].money += 850;    //班级贡献奖
        sum += a[i].money;
        if (a[i].money > maxm)
           pos = i, maxm = a[i].money;
    }
    printf("%s\n%d\n%d", a[pos].name, maxm, sum); 
    return 0;
}


