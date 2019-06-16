#include<iostream>
#include<cstring>
#define _NAME_MAX 256
#define _STRING_MAX 64
using namespace std;
struct gk
{
	int taste;
	int casetaste[64];
	int caseshow[64][_STRING_MAX];
	int caseto[64];
	char show[_STRING_MAX];
}map[100];
void jb_begin()
{
	char fname[_NAME_MAX],flname[_NAME_MAX]=".jb";
	cin>>fname;
	freopen(strcat(fname,flname),"r",stdin);
}
void jb_read()
{
	int gkn,ta;
	cin>>gkn;
	for(int i=0;i<gkn;++i)
	{
		int gkat;
		char ca,cb,cc;
		cin>>gkat;
		map[gkat].taste=1;
		ta=1;
		while(ta)
		{
			cin>>ca>>cb>>cc;
			if(ca=='n'&&cb=='e'&&cc=='w')
			{
				ta=0;
			}
			else if(ca=='o'&&cb=='u'&&cc=='t')
			{
				cin>>map[gkat].show;
			}
			else if(ca=='c'&&cb=='a'&&cc=='s')
			{
				char key;
				cin>>key;
				cin>>map[gkat].caseshow[(int)key]>>map[gkat].caseto[(int)key];
				map[gkat].casetaste[(int)key]=1;
			}
			else if(ca=='n'&&cb=='e'&&cc=='w')
			{
				map[gkat].taste=0;
				ta=0;
			}
		}
	}
}
int at;
int jb_play(int at)
{
	
}
int main()
{
	jb_begin();
	jb_read();
	do
	{
		
	}while()
}
