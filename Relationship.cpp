#include <iostream>

//기반 클래스(base class) - 부모 클래스(parent class)
class Animal
{
public:
	int mValue1;

private:
	int mValue2;

protected:
	int mValue3;
};

//파생 클래스(derivec class) - 자식 클래스(child class)
//Dog is-a Animal
class Dog : public Animal
{

};

int main()
{

}