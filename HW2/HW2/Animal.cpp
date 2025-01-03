#include "Animal.h"

#include <iostream>

using namespace std;

Animal::~Animal()
{

}

void Dog::makeSound()
{
	cout << "Dog : \"Woof!\"" << endl;
}

void Cat::makeSound()
{
	cout << "Cat : \"Meow\"" << endl;
}

void Cow::makeSound()
{
	cout << "Cow : \"Moo~\"" << endl;
}

Zoo::~Zoo()
{
	/*
	Zoo �Ҹ���
	- Zoo ��ü�� �Ҹ�� ��, ���� ���Ϳ� ����� ��� ���� ��ü�� �޸𸮸� �����մϴ�.
	- �޸� ������ �����ϱ� ���� ���� �Ҵ�� Animal ��ü�� `delete` �մϴ�.
	- �Է� �Ű�����: ����
	- ��ȯ��: ����
	*/
}

void Zoo::addAnimal(Animal* animal)
{
	/*
	������ �������� �߰��ϴ� �Լ�
	- Animal ��ü�� �����͸� �޾� ������ �迭�� �����մϴ�.
	- ���� �����̶� ���� �� �߰��� �� �ֽ��ϴ�.
	- �Է� �Ű�����: Animal* (�߰��� ���� ��ü)
	- ��ȯ��: ����
	*/


}

void Zoo::performActions()
{
	/*
	�������� �ִ� ��� ������ �ൿ�� �����ϴ� �Լ�
    - ��� ���� ��ü�� ���� ���������� �Ҹ��� ���� �����̴� ������ �����մϴ�.
    - �Է� �Ű�����: ����
    - ��ȯ��: ����
	*/


}