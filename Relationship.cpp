#include <iostream>

//��� Ŭ����(base class) - �θ� Ŭ����(parent class)
class Animal
{
public:
	int mValue1;

private:
	int mValue2;

protected:
	int mValue3;
};

//�Ļ� Ŭ����(derivec class) - �ڽ� Ŭ����(child class)
//Dog is-a Animal
class Dog : public Animal
{

};

int main()
{

}