#include<bits/stdc++.h> //question+Pangbai Sleep��10��
#include<windows.h>//  start+end Sleep(80)      
using namespace std;      
char start1[10000]="��ӭ����>�ӳ�����ɭ��<С��Ϸ �һ����Ǹ���������~",start2[10000]="��ʼ�� ��ī����",end1[10000]="",end2[10000]=""; 
char question1[10000]="������ɭ�����С·�� ������һͷ�� ��׼��: 1.��������  2.�Ͻ���"; char Pangbai1[100000]="���Ǹ���ʿ �����㱻���ŵ���˥�߶���";
char question2[10000]="���ı���: 1.��  2.��  3.��  4.��"; char Pangbai2[100000]="����������һͷ�� �ŵ��������ʺ�ɵ�������� ����������";
char question3[10000]="���������� ������һ������ ��׼����ʲô 1.ŵ����  2.������"; char Pangbai3[100000]="���������㽶�� ������֧ħ�Ե��赸 ����Ц����";
char question4[10000]="��������ܺ� �㿴����һ�ܾ�Ԯֱ���� ��׼��: 1.��������  2.��������һ��ʯͷ"; char Pangbai4[100000]="����Ʈ���Ϸ���;�������˷������� ���ɽ��������������ҭ����";
char question5[10000]="����Ҫ������: 1.��ש��  2.������"; char Pangbai5[100000]="������������̷���� ���������һ��'�ܵ���Ϊ!' �㱻������";
char question6[10000]="������ӵ����һ��Ů�� ������������ ������һ������ ��׼��: 1.Ʈ�򱱷�  2.����ȥ 3.Ʈ���Ϸ�"; char Pangbai6[100000]="��Ĵ�Ů�ͱ������ŵ���ը�� ����������ˮ �������� ";
char question7[10000]="��������һֻǿ���Ĵ����� ��׼�� 1.�Ժ�����  2.���� ���֮"; char Pangbai7[100000]="��û�뵽��ֻ����Ĵ�������10���� �ǽ����ڲ����ܵ������� Ȼ�������˸�ƨ �����ǳ嵽����ȥ ���Ǵ���ȱ������";
char question8[10000]="��ʹ�Ů�ͳɹ��ﵽ�˴�������� ��׼��: 1.�����Ů��ͱ����ƨƨ ʹ������  2.�Ӻ����ﵽ������ ʹ�������������"; char Pangbai8[100000]="";
char question9[10000]=""; char Pangbai9[100000]="";
char question10[10000]=""; char Pangbai10[100000]="";
int number;
int main()
{
	system("color 5A");
	cout<<"Loading��������";
	Sleep(600);
	system("cls");
	for(int i=0;i<=10;i++)
	{
	cout<<"Loading��������";
	Beep(500,100);
	Sleep(10);
	system("cls");
	cout<<"Loading��������";
	Beep(500,100);
	Sleep(10);
	system("cls");
	cout<<"Loading��������";
	Beep(500,100);
	Sleep(10);
	system("cls");
	cout<<"Loading��������";
	Beep(500,100);
	Sleep(10);
	system("cls");
	cout<<"Loading��������";
	Beep(500,100);
	Sleep(10);
	system("cls");
	cout<<"Loading��������";
	Beep(500,100);
	Sleep(10);
	system("cls");
	cout<<"Loading��������";
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
			case 1: for(int i=0;i<=strlen(Pangbai1);i++)                                //Pangbai1 ����������һͷ�� �ŵ��������ʺ�ɵ�������� ����������
						{
							cout<<Pangbai1[i];
							Sleep(10);
						}			
					break;
			case 2: number=0;                                                           //question2 ���ı���: 1.��  2.��  3.��  4.��
					for(int i=0;i<=strlen(question2);i++)
						{
							cout<<question2[i];
							Sleep(10);
						}
					cout<<endl;
					cin>>number;
					switch(number)
					{
						case 1: for(int i=0;i<=strlen(Pangbai2);i++)                    //Pangbai2 ����������һͷ�� �ŵ��������ʺ�ɵ�������� ����������
									{
										cout<<Pangbai2[i];
										Sleep(10);
									}
								break;
						case 2: number=0;
								for(int i=0;i<=strlen(question3);i++)                   //question3 ���������� ������һ������ ��׼����ʲô 1.ŵ����  2.������
									{
										cout<<question3[i];
										Sleep(10);
									}
									cout<<endl;
									cin>>number;
									switch(number)
									{
										case 1: number=0;                               //question5 ����Ҫ������: 1.��ש��  2.������
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
												}//д���� 
										case 2: number=0;                               //question6 ������ӵ����һ��Ů�� ������������ ������һ������ ��׼��: 1.Ʈ�򱱷�  2.����ȥ 3.Ʈ���Ϸ�
							    				for(int i=0;i<=strlen(question6);i++)
													{
														cout<<question6[i];
														Sleep(10);
													}
												cout<<endl;
												cin>>number;
												switch(number)
												{
													case 1: for(int i=0;i<=strlen(Pangbai5);i++) //Pangbai5 ������������̷���� ���������һ��'�ܵ���Ϊ!' �㱻������
																{
																	cout<<Pangbai5[i];
																	Sleep(10);
																}
															break;
													case 2: number=0;
															for(int i=0;i<=strlen(question7);i++)//question7 ��������һֻǿ���Ĵ����� ��׼�� 1.�Ժ�����  2.���� ���֮
																{
																	cout<<question7[i];
																	Sleep(10);
																}
																cout<<endl;
																cin>>number;
																switch(number)
																{
																	case 1: number=0;                 //question8 ��ʹ�Ů�ͳɹ��ﵽ�˴�������� ��׼��: 1.�����Ů��ͱ����ƨƨ ʹ������  2.�Ӻ����ﵽ������ ʹ������������� 
																			for(int i=0;i<=strlen(question8);i++)
																				{
																					cout<<question8[i];
																					Sleep(10);																				
																				}
																			cout<<endl;
																			cin>>number;
																			switch(number)
																			{
																				case 1: for(int i=0;i<=strlen(Pangbai7);i++)//Pangbai7 ��û�뵽��ֻ����Ĵ�������10���� �ǽ����ڲ����ܵ������� Ȼ�������˸�ƨ �����ǳ嵽����ȥ ���Ǵ���ȱ������  
																							{
																								cout<<Pangbai7[i];
																								Sleep(10);
																							}
																						break;
																			}
																	case 2: for(int i=0;i<=strlen(Pangbai6);i++)//Pangbai6 ��Ĵ�Ů�ͱ������ŵ���ը�� ����������ˮ �������� 
																				{
																					cout<<Pangbai6[i];
																					Sleep(10);
																				}
																			break;
																}//д���� 
													case 3: for(int i=0;i<=strlen(Pangbai4);i++)
																{
																	cout<<Pangbai4[i];
																	Sleep(10);
																}
															return 0;
												}
									}
						case 3: for(int i=0;i<=strlen(Pangbai3);i++)                    //Pangbai3 ���������㽶�� ������֧ħ�Ե��赸 ����Ц����
									{
										cout<<Pangbai3[i];
										Sleep(10);
									}
								break;
						case 4: number=0; 
								for(int i=0;i<=strlen(question4);i++)                   //question4 ��������ܺ� �㿴����һ�ܾ�Ԯֱ���� ��׼��: 1.��������  2.��������һ��ʯͷ
									{
										cout<<question4[i];
										Sleep(10);
									}
									cout<<endl;
									cin>>number;
									return 0;//д���� 
					}
		}
	return 0;
}
