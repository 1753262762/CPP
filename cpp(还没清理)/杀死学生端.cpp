#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
void movexy(short x, short y)
{
    COORD position={x, y};
    HANDLE hOut=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hOut, position);
}
int main()
{
    movexy(50, 10);
                                                     cout<<"�����ӽ���ϵͳ"<<endl;
    cout<<endl;
    cout<<"                                            Ŀǰ���Է���:"<<endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED);
    cout<<"                                ��֩���ý��������� - ���� k-rs���ɷ���"<<endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
    cout<<"                                        ������ӽ��� - ���� k-jy���ɷ���"<<endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    cout<<"                                    ٤���������ӽ��� - ���� k-yk���ɷ���"<<endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    cout<<"                                            ����ڿ����������رձ�����"<<endl;
    cout<<"                                                  ���η�������Ч��"<<endl;
    cout<<"    input >>> ";
    string s;
    cin>>s;
    if(s=="k-rs")
    {
        system("cls");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED);
        cout<<"                                            ��֩�뷴��ϵͳ�����ɹ�"<<endl;
        Sleep(1000);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        while(1)
        {
            system("taskkill /f /t /im REDAgent.exe");
            system("cls");
        }
    }
    if(s=="k-jy")
    {
        system("cls");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
        cout<<"                                            ���򷴻�ϵͳ�����ɹ�"<<endl;
        Sleep(1000);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        while(1)
        {
            system("taskkill /f /t /im StudentMain.exe");
            system("cls");
        }
    }
    if(s=="k-yk")
    {
        system("cls");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
        cout<<"                                            ٤����������ϵͳ�����ɹ�"<<endl;
        Sleep(1000);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        while(1)
        {
            system("taskkill /f /t /im Student.exe");
            system("cls");
        }
    } 
    return 0;
}
