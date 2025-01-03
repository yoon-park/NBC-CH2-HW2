#include <iostream>
#include <array>
#include <cstdlib>
#include <ctime>

#include "Animal.h"

using namespace std;

int main()
{
	// <�ʼ� ���>

	array<Animal*, 3> Animals;
	Dog *dog = new Dog();
	Cat *cat = new Cat();
	Cow *cow = new Cow();
	
	Animals[0] = dog;
	Animals[1] = cat;
	Animals[2] = cow;

	for (auto& element : Animals)
	{
		element->makeSound();
	}

	// <���� ���>
	
	// ���� ������ �����ϴ� �Լ�
	// - 0, 1, 2 �� �ϳ��� ������ �����Ͽ� ���� Dog, Cat, Cow ��ü �� �ϳ��� �������� �����մϴ�.
	// - ������ ��ü�� Animal Ÿ���� �����ͷ� ��ȯ�˴ϴ�.
	// - �Է� �Ű�����: ����
	// - ��ȯ��: Animal* (������ ���� ��ü�� ������)
	Animal* createRandomAnimal();
}