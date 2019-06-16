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
                                                     cout<<"反电子教室系统"<<endl;
    cout<<endl;
    cout<<"                                            目前可以反击:"<<endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED);
    cout<<"                                红蜘蛛多媒体网络教室 - 输入 k-rs即可反击"<<endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
    cout<<"                                        极域电子教室 - 输入 k-jy即可反击"<<endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    cout<<"                                    伽卡他卡电子教室 - 输入 k-yk即可反击"<<endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    cout<<"                                            如果在开启本程序后关闭本程序，"<<endl;
    cout<<"                                                  本次反击将无效！"<<endl;
    cout<<"    input >>> ";
    string s;
    cin>>s;
    if(s=="k-rs")
    {
        system("cls");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED);
        cout<<"                                            红蜘蛛反击系统启动成功"<<endl;
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
        cout<<"                                            极域反击系统启动成功"<<endl;
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
        cout<<"                                            伽卡他卡反击系统启动成功"<<endl;
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
