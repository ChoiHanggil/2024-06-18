#include <iostream>

class Character
{
public:
    Character& MoveForward()
    {
        return *this;
    }
    Character& TurnLeft()
    {
        return *this;
    }
    Character& TurnRight()
    {
        return *this;
    }
    Character& Swing()
    {
        return *this;
    }
};
//---------------------------------------------

class MyClass
{
public:
    int* p;

    MyClass()
    {
        p = new int[10];
    }
    //복사생성자
    MyClass(const MyClass& param)
    {
        p = new int[10];
        for (int i = 0; i < 10; i++)
        {
            p[i] = param.p[i];
        }
    }
    //만드는 역순으로 사라진다. 후입선출
    ~MyClass()
    {
        delete[] p;
    }

    MyClass& operator = (const MyClass& param)
    {
        for (int i = 0; i < 10; i++)
        {
            p[i] = param.p[i];
        }
    }
};

int main()
{
    /*
    Character p;

    //연출/UI
    p.MoveForward()
        .TurnLeft()
        .TurnRight()
        .Swing();
     */
    
    MyClass a;
    //깊은 복사
    //얕은 복사
    MyClass b = a;

   
}

