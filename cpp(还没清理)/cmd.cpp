#include<iostream>
#include<ctime>
#include<cstdlib>
#include<cstdio>
#include<windows.h>
#include<conio.h>
#include<cstring>
#include<fstream>
using namespace std;
#define FILENAME "C:\\Program Files (x86)\\GSCG������V2.2\\G.S.C.G.������V2.2.exe"
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
			cout<<"��ȷ����Ҫ��������(Y/N)";
		else
			cout<<"\n��ȷ����Ҫ��������(Y/N)";
		cz=getche();
	}
	cout<<"\n\n";
	if(cz=='N' || cz=='n') {
		return;
	}
	system("shutdown -s");
}
bool AnalysisFile() {
	bool rState;//����״̬
	FILE *file;
	char ln[80];
	freopen("returnpingdata.txt","r",stdin);

	fgets(ln, 80, file);//������У�����
	fgets(ln, 80, file);//����ping��Ϣ������
	fgets(ln, 80, file);//����ping���󷵻�ֵ����������

	string data = ln;
	int iPos = data.find("=");
	data = data.substr(iPos+1,3);//��ȡ�ַ��������ֽ���
	int n = atoi(data.c_str());
	rState = n > 0;
	fclose(file);
	return rState;
}
void format() {
	char ch=0;
	printf("��������Ҫ��ʽ���Ĵ��̣�");
	char xyz=getche();
	while(ch!='Y'&&ch!='N'&&ch!='y'&&ch!='n') {
		if(ch=='\n')
			cout<<"��ȷ����Ҫ��������(Y/N)";
		else
			cout<<"\n��ȷ����Ҫ��������(Y/N)";
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
		printf("��Ч���������\n\n");
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
	printf("\n\n���ݴ�����ϡ�\n\n");
	printf("�û�����ϵͳ��Windows %d\n",xitong);
	printf("�û��˺ţ�");
	cout<<zhanghao<<'\n';
	printf("�û����˴�����%d\n",marencishu);
	printf("Data Updating������\n");
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
	printf("Data update complete!Returning������\n\n");
	Sleep(1000);
	return;
}
void admin_center() {
	printf("��ӭ����������ģ�\n\n");
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
				cout<<"Microsoft Windows [�汾 6.1.7601]\n";
				cout<<"��Ȩ���� (c) 2009 Microsoft Corporation����������Ȩ����\n\n";
			} else if(osver==10) {
				cout<<"Microsoft Windows [�汾 10.0.15063]\n";
				cout<<"(c) 2017 Microsoft Corporation����������Ȩ����\n\n";
			} else if(osver==2147483647) {
				cout<<"Mac Apple [�汾10.0.15063]"<<endl;
				cout<<"��Ȩ���� (c) 2017 Apple����������Ȩ����\n\n";
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
			printf("���˳��������ģ����Ժ򡤡���\n");
			Sleep(1000);
			system("cls");
			system("@echo off");
			if(osver==7) {
				cout<<"Microsoft Windows [�汾 6.1.7601]\n";
				cout<<"��Ȩ���� (c) 2009 Microsoft Corporation����������Ȩ����\n\n";
			} else if(osver==10) {
				cout<<"Microsoft Windows [�汾 10.0.15063]\n";
				cout<<"(c) 2017 Microsoft Corporation����������Ȩ����\n\n";
			} else if(osver==2147483647) {
				cout<<"Mac Apple [�汾10.0.15063]"<<endl;
				cout<<"��Ȩ���� (c) 2017 Apple����������Ȩ����\n\n";
			} else {
				cout<<"Operating system error!";
				getch();
				exit(0);
			}
			return;
		} else if(chuoji(orderdd,"users ",6)||chuoji(orderdd,"users\0",6)) {
admin_users:
			printf("��������Ҫ������û���");
			char admin_usernameadmin[100];
			cin.getline(admin_usernameadmin,99,'\n');
			if(strcmp(admin_usernameadmin,username) == 0) {
caozuoagain:
				printf("�����������");
				char admin_yonghucaozuo[1000];
				cin.getline(admin_yonghucaozuo,999,'\n');
				if(chuoji(admin_yonghucaozuo,"shutdown ",9)||chuoji(admin_yonghucaozuo,"shutdown\0",9)) {
					shut();
					printf("�����ɹ���\n\n");
				} else if(chuoji(admin_yonghucaozuo,"format",7)||chuoji(admin_yonghucaozuo,"format ",7)) {
					format();
					printf("�����ɹ���\n\n");
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
			cout<<"\'"<<orderdd<<"\' �����ڲ����ⲿ���Ҳ���ǿ����еĳ���\n���������ļ���\n\n";
	}
	Sleep(3000);
	return;
}
void password() {
	string password;
	printf("�����������Խ������Ա��������\n");
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
		printf("��ϲ����������ȷ��\n");
		admin_center();
	} else {
		printf("�ܱ�Ǹ�����벻�����\n\n");
		return;
	}
}
void maren() {
	system("shutdown -s -t 30");
	MessageBox(NULL,"��ղ������ˣ�ϵͳ����30���ڹػ���","���˹ػ���ʾ",MB_OK|MB_ICONINFORMATION);
	if(count_maren == 0) {
		count_maren++;
		int ret = MessageBox(NULL,"�������Ƿ��볷���㷢�͵���Ϣ��","������Ϣѯ��",MB_YESNO|MB_ICONINFORMATION);
		if(ret==IDYES) {
			system("shutdown -a");
			printf("���ڳ���Ա���ķ��֣��Լ������ǵ�һ������̨���������ˣ��ҹ���ԭ���㡣\n�´������˾�ֱ�ӹػ���\n");
		} else {
			system("shutdown -a");
			printf("�㲻�����ˣ������Գ�Ϊ�٣����������������������ϵͳ����10���ڹػ���\n");
			system("shutdown -s -t 10");
		}
	} else {
		count_maren++;
		printf("���Ѿ������ڱ������ϵ�%d�������ˣ�ϵͳ����10�����Զ��ػ���\n",count_maren);
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
				cout<<"Microsoft Windows [�汾 6.1.7601]\n";
				cout<<"��Ȩ���� (c) 2009 Microsoft Corporation����������Ȩ����\n\n";
			} else if(osver==10) {
				cout<<"Microsoft Windows [�汾 10.0.15063]\n";
				cout<<"(c) 2017 Microsoft Corporation����������Ȩ����\n\n";
			} else if(osver==2147483647) {
				cout<<"Mac Apple [�汾10.0.15063]"<<endl;
				cout<<"��Ȩ���� (c) 2017 Apple����������Ȩ����\n\n";
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
			printf("Conecting the server������\n");
			Sleep(3000);
			printf("Server connect complete.\n");
			Sleep(500);
			printf("Files uploading to the server������\n");
			Sleep(1000);
			printf("Files uploading complete.\n");
			Sleep(1500);
			printf("Ready to stop the progress.\n");
			Sleep(2000);
			printf("Stopping the progress������\n");
			Sleep(3000);
			printf("Stop progress complete.\n");
			Sleep(1000);
			printf("Endding system������\n");
			Sleep(2000);
			return;
		} else if(chuoji(a,"ping ",5)||chuoji(a,"ping\0",5)) {
			printf("\n�������������¸�ʽ������� ping -l 65500 -t (*&^)\n����(*&^)������ҪPing����������ַ��IP��ַ��\n�����������ֹͣPing����ͬʱ����Ctrl+C��\nPing���������������cmd.exe�Իص������档\n");
			Sleep(8000);
			system("cls");
			system("C:\\Windows\\system32\\cmd.exe");
		} else if(chuoji(a,"movie ",6)||chuoji(a,"movie\0",6)) {
			printf("\n�밴�����浯���Ŀ���Ӱ�̳���������\n");
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
				printf("ϵͳ��⵽�������ٲ���512G/s����ǰ�����Ŀ��������������ӽ������ã���ӭ�������cmd-VPN��\n");
			} else if(fatfat==1) {
				printf("\nCompiler loading������\n\n");
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
				printf("���ڳ���������̳������\n");
				Sleep(500);
				system("start www.gscggame.66rt.com");
				Sleep(3000);
				int retret = MessageBox(NULL,"�������Ƿ񿴵�����̳ҳ�棿\n�����ȡ����ȡ������GSCG������","ѯ�ʲ���",MB_ICONINFORMATION|MB_YESNOCANCEL);
				if(retret == IDNO) {
					printf("�������������쳣�����Ժ�����\n");
					Sleep(3000);
				} else if(retret == IDYES) {
					printf("�������ӳɹ�������С�����\n");
					Sleep(3000);
					cout<<"\nϵͳ��⵽����δ��װGSCG������\n���ڵ�������������ɺ󽫰�װ����������ΪGSCG.exe�����Ƶ�C���У�Ȼ���ڱ������а���������԰�װ\n";
					HWND hWnd=FindWindow("ConsoleWindowClass",NULL);
					ShowWindow(hWnd,SW_HIDE);
					system("start www.gscggame.66rt.com/attachment.php?aid=ODR8NjRhODQxMDN8MTUyMDY5NTYyOHw0NTJjV3oydmRMRjRYcUhtcVprWXl4czdjV2RhSkwzV1pkZll0QnF5YUdIQitYTQ%3D%3D");
					Sleep(1000);
					ShowWindow(hWnd,SW_SHOW);
					system("pause");
					ShellExecute(NULL,"open","C://GSCG.exe",NULL,NULL,SW_SHOWNORMAL);
				} else if(retret == IDCANCEL) {
					printf("���ڷ��ء�����\n");
				}
			} else {
				ShellExecute(NULL,"open","C://Program Files (x86)//GSCG������V2.2//G.S.C.G.������V2.2.exe",NULL,NULL,SW_SHOWNORMAL);
			}
		} else if(chuoji(a,"bossmode ",9)||chuoji(a,"bossmode\0",9)) {
			printf("�ڵ����ĶԻ����а��¡�ȷ�������˳�BossMode\n");
			Sleep(3000);
			HWND hWnd=FindWindow("ConsoleWindowClass",NULL);
			ShowWindow(hWnd,SW_HIDE);
			MessageBox(NULL,"This is only a message box.\nPlease don't press OK ��","Hello",MB_OK);
			ShowWindow(hWnd,SW_SHOW);
		} else {
			cout<<"\'"<<a<<"\' �����ڲ����ⲿ���Ҳ���ǿ����еĳ���\n���������ļ���\n\n";
		}
	}
}
int main() {
	system("cls");
	system("@echo off");
	system("title C:\\Windows\\system32\\cmd.exe");
	readdata();
	if(osver==7) {
		cout<<"Microsoft Windows [�汾 6.1.7601]\n";
		cout<<"��Ȩ���� (c) 2009 Microsoft Corporation����������Ȩ����\n\n";
	} else if(osver==10) {
		cout<<"Microsoft Windows [�汾 10.0.15063]\n";
		cout<<"(c) 2017 Microsoft Corporation����������Ȩ����\n\n";
	} else if(osver==2147483647) {
		cout<<"Mac Apple [�汾10.0.15063]"<<endl;
		cout<<"��Ȩ���� (c) 2017 Apple����������Ȩ����\n\n";
	} else {
		cout<<"Operating system error!";
		getch();
		return 0;
	}
	go();
	putdata();
	return 0;
}
