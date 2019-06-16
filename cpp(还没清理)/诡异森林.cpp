#include<bits/stdc++.h> //question+Pangbai Sleep（10）
#include<windows.h>//  start+end Sleep(80)      
using namespace std;      
char start1[10000]="欢迎来到>逃出诡异森林<小游戏 我还是那个蒋土豆儿~",start2[10000]="开始吧 不墨迹了",end1[10000]="",end2[10000]=""; 
char question1[10000]="你走在森林里的小路上 看见了一头熊 你准备: 1.与它搏斗  2.赶紧跑"; char Pangbai1[100000]="你是个勇士 但是你被它吓得肾衰竭而死";
char question2[10000]="往哪边跑: 1.东  2.南  3.西  4.北"; char Pangbai2[100000]="你又遇见了一头熊 吓得喷出来的屎飞到了嘴巴里 被恶心死了";
char question3[10000]="你跑着跑着 遇见了一个商人 你准备买什么 1.诺基亚  2.戴柳逸"; char Pangbai3[100000]="你碰见了香蕉君 他跳了支魔性的舞蹈 把你笑死了";
char question4[10000]="你的运气很好 你看见了一架救援直升机 你准备: 1.向它招手  2.对着它扔一块石头"; char Pangbai4[100000]="你在飘向南方的途中遇见了飞天土豆 它飞进了你的嘴巴里把你噎死了";
char question5[10000]="你是要买哪种: 1.板砖型  2.智能型"; char Pangbai5[100000]="你遇见了万恶的谭梭梭 他对你吼了一声'弟弟行为!' 你被吓死了";
char question6[10000]="你现在拥有了一个女仆 你们走着走着 看见了一个悬崖 你准备: 1.飘向北方  2.跳下去 3.飘向南方"; char Pangbai6[100000]="你的戴女仆被鲨鱼吓得肾炸了 把你拉下了水 你淹死了 ";
char question7[10000]="你遇见了一只强悍的戴柳鲨 你准备 1.自后断其股  2.暴起 亦毙之"; char Pangbai7[100000]="你没想到这只变异的戴柳鲨有10个肾 是仅此于曹与周的铁肾王 然后它放了个屁 把你们冲到天上去 你们大脑缺氧而死";
char question8[10000]="你和戴女仆成功溜到了戴柳鲨后面 你准备: 1.让你的女仆捅它的屁屁 使它肾虚  2.从后面骑到它背上 使它变得淫慢险躁"; char Pangbai8[100000]="";
char question9[10000]=""; char Pangbai9[100000]="";
char question10[10000]=""; char Pangbai10[100000]="";
int number;
int main()
{
	system("color 5A");
	cout<<"Loading☆★☆★☆★☆";
	Sleep(600);
	system("cls");
	for(int i=0;i<=10;i++)
	{
	cout<<"Loading☆★☆★☆★☆";
	Beep(500,100);
	Sleep(10);
	system("cls");
	cout<<"Loading★☆★☆★☆★";
	Beep(500,100);
	Sleep(10);
	system("cls");
	cout<<"Loading☆★☆★☆★☆";
	Beep(500,100);
	Sleep(10);
	system("cls");
	cout<<"Loading★☆★☆★☆★";
	Beep(500,100);
	Sleep(10);
	system("cls");
	cout<<"Loading☆★☆★☆★☆";
	Beep(500,100);
	Sleep(10);
	system("cls");
	cout<<"Loading★☆★☆★☆★";
	Beep(500,100);
	Sleep(10);
	system("cls");
	cout<<"Loading☆★☆★☆★☆";
	Beep(500,100);
	Sleep(10);
	system("cls");
	}
	Sleep(800);
	system("cls");
	for(int i=0;i<=strlen(start1);i++)
		{
			cout<<start1[i];
			Beep(1000,10);
			Sleep(80);
		}
		cout<<endl;
		Sleep(1000); 
	for(int i=0;i<=strlen(start2);i++)
		{
			cout<<start2[i];
			Sleep(80);
		}
		cout<<endl;
		Sleep(1000);             
	for(int i=0;i<=strlen(question1);i++)
		{
			cout<<question1[i];
			Sleep(10);
		}                           
		cout<<endl;
		cin>>number;
		switch(number)
		{
			case 1: for(int i=0;i<=strlen(Pangbai1);i++)                                //Pangbai1 你又遇见了一头熊 吓得喷出来的屎飞到了嘴巴里 被恶心死了
						{
							cout<<Pangbai1[i];
							Sleep(10);
						}			
					break;
			case 2: number=0;                                                           //question2 往哪边跑: 1.东  2.南  3.西  4.北
					for(int i=0;i<=strlen(question2);i++)
						{
							cout<<question2[i];
							Sleep(10);
						}
					cout<<endl;
					cin>>number;
					switch(number)
					{
						case 1: for(int i=0;i<=strlen(Pangbai2);i++)                    //Pangbai2 你又遇见了一头熊 吓得喷出来的屎飞到了嘴巴里 被恶心死了
									{
										cout<<Pangbai2[i];
										Sleep(10);
									}
								break;
						case 2: number=0;
								for(int i=0;i<=strlen(question3);i++)                   //question3 你跑着跑着 遇见了一个商人 你准备买什么 1.诺基亚  2.戴柳逸
									{
										cout<<question3[i];
										Sleep(10);
									}
									cout<<endl;
									cin>>number;
									switch(number)
									{
										case 1: number=0;                               //question5 你是要买哪种: 1.板砖型  2.智能型
												cout<<endl;
												for(int i=0;i<=strlen(question5);i++)
													{
														cout<<question5[i];
														Sleep(10);
													}
												cin>>number;
												switch(number)
												{
													case 1: return 0;
													case 2: return 0;
												}//写到这 
										case 2: number=0;                               //question6 你现在拥有了一个女仆 你们走着走着 看见了一个悬崖 你准备: 1.飘向北方  2.跳下去 3.飘向南方
							    				for(int i=0;i<=strlen(question6);i++)
													{
														cout<<question6[i];
														Sleep(10);
													}
												cout<<endl;
												cin>>number;
												switch(number)
												{
													case 1: for(int i=0;i<=strlen(Pangbai5);i++) //Pangbai5 你遇见了万恶的谭梭梭 他对你吼了一声'弟弟行为!' 你被吓死了
																{
																	cout<<Pangbai5[i];
																	Sleep(10);
																}
															break;
													case 2: number=0;
															for(int i=0;i<=strlen(question7);i++)//question7 你遇见了一只强悍的戴柳鲨 你准备 1.自后断其股  2.暴起 亦毙之
																{
																	cout<<question7[i];
																	Sleep(10);
																}
																cout<<endl;
																cin>>number;
																switch(number)
																{
																	case 1: number=0;                 //question8 你和戴女仆成功溜到了戴柳鲨后面 你准备: 1.让你的女仆捅它的屁屁 使它肾虚  2.从后面骑到它背上 使它变得淫慢险躁 
																			for(int i=0;i<=strlen(question8);i++)
																				{
																					cout<<question8[i];
																					Sleep(10);																				
																				}
																			cout<<endl;
																			cin>>number;
																			switch(number)
																			{
																				case 1: for(int i=0;i<=strlen(Pangbai7);i++)//Pangbai7 你没想到这只变异的戴柳鲨有10个肾 是仅此于曹与周的铁肾王 然后它放了个屁 把你们冲到天上去 你们大脑缺氧而死  
																							{
																								cout<<Pangbai7[i];
																								Sleep(10);
																							}
																						break;
																			}
																	case 2: for(int i=0;i<=strlen(Pangbai6);i++)//Pangbai6 你的戴女仆被鲨鱼吓得肾炸了 把你拉下了水 你淹死了 
																				{
																					cout<<Pangbai6[i];
																					Sleep(10);
																				}
																			break;
																}//写到这 
													case 3: for(int i=0;i<=strlen(Pangbai4);i++)
																{
																	cout<<Pangbai4[i];
																	Sleep(10);
																}
															return 0;
												}
									}
						case 3: for(int i=0;i<=strlen(Pangbai3);i++)                    //Pangbai3 你碰见了香蕉君 他跳了支魔性的舞蹈 把你笑死了
									{
										cout<<Pangbai3[i];
										Sleep(10);
									}
								break;
						case 4: number=0; 
								for(int i=0;i<=strlen(question4);i++)                   //question4 你的运气很好 你看见了一架救援直升机 你准备: 1.向它招手  2.对着它扔一块石头
									{
										cout<<question4[i];
										Sleep(10);
									}
									cout<<endl;
									cin>>number;
									return 0;//写到这 
					}
		}
	return 0;
}
