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

    virtual void Print() = 0;

protected:
    T name;
};

class Player : public Character<int>
{
public:
    void Print() override
    {
        printf("플레이어 : %d\n", name);
    }

};

class Enemy : public Character<string>
{
public:
    void Print() override
    {
        printf("에너미 : %s\n", name.c_str());
    }
};

int main()
{
    //Character<int> ob;//순수 가상함수가 포함되어 구현하지 않으면 사용 못함
    //자식도 순수 가상함수를 구현하지 않으면 사용하지 못함
    Player p;
    p.Set(39);
    p.Print();

    Enemy e;
    e.Set("Test");
    e.Print();
}