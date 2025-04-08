#include<iostream>

using namespace std;

template<typename T>
void Print(T data)
{
    cout<<"일반 함수 : "<< data <<endl;
}

template<>
void Print(float data)
{
    cout<<"특수화 함수 : "<< data <<endl;
}

template<typename T>
void Print(T* data)
{
    cout<<"포인터 함수: "<<*data<<endl;
}

int main()
{
    int i = 10;
    Print<int>(i);

    float j = 20.0f;
    Print<float>(j);

    double k = 30.0;
    Print<double>(k);

    int* p = &i;
    Print<int>(p);
}