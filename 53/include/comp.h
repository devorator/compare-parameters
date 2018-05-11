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
        std::string names[7]={"1. Тактовая частота ядра процессора, Mhz : ", "2. Число ядер : ","3. Объем оперативной памяти, Gb : ","4. Частота шины, Mhz : ",
    "5. Частота ядра графического процессора, Mhz : ","6. Объем графической памяти, Mb : ","7. Объем жесткого диска, Gb : "};

};

#endif // COMP_H
