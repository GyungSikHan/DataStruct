#include<iostream>
#include<string>

using namespace std;

template<typename T>
class Character
{
public:
    void Set(T name)
    {
        this->name = name;
    }

    void Print()
    {
        cout<<"캐릭터 : "<<name<<endl;
    }

private:
    T name;
};

int main()
{
    Character<int> ob;
    ob.Set(20);
    ob.Print();
}