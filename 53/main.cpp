#include <iostream>
#include "comp.h"
#include <windows.h>

using namespace std;


int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout<<"��� ������������ ��������� ��� ��������� ���������� �����������.\n��� ����������� ������� Enter!"<<endl;
    DWORD l;
    COORD point;
    point.X = 0; point.Y = 0;
    HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE);
    HANDLE hin = GetStdHandle(STD_INPUT_HANDLE);
    char title[] = "��������� ���������� ���� �����������";
    CharToOem(title, title);
    SetConsoleTitle(title);
    SetConsoleTextAttribute(hout, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    FillConsoleOutputAttribute(hout, 10, 1000, point, &l);
    char c;
    ReadFile(hin, &c, 1, &l, NULL);

    int el;
    int x1,x2,x3,x4,x5,x6,x7;
    int y1,y2,y3,y4,y5,y6,y7;

    string choice;

    comp A1;
    comp A2;

    int params1[7]={A1.GetDefault()};
    int params2[7]={A2.GetDefault()};

    cout<<"----------------��������� �� ���������-----------------"<<endl;
    cout<<endl;


    cout<<"-----�� ������ ������ ��������� ������� ����������?(y/n)--------"<<endl;
    cin>>choice;



    if (choice=="y"){

    A1.cpu_speed=x1;
    A1.num_cores=x2;
    A1.ram=x3;
    A1.fsb=x4;
    A1.gpu=x5;
    A1.vram=x6;
    A1.hdd=x7;

    cout<<"----------------------------------------------------------------"<<endl;
    cout<<"--------------������� ��������� ������� ����������--------------"<<endl;
    cout<<"----------------------------------------------------------------"<<endl;
    cout<<endl;
    cout<<"������� ������� ���� ����������, Mhz:"<<endl;
    cin>>x1;
    cout<<"������� ���������� ���� ����������, n:"<<endl;
    cin>>x2;
    cout<<"������� ����� ����������� ������, Gb"<<endl;
    cin>>x3;
    cout<<"������� ������� ����, Mhz:"<<endl;
    cin>>x4;
    cout<<"������� ������� ���� ������������ ����������, Mhz:"<<endl;
    cin>>x5;
    cout<<"������� ����� ����������� ������, Mb:"<<endl;
    cin>>x6;
    cout<<"������� ����� ����������, Gb:"<<endl;
    cin>>x7;

    params1[0]=x1;
    params1[1]=x2;
    params1[2]=x3;
    params1[3]=x4;
    params1[4]=x5;
    params1[5]=x6;
    params1[6]=x7;


    cout<<"--------------��������� ���������� A1--------------"<<endl;
    cout<<endl;

    A1.SetARR(x1,x2,x3,x4,x5,x6,x7);

    A1.GetARR(params1);

    A1.message();

    cin >> choice;

    if (choice=="y")

        {

    cout<<"����� �� ���������� �� ������ �� ��������?"<<endl;
    cin >> el;

    cout<<"������� ����� ��������:"<<endl;
    cin >> params1[el-1];

        }

// ������ ��������

    cout<<"----------------------------------------------------------------"<<endl;
    cout<<"--------------����� ��������� ���������� A1---------------------"<<endl;
    cout<<"----------------------------------------------------------------"<<endl;
    cout<<endl;

    A1.GetARR(params1);


    cout<<endl;

    }

    else if (choice=="n")
    {
    cout<<"----------------------------------------------------------------"<<endl;
    cout<<"----------��������� ������� ���������� �� ���������-------------"<<endl;
    cout<<"----------------------------------------------------------------"<<endl;
    A1.GetDefault();
    }

    else { A1.error();}

    cout<<"-----�� ������ ������ ��������� ������� ����������?(y/n)----- --"<<endl;
    cin>>choice;


    if (choice=="y"){


    A2.cpu_speed=y1;
    A2.num_cores=y2;
    A2.ram=y3;
    A2.fsb=y4;
    A2.gpu=y5;
    A2.vram=y6;
    A2.hdd=y7;


    cout<<"----------------------------------------------------------------"<<endl;
    cout<<"--------------������� ��������� ������� ����������--------------"<<endl;
    cout<<"----------------------------------------------------------------"<<endl;
    cout<<endl;
    cout<<"������� ������� ���� ����������, Mhz:"<<endl;
    cin>>y1;
    cout<<"������� ���������� ���� ����������, n:"<<endl;
    cin>>y2;
    cout<<"������� ����� ����������� ������, Gb"<<endl;
    cin>>y3;
    cout<<"������� ������� ����, Mhz:"<<endl;
    cin>>y4;
    cout<<"������� ������� ���� ������������ ����������, Mhz:"<<endl;
    cin>>y5;
    cout<<"������� ����� ����������� ������, Mb:"<<endl;
    cin>>y6;
    cout<<"������� ����� ����������, Gb:"<<endl;
    cin>>y7;

    params2[0]=y1;
    params2[1]=y2;
    params2[2]=y3;
    params2[3]=y4;
    params2[4]=y5;
    params2[5]=y6;
    params2[6]=y7;

    cout<<"----------------------------------------------------------------"<<endl;
    cout<<"--------------��������� ���������� A2---------------------------"<<endl;
    cout<<"----------------------------------------------------------------"<<endl;
    cout<<endl;

    A2.SetARR(y1,y2,y3,y4,y5,y6,y7);

    A2.GetARR(params2);

    A2.message();

    cin >> choice;

    if (choice=="y") {

    cout<<"����� �� ���������� �� ������ �� ��������?"<<endl;
    cin >> el;

    cout<<"������� ����� ��������:"<<endl;

    cin >> params2[el-1];

    cout<<"----------------------------------------------------------------"<<endl;
    cout<<"--------------����� ��������� ���������� A2---------------------"<<endl;
    cout<<"----------------------------------------------------------------"<<endl;
    cout<<endl;

    A2.GetARR(params2);

    cout<<endl;
        }
        }


    else if (choice=="n")
    {
    cout<<"----------------------------------------------------------------"<<endl;
    cout<<"----------��������� ������� ���������� �� ���������-------------"<<endl;
    cout<<"----------------------------------------------------------------"<<endl;

    A2.GetDefault();

    }

    else { A2.error();}

    cout<<"----------------------------------------------------------------"<<endl;
    cout<<"--------------���������� ������ ���� �����������----------------"<<endl;
    cout<<"----------------------------------------------------------------"<<endl;
    cout<<endl;


    for (int i=0; i<7; i++)
    {
    if (A1.GetVAL(i)==A2.GetVAL(i)) { cout <<A1.label(i)<< "----- 100% ����������!"<<endl;}
    else {cout <<A1.label(i)<<"-----�� ���������!"<<endl;}
    }

//����� ���������
    cout<<endl;

    A1.~comp();
    A2.~comp();

    system("pause");
    return 0;
}
