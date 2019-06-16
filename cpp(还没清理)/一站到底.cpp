/*
	Name: 改革春风吹满地
	Copyright: C1825技术组
	Author: main
	Date: 14/04/19 14:46
*/

#include<bits/stdc++.h>
#include<windows.h>
#define M 7//组 
#define N 100
using namespace std;
struct weizi {
	int sum;
	int dui;
} x[M];
bool sf[N+1];
int main() {
	system("title main");//设置cmd窗口标题
	HWND hwnd;
	hwnd=FindWindow(NULL,"main");
	MoveWindow(hwnd,497,261,60,20,1);
	system("mode con cols=100 lines=40");//窗口宽度高度
	srand((unsigned)time(NULL));
	for(int i=1; i<=M; i++) {
		x[i].dui=i;
	}
	//cout<<"改革春风吹满地"<<endl;
	Sleep(1000);
	/cout<<"中国人民真争气"<<endl;
	Sleep(1000);
	system("cls");
	cout<<"C1825技术组荣誉出品"<<endl;
	Sleep(1000);
	system("cls");
	int cs=7;//次数
	while(cs--) {
		for(int i=1; i<=M; i++) {
			cout<<"现在是第"<<x[i].dui<<"组"<<endl;
			Sleep(1000);
			int cCCF=rand()%(N+1)+1;
			int X=300;
			while(1) {
				if(sf[cCCF]==0) {
					cout<<"题目为"<<cCCF<<endl;
					Sleep(1000);
					sf[cCCF]=1;
					break;
				}
				cCCF=rand()%(N+1)+1;
			}
			cout<<"是否正确？"<<endl;
			string ans;
			cin>>ans;
			if(ans=="Y"||ans=="y"||ans=="yes"||ans=="Yes") {
				x[i].sum++;
			}
			system("cls");
		}
	}
	for(int i=1; i<=M; i++) {
		for(int j=1; j<=i; j++) {
			if(x[i].sum>x[j].sum) {
				swap(x[i],x[j]);
			}
		}
	}
	system("color 4F");
	for(int i=1; i<=M; i++) {
		cout<<"\n\n\n\n\n\n";
		cout<<"                 |--------------------------------------------|\n";
		cout<<"                 |                                            |\n";
		cout<<"                 |                                            |\n";
		cout<<"                 |               第"<<i<<"名："<<x[i].dui<<"                     |\n                 |                                            |\n";
		cout<<"                 |               分数为"<<x[i].sum<<"                      |\n";
		cout<<"                 |                                            |\n";
		cout<<"                 |                                            |\n";
		cout<<"                 |                                            |\n";
		cout<<"                 |                                            |\n";
		cout<<"                 |--------------------------------------------|\n";
		Sleep(2000);
		system("cls");
	}
	return 0;
}
