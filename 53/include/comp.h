#ifndef COMP_H
#define COMP_H
#include <iostream>


class comp
{
    public:
        comp();
        comp(int a,int b,int c,int d,int e,int f,int g);
        ~comp();
        comp(const comp& other);
        comp& operator=(const comp& other);
        int GetARR(int arr[7]);
        int GetDefault();
        int GetVAL(int i);
        int SetARR(int a,int b,int c,int d,int e,int f,int g);
        int return_arr();
        void message();
        void error();
        int label(int i);
        int change();
        int cpu_speed, num_cores, ram, fsb, gpu, vram, hdd;
        int arr[7]={1024,2,512,800,400,256,125893};
        int el,z;

    protected:
    private:
        std::string names[7]={"1. �������� ������� ���� ����������, Mhz : ", "2. ����� ���� : ","3. ����� ����������� ������, Gb : ","4. ������� ����, Mhz : ",
    "5. ������� ���� ������������ ����������, Mhz : ","6. ����� ����������� ������, Mb : ","7. ����� �������� �����, Gb : "};

};

#endif // COMP_H
