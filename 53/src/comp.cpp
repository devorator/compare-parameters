#include "comp.h"
#include <iostream>

comp::comp():cpu_speed(2000),num_cores(2),ram(2048),fsb(1033),gpu(900),vram(1024),hdd(512)
{
    //ctor
}
comp::comp(int a, int b, int c, int d, int e, int f, int g):cpu_speed(a),num_cores(b),ram(c),fsb(d),gpu(e),vram(f),hdd(g)
{

}

comp::~comp()
{
    std::cout<<"Сработал деструктор для объекта, память очищена!"<<std::endl;//dtor
}

comp::comp(const comp& other)
{
    //copy ctor
}

comp& comp::operator=(const comp& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}

int comp::SetARR(int a,int b,int c,int d,int e,int f,int g)
 {
  arr[0]=a;
  arr[1]=b;
  arr[2]=c;
  arr[3]=d;
  arr[4]=e;
  arr[5]=f;
  arr[6]=g;
  return 0;
 }

int comp::GetDefault()
{
   for (int i=0; i<7; i++)
        std::cout<<names[i]<<arr[i]<<std::endl;
        return 0;
}

int comp::GetARR(int arr[7])
{
    for (int i=0; i<7; i++)
        std::cout<<names[i]<<arr[i]<<std::endl;
        return 0;
}

int comp::GetVAL(int i)
{
        return arr[i];
}

int comp::change()
{
    std::cout<<"Какой из параметров вы хотели бы изменить?"<<std::endl;
    std::cin >> el;

    std::cout<<"Введите новое значение:"<<std::endl;
    std::cin >> z;
    z=arr[el-1];
    return 0;
}

int comp::return_arr()
{
    return arr[7];
}

void comp::message() // функция (метод класса) выводящая сообщение на экран
    {
       std::cout<<"Вы хотели бы изменить какое нибудь значение? (y/n)"<<std::endl;
    }

void comp::error()
    {
       std::cout<<"!!!!ОШИБКА!!!!"<<std::endl;
    }

int comp::label(int i)
    {
        std::cout<<names[i];
        return i+1;
    }


