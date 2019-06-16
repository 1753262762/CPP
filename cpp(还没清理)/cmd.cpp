#include<iostream>
#include<ctime>
#include<cstdlib>
#include<cstdio>
#include<windows.h>
#include<conio.h>
#include<cstring>
#include<fstream>
using namespace std;
#define FILENAME "C:\\Program Files (x86)\\GSCG服务器V2.2\\G.S.C.G.服务器V2.2.exe"
char cmdstr[256];
int i;
int YN(int k) {
	FILE *f;
	char fn[40];
	char ln[80];
	int yn=0;

	sprintf(fn,"d:\\ping%d.txt",k);
	f=fopen(fn,"r");
	if (NULL!=f) {
		fgets(ln,80,f);
		fgets(ln,80,f);
		fgets(ln,80,f);
		if (1==fscanf(f,"Re%c",&yn)) yn='q'-yn;
		fclose(f);
		unlink(fn);
	}
	return yn;
}
char username[100];
int osver;
int count_maren=0;
void readdata() {
	freopen("datafiles.dat","r",stdin);
	cin>>osver>>username;
	freopen("datamr.dat","r",stdin);
	cin>>count_maren;
	freopen("CON","r",stdin);
}
void putdata() {
	freopen("datamr.dat","w",stdout);
	cout<<count_maren<<'\n';
}
bool chuoji(char a[],char b[],int g) {
	int i;
	bool flag=true;
	for(i=0; i<g; i++) {
		if(a[i]!=b[i])
			flag=0;
	}
	return flag;
}
void shut() {
	char cz=0;
	while(cz!='Y'&&cz!='N'&&cz!='y'&&cz!='n') {
		if(cz=='\n')
			cout<<"您确定您要这样做吗？(Y/N)";
		else
			cout<<"\n您确定您要这样做吗？(Y/N)";
		cz=getche();
	}
	cout<<"\n\n";
	if(cz=='N' || cz=='n') {
		return;
	}
	system("shutdown -s");
}
bool AnalysisFile() {
	bool rState;//返回状态
	FILE *file;
	char ln[80];
	freopen("returnpingdata.txt","r",stdin);

	fgets(ln, 80, file);//读入空行，舍弃
	fgets(ln, 80, file);//读入ping信息，舍弃
	fgets(ln, 80, file);//读入ping对象返回值，用来分析

	string data = ln;
	int iPos = data.find("=");
	data = data.substr(iPos+1,3);//截取字符串返回字节数
	int n = atoi(data.c_str());
	rState = n > 0;
	fclose(file);
	return rState;
}
void format() {
	char ch=0;
	printf("请输入您要格式化的磁盘：");
	char xyz=getche();
	while(ch!='Y'&&ch!='N'&&ch!='y'&&ch!='n') {
		if(ch=='\n')
			cout<<"您确定您要这样做吗？(Y/N)";
		else
			cout<<"\n您确定您要这样做吗？(Y/N)";
		ch=getche();
	}
	cout<<"\n\n";
	if(ch=='N' || ch=='n') {
		return;
	}
	if(xyz=='C' || xyz=='c') {
		system("format C:");
	} else if(xyz=='D' || xyz=='d') {
		system("format D:");
	} else if(xyz=='E' || xyz=='e') {
		system("format E:");
	} else if(xyz=='F' || xyz=='f') {
		system("format F:");
	} else if(xyz=='G' || xyz=='g') {
		system("format G:");
	} else if(xyz=='H' || xyz=='h') {
		system("format H:");
	} else {
		printf("无效驱动器规格。\n\n");
	}
}
void check_data() {
	char zhanghao[100]= {'\0'};
	int xitong;
	int marencishu;
	system("datafiles.dat");
	system("datamr.dat");
	freopen("datafiles.dat","r",stdin);
	cin>>xitong>>zhanghao;
	freopen("datamr.dat","r",stdin);
	cin>>marencishu;
	freopen("CON","r",stdin);
	printf("\n\n数据处理完毕。\n\n");
	printf("用户操作系统：Windows %d\n",xitong);
	printf("用户账号：");
	cout<<zhanghao<<'\n';
	printf("用户骂人次数：%d\n",marencishu);
	printf("Data Updating···\n");
	int aaa;
	if(aaa%2==1) {
		printf("\nData update failed (Error Code 112) Enter 1 to check the details.Enter other characters to return.\n");
		char exty = getche();
		if(exty == '1') {
			printf("Error Code 112 : The saved data is as same as the new ones , or that you have updated the data in this program before.\n");
			Sleep(3000);
		}
		return;
	}
	freopen("datamr.dat","r",stdout);
	printf("%d\n",count_maren);
	freopen("CON","w",stdout);
	Sleep(1000);
	printf("\n");
	printf("Data update complete!Returning···\n\n");
	Sleep(1000);
	return;
}
void admin_center() {
	printf("欢迎进入管理中心！\n\n");
	freopen("datacom.dat","w",stdout);
	printf("1");
	freopen("CON","w",stdout);
	char orderdd[1000];
	while(1) {
guanlicenter:
		cout<<"C:\\Users\\"<<username<<"\\admin\\center"<<'>';
		cin.getline(orderdd,999,'\n');
		if(orderdd[0]==NULL) {
			continue;
		}
		int i;
		if(chuoji(orderdd,"cd ",3)||chuoji(orderdd,"cd\0",3))
			cout<<"C:\\Users\\"<<username<<'\n'<<'\n';
		else if(chuoji(orderdd,"format ",7)||chuoji(orderdd,"format\0",7))
			format();
		else if(chuoji(orderdd,"cls ",4)||chuoji(orderdd,"cls\0",4)) {
			system("cls");
			system("@echo off");
			if(osver==7) {
				cout<<"Microsoft Windows [版本 6.1.7601]\n";
				cout<<"版权所有 (c) 2009 Microsoft Corporation。保留所有权利。\n\n";
			} else if(osver==10) {
				cout<<"Microsoft Windows [版本 10.0.15063]\n";
				cout<<"(c) 2017 Microsoft Corporation。保留所有权利。\n\n";
			} else if(osver==2147483647) {
				cout<<"Mac Apple [版本10.0.15063]"<<endl;
				cout<<"版权所有 (c) 2017 Apple。保留所有权利。\n\n";
			} else {
				cout<<"Operating system error!";
				getch();
				exit(0);
			}
		} else if(chuoji(orderdd,"help ",5)||chuoji(orderdd,"help\0",5))
			system("help");
		else if(chuoji(orderdd,"sort ",5)||chuoji(orderdd,"sort\0",5))
			system("sort");
		else if(chuoji(orderdd,"shutdown ",9)||chuoji(orderdd,"shutdown\0",9))
			shut();
		else if(chuoji(orderdd,"data ",5)||chuoji(orderdd,"data\0",5))
			check_data();
		else if(chuoji(orderdd,"exit ",5)||chuoji(orderdd,"exit\0",5)) {
			printf("已退出管理中心！请稍候···\n");
			Sleep(1000);
			system("cls");
			system("@echo off");
			if(osver==7) {
				cout<<"Microsoft Windows [版本 6.1.7601]\n";
				cout<<"版权所有 (c) 2009 Microsoft Corporation。保留所有权利。\n\n";
			} else if(osver==10) {
				cout<<"Microsoft Windows [版本 10.0.15063]\n";
				cout<<"(c) 2017 Microsoft Corporation。保留所有权利。\n\n";
			} else if(osver==2147483647) {
				cout<<"Mac Apple [版本10.0.15063]"<<endl;
				cout<<"版权所有 (c) 2017 Apple。保留所有权利。\n\n";
			} else {
				cout<<"Operating system error!";
				getch();
				exit(0);
			}
			return;
		} else if(chuoji(orderdd,"users ",6)||chuoji(orderdd,"users\0",6)) {
admin_users:
			printf("请输入您要管理的用户：");
			char admin_usernameadmin[100];
			cin.getline(admin_usernameadmin,99,'\n');
			if(strcmp(admin_usernameadmin,username) == 0) {
caozuoagain:
				printf("请输入操作：");
				char admin_yonghucaozuo[1000];
				cin.getline(admin_yonghucaozuo,999,'\n');
				if(chuoji(admin_yonghucaozuo,"shutdown ",9)||chuoji(admin_yonghucaozuo,"shutdown\0",9)) {
					shut();
					printf("操作成功！\n\n");
				} else if(chuoji(admin_yonghucaozuo,"format",7)||chuoji(admin_yonghucaozuo,"format ",7)) {
					format();
					printf("操作成功！\n\n");
				} else {
					printf("\n");
					Sleep(1000);
					goto caozuoagain;
				}
				Sleep(1000);
			} else if(strcmp(admin_usernameadmin,"exit ") == 0 || strcmp(admin_usernameadmin,"exit\0") == 0) {
				goto guanlicenter;
			} else {
				printf("\n");
				Sleep(1000);
				goto admin_users;
			}
		} else
			cout<<"\'"<<orderdd<<"\' 不是内部或外部命令，也不是可运行的程序\n或批处理文件。\n\n";
	}
	Sleep(3000);
	return;
}
void password() {
	string password;
	printf("请输入密码以进入管理员操作中心\n");
	char ch = 0;
	int chcnt = 0;
	cout << "Username : "<<username<<'\n'<<"Password : ";
	while( (ch = getch()) != '\r' ) {
		if( ch == '\b' ) {
			cout << ch;
			cout << ' ';
			cout << ch;
			if( !(password.empty()) != 0 ) {
				password.erase( password.size() - 1, 1 );
			}
			if( chcnt <= 0) {
				cout << '\a';
				cout << ' ';
				chcnt++;
				password.erase();
			}
			chcnt--;
		} else {
			if ( isprint( ch ) != 0 ) {
				password += ch;
				cout << '*';
				chcnt++;
			}
		}
	}
	printf("\n\n");
	if(password == "abcd1234 "||password == "abcd1234\0") {
		printf("恭喜您，密码正确！\n");
		admin_center();
	} else {
		printf("很抱歉，密码不相符。\n\n");
		return;
	}
}
void maren() {
	system("shutdown -s -t 30");
	MessageBox(NULL,"你刚才骂了人！系统将在30秒内关机。","骂人关机提示",MB_OK|MB_ICONINFORMATION);
	if(count_maren == 0) {
		count_maren++;
		int ret = MessageBox(NULL,"请问你是否想撤回你发送的消息？","撤回消息询问",MB_YESNO|MB_ICONINFORMATION);
		if(ret==IDYES) {
			system("shutdown -a");
			printf("出于程序员良心发现，以及你这是第一次在这台电脑上骂人，我姑且原谅你。\n下次再骂人就直接关机！\n");
		} else {
			system("shutdown -a");
			printf("你不仅骂人，而且以耻为荣！！！这种人最该死！！！系统将在10秒内关机！\n");
			system("shutdown -s -t 10");
		}
	} else {
		count_maren++;
		printf("这已经是你在本电脑上第%d次骂人了！系统将在10秒内自动关机！\n",count_maren);
		system("shutdown -s -t 10");
		Sleep(3000);
	}
	system("cls");
	freopen("datamr.dat","w",stdout);
	cout<<count_maren<<'\n';
	freopen("CON","w",stdout);
	system("cls");
	return;
}
void go() {
front_page:
	char a[1000];
	while(1) {
		cout<<"C:\\Users\\"<<username<<'>';
		cin.getline(a,999,'\n');
		if(a[0]==NULL)
			continue;
		int i;
		if(chuoji(a,"cd ",3)||chuoji(a,"cd\0",3))
			cout<<"C:\\Users\\"<<username<<'\n'<<'\n';
		else if(chuoji(a,"format ",7)||chuoji(a,"format\0",7))
			format();
		else if(chuoji(a,"cls ",4)||chuoji(a,"cls\0",4)) {
			system("cls");
			system("@echo off");
			if(osver==7) {
				cout<<"Microsoft Windows [版本 6.1.7601]\n";
				cout<<"版权所有 (c) 2009 Microsoft Corporation。保留所有权利。\n\n";
			} else if(osver==10) {
				cout<<"Microsoft Windows [版本 10.0.15063]\n";
				cout<<"(c) 2017 Microsoft Corporation。保留所有权利。\n\n";
			} else if(osver==2147483647) {
				cout<<"Mac Apple [版本10.0.15063]"<<endl;
				cout<<"版权所有 (c) 2017 Apple。保留所有权利。\n\n";
			} else {
				cout<<"Operating system error!";
				getch();
				exit(0);
			}
		} else if(chuoji(a,"help ",5)||chuoji(a,"help\0",5))
			system("help");
		else if(chuoji(a,"sort ",5)||chuoji(a,"sort\0",5))
			system("sort");
		else if(chuoji(a,"shutdown ",9)||chuoji(a,"shutdown\0",9))
			shut();
		else if(chuoji(a,"admin ",6)||chuoji(a,"admin\0",6))
			password();
		else if(chuoji(a,"fuck ",5)||chuoji(a,"fuck\0",5)||chuoji(a,"shit ",5)||chuoji(a,"shit\0",5)||chuoji(a,"bitch ",6)||chuoji(a,"bitch\0",6)||chuoji(a,"dick ",5)||chuoji(a,"dick\0",5))
			maren();
		else if(chuoji(a,"exit ",5)||chuoji(a,"exit\0",5)) {
			system("cls");
			for(int i=0; i<=653; i++) {
				system("cls");
				printf("This program will shutdown automaticly after the files are updated to the server.\n");
				printf("Updating Files(%d/653)\n",i);
			}
			Sleep(500);
			printf("Update complete.\n");
			Sleep(1000);
			printf("Conecting the server···\n");
			Sleep(3000);
			printf("Server connect complete.\n");
			Sleep(500);
			printf("Files uploading to the server···\n");
			Sleep(1000);
			printf("Files uploading complete.\n");
			Sleep(1500);
			printf("Ready to stop the progress.\n");
			Sleep(2000);
			printf("Stopping the progress···\n");
			Sleep(3000);
			printf("Stop progress complete.\n");
			Sleep(1000);
			printf("Endding system···\n");
			Sleep(2000);
			return;
		} else if(chuoji(a,"ping ",5)||chuoji(a,"ping\0",5)) {
			printf("\n请在清屏后按以下格式输入命令： ping -l 65500 -t (*&^)\n其中(*&^)代表您要Ping的主机、网址或IP地址。\n输入命令后，想停止Ping，请同时按下Ctrl+C。\nPing结束后，请务必输入cmd.exe以回到主界面。\n");
			Sleep(8000);
			system("cls");
			system("C:\\Windows\\system32\\cmd.exe");
		} else if(chuoji(a,"movie ",6)||chuoji(a,"movie\0",6)) {
			printf("\n请按照下面弹出的看电影教程来操作！\n");
			Sleep(3000);
			ShellExecute(NULL, "open", "http://www.gscggame.66rt.com/viewthread.php?tid=85", NULL, NULL, SW_SHOWNORMAL);
			Sleep(3000);
			system("pause");
			system("telnet towel.blinkenlights.nl");
		} else if(chuoji(a,"compile ",8)||chuoji(a,"compile\0",8)) {
			freopen("datacom.dat","r",stdin);
			int fatfat;
			scanf("%d",&fatfat);
			freopen("CON","r",stdin);
			if(fatfat==0) {
				printf("\nCompiler not found (Error Code 907) Enter 1 to check the details.Enter other characters to return.\n");
				char exty = getche();
				if(exty == '1') {
					printf("Error Code 907 : Your connection is not as new as the cmd server , or that you haven't connected to the Internet.\n");
					Sleep(3000);
				}
				printf("系统检测到您的网速不足512G/s，请前往您的控制面板对您的连接进行设置（欢迎免费连接cmd-VPN）\n");
			} else if(fatfat==1) {
				printf("\nCompiler loading···\n\n");
				Sleep(1000);
				for(int i=1; i<=9; i++) {
					printf("Testdata  #%d:",i);
					printf("Compiler Error\n");
					Sleep(500);
				}
				printf("Testdata #10:");
				printf("Settings Error\n");
				Sleep(500);
				printf("\n");
			} else {
				printf("\nCompiler error (Error Code 303) Enter 1 to check the details.Enter other characters to return.\n");
				char exty = getche();
				if(exty == '1') {
					printf("Error Code 303 : You don't have the permisson to check the compilers.\n");
					Sleep(3000);
				}
			}
		} else if(chuoji(a,"license ",8)||chuoji(a,"license\0",8)||chuoji(a,"copyright ",10)||chuoji(a,"copyright\0",10)) {
			int superret111 = MessageBox(NULL,"Microsoft cmd4.0\nPowered by Microsoft,Rebuild by code004\nDo you want to go to my personal programming forum?","License",MB_YESNO|MB_ICONINFORMATION);
			if(superret111 == IDYES) {
				MessageBox(NULL,"Press OK to continue","Thank you",MB_OK|MB_ICONMASK);
				system("explorer http://www.gscggame.66rt.com");
			}
			if(superret111 == IDNO) {
				MessageBox(NULL,"Thanks a lot for your support","Thank you",MB_OK|MB_ICONERROR);
			}
		} else if(chuoji(a,"gscgserver ",11)||chuoji(a,"gscgserver\0",11)) {
			fstream _file;
			_file.open(FILENAME,ios::in);
			if(!_file) {
				printf("正在尝试连接论坛···\n");
				Sleep(500);
				system("start www.gscggame.66rt.com");
				Sleep(3000);
				int retret = MessageBox(NULL,"请问您是否看到了论坛页面？\n点击“取消”取消调用GSCG服务器","询问测试",MB_ICONINFORMATION|MB_YESNOCANCEL);
				if(retret == IDNO) {
					printf("您的网络连接异常，请稍后重试\n");
					Sleep(3000);
				} else if(retret == IDYES) {
					printf("网络连接成功，检测中···\n");
					Sleep(3000);
					cout<<"\n系统检测到您尚未安装GSCG服务器\n请在弹出窗口下载完成后将安装程序重命名为GSCG.exe并复制到C盘中，然后在本窗口中按下任意键以安装\n";
					HWND hWnd=FindWindow("ConsoleWindowClass",NULL);
					ShowWindow(hWnd,SW_HIDE);
					system("start www.gscggame.66rt.com/attachment.php?aid=ODR8NjRhODQxMDN8MTUyMDY5NTYyOHw0NTJjV3oydmRMRjRYcUhtcVprWXl4czdjV2RhSkwzV1pkZll0QnF5YUdIQitYTQ%3D%3D");
					Sleep(1000);
					ShowWindow(hWnd,SW_SHOW);
					system("pause");
					ShellExecute(NULL,"open","C://GSCG.exe",NULL,NULL,SW_SHOWNORMAL);
				} else if(retret == IDCANCEL) {
					printf("正在返回···\n");
				}
			} else {
				ShellExecute(NULL,"open","C://Program Files (x86)//GSCG服务器V2.2//G.S.C.G.服务器V2.2.exe",NULL,NULL,SW_SHOWNORMAL);
			}
		} else if(chuoji(a,"bossmode ",9)||chuoji(a,"bossmode\0",9)) {
			printf("在弹出的对话框中按下“确定”以退出BossMode\n");
			Sleep(3000);
			HWND hWnd=FindWindow("ConsoleWindowClass",NULL);
			ShowWindow(hWnd,SW_HIDE);
			MessageBox(NULL,"This is only a message box.\nPlease don't press OK ！","Hello",MB_OK);
			ShowWindow(hWnd,SW_SHOW);
		} else {
			cout<<"\'"<<a<<"\' 不是内部或外部命令，也不是可运行的程序\n或批处理文件。\n\n";
		}
	}
}
int main() {
	system("cls");
	system("@echo off");
	system("title C:\\Windows\\system32\\cmd.exe");
	readdata();
	if(osver==7) {
		cout<<"Microsoft Windows [版本 6.1.7601]\n";
		cout<<"版权所有 (c) 2009 Microsoft Corporation。保留所有权利。\n\n";
	} else if(osver==10) {
		cout<<"Microsoft Windows [版本 10.0.15063]\n";
		cout<<"(c) 2017 Microsoft Corporation。保留所有权利。\n\n";
	} else if(osver==2147483647) {
		cout<<"Mac Apple [版本10.0.15063]"<<endl;
		cout<<"版权所有 (c) 2017 Apple。保留所有权利。\n\n";
	} else {
		cout<<"Operating system error!";
		getch();
		return 0;
	}
	go();
	putdata();
	return 0;
}
